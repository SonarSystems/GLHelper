//
//  Cube.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Cube.h"

void GLHelper::Shapes3D::Cube::DrawCube( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat edgeLength, const GLfloat isWireframe, const GLfloat colour[3] )
{
    GLfloat halfSideLength = edgeLength * 0.5f;
    
    GLfloat vertices[] =
    {
        // front face
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos + halfSideLength, // top left
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos + halfSideLength, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos + halfSideLength, // bottom right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos + halfSideLength, // bottom left
        
        // back face
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos - halfSideLength, // top left
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos - halfSideLength, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos - halfSideLength, // bottom right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos - halfSideLength, // bottom left
        
        // left face
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos + halfSideLength, // top left
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos - halfSideLength, // top right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos - halfSideLength, // bottom right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos + halfSideLength, // bottom left
        
        // right face
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos + halfSideLength, // top left
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos - halfSideLength, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos - halfSideLength, // bottom right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos + halfSideLength, // bottom left
        
        // top face
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos + halfSideLength, // top left
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos - halfSideLength, // top right
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos - halfSideLength, // bottom right
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos + halfSideLength, // bottom left
        
        // top face
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos + halfSideLength, // top left
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos - halfSideLength, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos - halfSideLength, // bottom right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos + halfSideLength  // bottom left
    };
    
    /*GLubyte colors[] = {
        
        255, 0, 0,
        255, 0, 0,
        255, 0, 0,
        255, 0, 0,
        
        0, 0, 255,
        0, 0, 255,
        0, 0, 255,
        0, 0, 255,
        
        0, 255, 0,
        0, 255, 0,
        0, 255, 0,
        0, 255, 0,
        
        255, 0, 255,
        255, 0, 255,
        255, 0, 255,
        255, 0, 255,
        
        0, 255, 255,
        0, 255, 255,
        0, 255, 255,
        0, 255, 255,
        
        255, 255, 255,
        255, 255, 255,
        255, 255, 255,
        255, 255, 255,
    };*/
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    //glEnableClientState( GL_COLOR_ARRAY );
    glEnableClientState( GL_VERTEX_ARRAY );
    //glColorPointer( 3, GL_UNSIGNED_BYTE, 0, colors );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isWireframe )
    {
        glDrawArrays( GL_LINE_LOOP, 0, 4 );
        glDrawArrays( GL_LINE_LOOP, 4, 4 );
        glDrawArrays( GL_LINE_LOOP, 8, 4 );
        glDrawArrays( GL_LINE_LOOP, 12, 4 );
        glDrawArrays( GL_LINE_LOOP, 16, 4 );
        glDrawArrays( GL_LINE_LOOP, 20, 4 );
    }
    else
    {
        glDrawArrays( GL_QUADS, 0, 24 );
    }
    glDisableClientState( GL_VERTEX_ARRAY );
    //glDisableClientState( GL_COLOR_ARRAY );
    glPopMatrix( );
}