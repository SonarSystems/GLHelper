//
//  Circle.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <GL/glew.h>

namespace GLHelper
{
    namespace Shapes2D
    {
        namespace Triangle
        {
            /**
             * Draw an equilateral triangle
             * @param xCenterPos x-axis coordinate for the center of the triangle
             * @param yCenterPos y-axis coordinate for the center of the triangle
             * @param zCenterPos z-axis coordinate for the center of the triangle
             * @param sideLength each of the triangles sides length
             * @param isHollow is the triangle hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawTriangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLboolean isHollow, const GLfloat ( &colour )[3] );
            
            /**
             * Draw a triangle by specifying an array with all 3 vertices
             * @param vertices all 3 vertices (x1, y1, z1, x2, y2, z2, x3, y3, z3)
             * @param isHollow is the triangle hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawTriangle( const GLfloat vertices[9], const GLboolean isHollow, const GLfloat ( &colour )[3] );
            
            /**
             * Draw a triangle by specifying the xyz coordinates for each vertex
             * @param vertex1X x coordinate for the first vertex
             * @param vertex1Y y coordinate for the first vertex
             * @param vertex1Z z coordinate for the first vertex
             * @param vertex2X x coordinate for the second vertex
             * @param vertex2Y y coordinate for the second vertex
             * @param vertex2Z z coordinate for the second vertex
             * @param vertex3X x coordinate for the third vertex
             * @param vertex3Y y coordinate for the third vertex
             * @param vertex3Z z coordinate for the third vertex
             * @param isHollow is the triangle hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            inline void DrawTriangle( const GLfloat vertex1X, const GLfloat vertex1Y, const GLfloat vertex1Z, const GLfloat vertex2X, const GLfloat vertex2Y, const GLfloat vertex2Z, const GLfloat vertex3X, const GLfloat vertex3Y, const GLfloat vertex3Z, const GLboolean isHollow, const GLfloat ( &colour )[3] )
            { DrawTriangle( new GLfloat[9]{vertex1X, vertex1Y, vertex1Z, vertex2X, vertex2Y, vertex2Z, vertex3X, vertex3Y, vertex3Z}, isHollow, colour ); }
            
            /**
             * Draw a triangle by specifying an array (x, y, z) for each vertex
             * @param vertex1 first vertex
             * @param vertex2 second vertex
             * @param vertex3 third vertex
             * @param isHollow is the triangle hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            inline void DrawTriangle( const GLfloat vertex1[3], const GLfloat vertex2[3], const GLfloat vertex3[3], const GLboolean isHollow, const GLfloat ( &colour )[3] )
            { DrawTriangle( new GLfloat[9]{vertex1[0], vertex1[1], vertex1[2], vertex2[0], vertex2[1], vertex2[2], vertex3[0], vertex3[1], vertex3[2]}, isHollow, colour ); }
        }
    }
}

#endif /* TRIANGLE_H */
