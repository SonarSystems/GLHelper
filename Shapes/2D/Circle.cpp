//
//  Circle.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Circle.h"

#include <math.h>

GLHelper::Shapes2D::Circle::Circle( )
{
    this->radius = 1;
    this->numberOfSides = 36;
}

void GLHelper::Shapes2D::Circle::Draw( )
{
    GLint numberOfVertices;
    int startingIndex = 1;
    
    if ( isWireframe )
    {
        numberOfVertices = numberOfSides + 1;
        startingIndex = 0;
    }
    else
    {
        numberOfVertices = numberOfSides + 2;
    }
    
    GLfloat vertices[numberOfVertices * 3];
    vertices[0] = centerPosition.x;
    vertices[1] = centerPosition.y;
    vertices[2] = centerPosition.z;
    
    GLfloat doublePi = 2.0f * M_PI;
    
    for ( int i = startingIndex; i < numberOfVertices; i++ )
    {
        vertices[i * 3] = centerPosition.x + ( radius * cos( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 1] = centerPosition.y + ( radius * sin( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 2] = centerPosition.z;
    }
    
    glPushMatrix( );
    glColor3f( colour.r, colour.g, colour.b );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isWireframe )
    { glDrawArrays( GL_LINE_STRIP, 0, numberOfVertices ); }
    else
    { glDrawArrays( GL_TRIANGLE_FAN, 0, numberOfVertices ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}

void GLHelper::Shapes2D::Circle::SetRadius( GLfloat radius )
{
    this->radius = radius;
}

GLfloat GLHelper::Shapes2D::Circle::GetRadius( )
{
    return this->radius;
}

void GLHelper::Shapes2D::Circle::SetNumberOfSides( GLint numberOfSides )
{
    this->numberOfSides = numberOfSides;
}

GLint GLHelper::Shapes2D::Circle::GetNumberOfSides( )
{
    return this->numberOfSides;
}