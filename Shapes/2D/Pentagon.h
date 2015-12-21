//
//  Pentagon.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef PENTAGON_H
#define PENTAGON_H

#include <GL/glew.h>

namespace GLHelper
{
    namespace Shapes2D
    {
        namespace Pentagon
        {
            /**
             * Draw an equilateral pentagon
             * @param xCenterPos x-axis coordinate for the center of the pentagon
             * @param yCenterPos y-axis coordinate for the center of the pentagon
             * @param zCenterPos z-axis coordinate for the center of the pentagon
             * @param radius pentagon radius
             * @param isHollow is the pentagon hollow or filled in
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawPentagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow, const GLfloat ( &colour )[3] );
        }
    }
}

#endif /* PENTAGON_H */
