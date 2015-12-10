//
//  Circle.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "../../GenericIncludes.h"

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
             * @param colour is the fill/edge colour (RED [0-255], GREEN [0-255], BLUE [0-255])
             */
            void DrawCircle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLint numberOfSides, const GLboolean isHollow, const GLfloat colour[3] );
        }
    }
}

#endif /* CIRCLE_H */
