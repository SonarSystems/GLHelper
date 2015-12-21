//
//  Quad.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef QUAD_H
#define QUAD_H

#include <GL/glew.h>

namespace GLHelper
{
    namespace Shapes2D
    {
        namespace Quad
        {
            /**
             * Draw a square
             * @param xCenterPos x-axis coordinate for the center of the square
             * @param yCenterPos y-axis coordinate for the center of the square
             * @param zCenterPos z-axis coordinate for the center of the square
             * @param sideLength length of the square's sides
             * @param isHollow is the square hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawSquare( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLfloat isHollow, const GLfloat ( &colour )[3] );
            
            /**
             * Draw a quad
             * @param topLeftVertex top left vertex array
             * @param topRightVertex top right vertex array
             * @param bottomRightVertex bottom right vertex array
             * @param bottomLeftVertex bottom left vertex array
             * @param isHollow is the quad hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawQuad( const GLfloat topLeftVertex[3], const GLfloat topRightVertex[3], const GLfloat bottomRightVertex[3], const GLfloat bottomLeftVertex[3], const GLboolean isHollow, const GLfloat ( &colour )[3] );
            
            /**
             * Draw a rectangle
             * @param xCenterPos x-axis coordinate for the center of the rectangle
             * @param yCenterPos y-axis coordinate for the center of the rectangle
             * @param zCenterPos z-axis coordinate for the center of the rectangle
             * @param width width (length along the x-axis) of the rectangle
             * @param height height (length along the y-axis) of the rectangle
             * @param isHollow is the rectangle hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawRectangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat width, const GLfloat height, const GLboolean isHollow, const GLfloat ( &colour )[3] );
        }
    }
}

#endif /* QUAD_H */
