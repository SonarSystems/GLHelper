//
//  Hexagon.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef HEXAGON_H
#define HEXAGON_H

#include <GL/glew.h>

namespace GLHelper
{
    namespace Shapes2D
    {
        namespace Hexagon
        {
            /**
             * Draw an equilateral hexagon
             * @param xCenterPos x-axis coordinate for the center of the hexagon
             * @param yCenterPos y-axis coordinate for the center of the hexagon
             * @param zCenterPos z-axis coordinate for the center of the hexagon
             * @param radius hexagon radius
             * @param isHollow is the hexagon hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawHexagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow, const GLfloat ( &colour )[3] );
        }
    }
}

#endif /* HEXAGON_H */
