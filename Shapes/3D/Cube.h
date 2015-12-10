//
//  Cube.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef CUBE_H
#define CUBE_H

#include "../../GenericIncludes.h"

namespace GLHelper
{
    namespace Shapes3D
    {
        namespace Cube
        {
            /**
             * Draw a cube by specifying the center position of the cube and the length of each edge
             * @param xCenterPos x-axis coordinate for the center of the cube
             * @param yCenterPos y-axis coordinate for the center of the cube
             * @param zCenterPos z-axis coordinate for the center of the cube
             * @param isHollow is the triangle hollow or filled in
             * @param isWireframe is the cube rendered in wireframe or normal mode
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawCube( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat edgeLength, const GLfloat isWireframe, const GLfloat colour[3] );
        }
    }
}


#endif /* CUBE_H */
