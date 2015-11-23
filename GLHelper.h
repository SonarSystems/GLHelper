//
//  GLHelper.hpp
//  GLHelper
//
//  Created by Sonar Systems on 19/11/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef GLHelper_h
#define GLHelper_h

// ASSUMES YOU HAVE GLEW SETUP

#include <GL/glew.h>
#include <math.h>

// shortcut for using GLHelper
#define GLH GLHelper
// shortcut for using namespace GLHelper;
#define USING_NS_GLH using namespace GLHelper;
// shortcut for using namespace Shapes2D;
#define USING_NS_SHAPES_2D USING_NS_GLH using namespace Shapes2D;
// shortcut for using namespace Circle;
#define USING_NS_CIRCLE USING_NS_SHAPES_2D using namespace Circle;
// shortcut for using namespace Triangle;
#define USING_NS_TRIANGLE USING_NS_SHAPES_2D using namespace Triangle;
// shortcut for using namespace Quad;
#define USING_NS_QUAD USING_NS_SHAPES_2D using namespace Quad;
// shortcut for using namespace Pentagon;
#define USING_NS_PENTAGON USING_NS_SHAPES_2D using namespace Pentagon;
// shortcut for using namespace Hexagon;
#define USING_NS_HEXAGON USING_NS_SHAPES_2D using namespace Hexagon;

namespace GLHelper
{
    namespace Shapes2D
    {
        namespace Circle
        {
            /**
             * Draw a circle
             * @param xCenterPos x-axis coordinate for the center of the circle
             * @param yCenterPos y-axis coordinate for the center of the circle
             * @param zCenterPos z-axis coordinate for the center of the circle
             * @param radius circle radius
             * @param numberOfSides how many sides does the circle have
             * @param isHollow is the circle hollow or filled in
             */
            void DrawCircle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLint numberOfSides, const GLboolean isHollow );
        }
        
        namespace Triangle
        {
            /**
             * Draw an equilateral triangle
             * @param xCenterPos x-axis coordinate for the center of the triangle
             * @param yCenterPos y-axis coordinate for the center of the triangle
             * @param zCenterPos z-axis coordinate for the center of the triangle
             * @param sideLength each of the triangles sides length
             * @param isHollow is the triangle hollow or filled in
             */
            void DrawTriangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLboolean isHollow );
            
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
             */
            void DrawTriangle( const GLfloat vertex1X, const GLfloat vertex1Y, const GLfloat vertex1Z, const GLfloat vertex2X, const GLfloat vertex2Y, const GLfloat vertex2Z, const GLfloat vertex3X, const GLfloat vertex3Y, const GLfloat vertex3Z, const GLboolean isHollow );
            
            /**
             * Draw a triangle by specifying an array (x, y, z) for each vertex
             * @param vertex1 first vertex
             * @param vertex2 second vertex
             * @param vertex3 third vertex
             * @param isHollow is the triangle hollow or filled in
             */
            void DrawTriangle( const GLfloat vertex1[3], const GLfloat vertex2[3], const GLfloat vertex3[3], const GLboolean isHollow );
            
            /**
             * Draw a triangle by specifying an array with all 3 vertices
             * @param vertices all 3 vertices (x1, y1, z1, x2, y2, z2, x3, y3, z3)
             * @param isHollow is the triangle hollow or filled in
             */
            void DrawTriangle( const GLfloat vertices[9], const GLboolean isHollow );
        }
        
        namespace Quad
        {
            /**
             * Draw a square
             * @param xCenterPos x-axis coordinate for the center of the square
             * @param yCenterPos y-axis coordinate for the center of the square
             * @param zCenterPos z-axis coordinate for the center of the square
             * @param sideLength length of the square's sides
             * @param isHollow is the square hollow or filled in
             */
            void DrawSquare( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLfloat isHollow );
            
            /**
             * Draw a quad
             * @param topLeftVertex top left vertex array
             * @param topRightVertex top right vertex array
             * @param bottomRightVertex bottom right vertex array
             * @param bottomLeftVertex bottom left vertex array
             * @param isHollow is the quad hollow or filled in
             */
            void DrawQuad( const GLfloat topLeftVertex[3], const GLfloat topRightVertex[3], const GLfloat bottomRightVertex[3], const GLfloat bottomLeftVertex[3], const GLboolean isHollow );
            
            /**
             * Draw a rectangle
             * @param xCenterPos x-axis coordinate for the center of the rectangle
             * @param yCenterPos y-axis coordinate for the center of the rectangle
             * @param zCenterPos z-axis coordinate for the center of the rectangle
             * @param width width (length along the x-axis) of the rectangle
             * @param height height (length along the y-axis) of the rectangle
             * @param isHollow is the rectangle hollow or filled in
             */
            void DrawRectangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat width, const GLfloat height, const GLboolean isHollow );
        }
        
        namespace Pentagon
        {
            /**
             * Draw an equilateral pentagon
             * @param xCenterPos x-axis coordinate for the center of the pentagon
             * @param yCenterPos y-axis coordinate for the center of the pentagon
             * @param zCenterPos z-axis coordinate for the center of the pentagon
             * @param radius pentagon radius
             * @param isHollow is the pentagon hollow or filled in
             */
            void DrawPentagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow );
        }
        
        namespace Hexagon
        {
            /**
             * Draw an equilateral hexagon
             * @param xCenterPos x-axis coordinate for the center of the hexagon
             * @param yCenterPos y-axis coordinate for the center of the hexagon
             * @param zCenterPos z-axis coordinate for the center of the hexagon
             * @param radius hexagon radius
             * @param isHollow is the hexagon hollow or filled in
             */
            void DrawHexagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow );
        }
    }
    
    namespace Shapes3D
    {
        namespace Cube
        {
            void DrawCube( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat edgeLength, const GLfloat isWireframe );
        }
    }
}

#endif /* GLHelper_hpp */
