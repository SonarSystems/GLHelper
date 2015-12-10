//
//  Pentagon.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Pentagon.h"

void GLHelper::Shapes2D::Pentagon::DrawPentagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow, const GLfloat colour[3] )
{
    GLHelper::Shapes2D::Circle::DrawCircle( xCenterPos, yCenterPos, zCenterPos, radius, 5, isHollow, colour );
}