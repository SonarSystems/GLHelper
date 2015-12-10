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
#include <vector>

// shortcuts for using GLHelper
#define GLH GLHelper
#define GLCore GLHelper
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

#define COLOUR_RED new GLfloat[3]{255, 0, 0}
#define COLOR_RED COLOUR_RED // for Americans
#define COLOUR_GREEN new GLfloat[3]{0, 255, 0}
#define COLOR_GREEN COLOUR_GREEN // for Americans
#define COLOUR_BLUE new GLfloat[3]{0, 0, 255}
#define COLOR_BLUE COLOUR_BLUE // for Americans
#define COLOUR_YELLOW new GLfloat[3]{255, 255, 0}
#define COLOR_YELLOW COLOUR_YELLOW // for Americans
#define COLOUR_CYAN new GLfloat[3]{0, 255, 255}
#define COLOR_CYAN COLOUR_CYAN // for Americans
#define COLOUR_MAGENTA new GLfloat[3]{255, 0, 255}
#define COLOR_MAGENTA COLOUR_MAGENTA // for Americans
#define COLOUR_WHITE new GLfloat[3]{255, 255, 255}
#define COLOR_WHITE COLOUR_WHITE // for Americans
#define COLOUR_BLACK new GLfloat[3]{0, 0, 0}
#define COLOR_BLACK COLOUR_BLACK // for Americans


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
             * @param colour is the fill/edge colour
             */
            void DrawCircle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLint numberOfSides, const GLboolean isHollow, const GLfloat colour[3] );
            
            /**
             * Draw a circle
             * @param xCenterPos x-axis coordinate for the center of the circle
             * @param yCenterPos y-axis coordinate for the center of the circle
             * @param zCenterPos z-axis coordinate for the center of the circle
             * @param radius circle radius
             * @param numberOfSides how many sides does the circle have
             * @param isHollow is the circle hollow or filled in
             */
            inline void DrawCircle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLint numberOfSides, const GLboolean isHollow )
            { GLHelper::Shapes2D::Circle::DrawCircle( xCenterPos, yCenterPos, zCenterPos, radius, numberOfSides, isHollow, COLOR_WHITE ); }
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
             * Draw a triangle by specifying an array with all 3 vertices
             * @param vertices all 3 vertices (x1, y1, z1, x2, y2, z2, x3, y3, z3)
             * @param isHollow is the triangle hollow or filled in
             */
            void DrawTriangle( const GLfloat vertices[9], const GLboolean isHollow );
            
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
            inline void DrawTriangle( const GLfloat vertex1X, const GLfloat vertex1Y, const GLfloat vertex1Z, const GLfloat vertex2X, const GLfloat vertex2Y, const GLfloat vertex2Z, const GLfloat vertex3X, const GLfloat vertex3Y, const GLfloat vertex3Z, const GLboolean isHollow )
            { DrawTriangle( new GLfloat[9]{vertex1X, vertex1Y, vertex1Z, vertex2X, vertex2Y, vertex2Z, vertex3X, vertex3Y, vertex3Z}, isHollow ); }
            
            /**
             * Draw a triangle by specifying an array (x, y, z) for each vertex
             * @param vertex1 first vertex
             * @param vertex2 second vertex
             * @param vertex3 third vertex
             * @param isHollow is the triangle hollow or filled in
             */
            inline void DrawTriangle( const GLfloat vertex1[3], const GLfloat vertex2[3], const GLfloat vertex3[3], const GLboolean isHollow )
            { DrawTriangle( new GLfloat[9]{vertex1[0], vertex1[1], vertex1[2], vertex2[0], vertex2[1], vertex2[2], vertex3[0], vertex3[1], vertex3[2]}, isHollow ); }
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
