//
//  Circle.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Circle.h"

void GLHelper::Shapes2D::Circle::DrawCircle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLint numberOfSides, const GLboolean isHollow, const GLfloat colour[3] )
{
    GLint numberOfVertices;
    int startingIndex = 1;
    
    if ( isHollow )
    {
        numberOfVertices = numberOfSides + 1;
        startingIndex = 0;
    }
    else
    {
        numberOfVertices = numberOfSides + 2;
    }
    
    GLfloat vertices[numberOfVertices * 3];
    vertices[0] = xCenterPos;
    vertices[1] = yCenterPos;
    vertices[2] = zCenterPos;
    
    GLfloat doublePi = 2.0f * M_PI;
    
    for ( int i = startingIndex; i < numberOfVertices; i++ )
    {
        vertices[i * 3] = xCenterPos + ( radius * cos( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 1] = yCenterPos + ( radius * sin( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 2] = zCenterPos;
    }
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_STRIP, 0, numberOfVertices ); }
    else
    { glDrawArrays( GL_TRIANGLE_FAN, 0, numberOfVertices ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}