//
//  Triangle.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Triangle.h"

#include <math.h>

void GLHelper::Shapes2D::Triangle::DrawTriangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLboolean isHollow, const GLfloat ( &colour )[3] )
{
    GLfloat halfSideLength = sideLength * 0.5;
    GLfloat triangleHeight = sqrtf( powf( sideLength, 2 ) - powf( halfSideLength, 2 ) );
    GLfloat halfTriangleHeight = triangleHeight * 0.5f;
    
    float vertices[] =
    {
        xCenterPos, yCenterPos + halfTriangleHeight, zCenterPos,
        xCenterPos - halfSideLength, yCenterPos - halfTriangleHeight, zCenterPos,
        xCenterPos + halfSideLength, yCenterPos - halfTriangleHeight, zCenterPos
    };
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 3 ); }
    else
    { glDrawArrays( GL_TRIANGLES, 0, 3 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}

void GLHelper::Shapes2D::Triangle::DrawTriangle( const GLfloat vertices[9], const GLboolean isHollow, const GLfloat ( &colour )[3] )
{
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 3 ); }
    else
    { glDrawArrays( GL_TRIANGLES, 0, 3 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}