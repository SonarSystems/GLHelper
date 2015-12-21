//
//  Quad.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Quad.h"

void GLHelper::Shapes2D::Quad::DrawSquare( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLfloat isHollow, const GLfloat ( &colour )[3] )
{
    GLfloat halfSideLength = sideLength * 0.5f;
    
    GLfloat vertices[] =
    {
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos, // top left
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos, // bottom right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos // bottom left
    };
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}

void GLHelper::Shapes2D::Quad::DrawQuad( const GLfloat topLeftVertex[3], const GLfloat topRightVertex[3], const GLfloat bottomRightVertex[3], const GLfloat bottomLeftVertex[3], const GLboolean isHollow, const GLfloat ( &colour )[3] )
{
    GLfloat vertices[] =
    {
        topLeftVertex[0], topLeftVertex[1], topLeftVertex[2], // top left
        topRightVertex[0], topRightVertex[1], topRightVertex[2], // top right
        bottomRightVertex[0], bottomRightVertex[1], bottomRightVertex[2], // bottom right
        bottomLeftVertex[0], bottomLeftVertex[1], bottomLeftVertex[2] // bottom left
    };
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}

void GLHelper::Shapes2D::Quad::DrawRectangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat width, const GLfloat height, const GLboolean isHollow, const GLfloat ( &colour )[3] )
{
    GLfloat halfWidth = width * 0.5f;
    GLfloat halfHeight = height * 0.5f;
    
    GLfloat vertices[] =
    {
        xCenterPos - halfWidth, yCenterPos + halfHeight, zCenterPos, // top left
        xCenterPos + halfWidth, yCenterPos + halfHeight, zCenterPos, // top right
        xCenterPos + halfWidth, yCenterPos - halfHeight, zCenterPos, // bottom right
        xCenterPos - halfWidth, yCenterPos - halfHeight, zCenterPos // bottom left
    };
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
    glPopMatrix( );
}