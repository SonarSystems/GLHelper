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
// shortcut for using namespace Shapes;
#define USING_NS_SHAPES USING_NS_GLH using namespace Shapes;
// shortcut for using namespace Circle;
#define USING_NS_CIRCLE USING_NS_SHAPES using namespace Circle;
// shortcut for using namespace Triangle;
#define USING_NS_TRIANGLE USING_NS_SHAPES using namespace Triangle;

namespace GLHelper
{
    namespace Shapes
    {
        namespace Circle
        {
            /**
             * Draw a circle
             * @param xPos x-axis coordinate for the center of the circle
             * @param yPos y-axis coordinate for the center of the circle
             * @param zPos z-axis coordinate for the center of the circle
             * @param radius circle radius
             * @param numberOfSides how many sides does the circle have
             */
            void DrawCircle( GLfloat xPos, GLfloat yPos, GLfloat zPos, GLfloat radius, GLint numberOfSides );
            
            /**
             * Draw a hollow circle
             * @param xPos x-axis coordinate for the center of the circle
             * @param yPos y-axis coordinate for the center of the circle
             * @param zPos z-axis coordinate for the center of the circle
             * @param radius circle radius
             * @param numberOfSides how many sides does the circle have
             */
            void DrawHollowCircle( GLfloat xPos, GLfloat yPos, GLfloat zPos, GLfloat radius, GLint numberOfSides );
        }
        
        namespace Triangle
        {
            /**
             * Draw an equilateral triangle
             * @param xCenterPos x-axis coordinate for the center of the triangle
             * @param yCenterPos y-axis coordinate for the center of the triangle
             * @param zCenterPos z-axis coordinate for the center of the triangle
             * @param sideLength each of the triangles sides length
             */
            void DrawTriangle( GLfloat xCenterPos, GLfloat yCenterPos, GLfloat zCenterPos, GLfloat sideLength );
            
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
             */
            void DrawTriangle( GLfloat vertex1X, GLfloat vertex1Y, GLfloat vertex1Z, GLfloat vertex2X, GLfloat vertex2Y, GLfloat vertex2Z, GLfloat vertex3X, GLfloat vertex3Y, GLfloat vertex3Z );
            
            /**
             * Draw a triangle by specifying an array (x, y, z) for each vertex
             * @param vertex1 first vertex
             * @param vertex2 second vertex
             * @param vertex3 third vertex
             */
            void DrawTriangle( GLfloat vertex1[3], GLfloat vertex2[3], GLfloat vertex3[3] );
            
            /**
             * Draw a triangle by specifying an array with all 3 vertices
             * @param vertices all 3 vertices (x1, y1, z1, x2, y2, z2, x3, y3, z3)
             */
            void DrawTriangle( GLfloat vertices[9] );
        }
    }
}

#endif /* GLHelper_hpp */
