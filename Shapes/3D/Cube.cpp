//
//  Cube.cpp
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Cube.h"

GLHelper::Shapes3D::Cube::Cube( )
{
    this->centerPosition.x = 0;
    this->centerPosition.y = 0;
    this->centerPosition.z = 0;
    
    this->edgeLength = 1;
}

void GLHelper::Shapes3D::Cube::Draw( )
{
    GLfloat halfSideLength = edgeLength * 0.5f;
    
    GLfloat vertices[] =
    {
        // front face
        centerPosition.x - halfSideLength, centerPosition.y + halfSideLength, centerPosition.z + halfSideLength, // top left
        centerPosition.x + halfSideLength, centerPosition.y + halfSideLength, centerPosition.z + halfSideLength, // top right
        centerPosition.x + halfSideLength, centerPosition.y - halfSideLength, centerPosition.z + halfSideLength, // bottom right
        centerPosition.x - halfSideLength, centerPosition.y - halfSideLength, centerPosition.z + halfSideLength, // bottom left
        
        // back face
        centerPosition.x - halfSideLength, centerPosition.y + halfSideLength, centerPosition.z - halfSideLength, // top left
        centerPosition.x + halfSideLength, centerPosition.y + halfSideLength, centerPosition.z - halfSideLength, // top right
        centerPosition.x + halfSideLength, centerPosition.y - halfSideLength, centerPosition.z - halfSideLength, // bottom right
        centerPosition.x - halfSideLength, centerPosition.y - halfSideLength, centerPosition.z - halfSideLength, // bottom left
        
        // left face
        centerPosition.x - halfSideLength, centerPosition.y + halfSideLength, centerPosition.z + halfSideLength, // top left
        centerPosition.x - halfSideLength, centerPosition.y + halfSideLength, centerPosition.z - halfSideLength, // top right
        centerPosition.x - halfSideLength, centerPosition.y - halfSideLength, centerPosition.z - halfSideLength, // bottom right
        centerPosition.x - halfSideLength, centerPosition.y - halfSideLength, centerPosition.z + halfSideLength, // bottom left
        
        // right face
        centerPosition.x + halfSideLength, centerPosition.y + halfSideLength, centerPosition.z + halfSideLength, // top left
        centerPosition.x + halfSideLength, centerPosition.y + halfSideLength, centerPosition.z - halfSideLength, // top right
        centerPosition.x + halfSideLength, centerPosition.y - halfSideLength, centerPosition.z - halfSideLength, // bottom right
        centerPosition.x + halfSideLength, centerPosition.y - halfSideLength, centerPosition.z + halfSideLength, // bottom left
        
        // top face
        centerPosition.x - halfSideLength, centerPosition.y + halfSideLength, centerPosition.z + halfSideLength, // top left
        centerPosition.x - halfSideLength, centerPosition.y + halfSideLength, centerPosition.z - halfSideLength, // top right
        centerPosition.x + halfSideLength, centerPosition.y + halfSideLength, centerPosition.z - halfSideLength, // bottom right
        centerPosition.x + halfSideLength, centerPosition.y + halfSideLength, centerPosition.z + halfSideLength, // bottom left
        
        // top face
        centerPosition.x - halfSideLength, centerPosition.y - halfSideLength, centerPosition.z + halfSideLength, // top left
        centerPosition.x - halfSideLength, centerPosition.y - halfSideLength, centerPosition.z - halfSideLength, // top right
        centerPosition.x + halfSideLength, centerPosition.y - halfSideLength, centerPosition.z - halfSideLength, // bottom right
        centerPosition.x + halfSideLength, centerPosition.y - halfSideLength, centerPosition.z + halfSideLength  // bottom left
    };
    
    glPushMatrix( );
    glColor3f( colour[0], colour[1], colour[2] );
    glEnableClientState( GL_VERTEX_ARRAY );
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
    glPopMatrix( );
}

void GLHelper::Shapes3D::Cube::SetCenterPosition( GLfloat x, GLfloat y, GLfloat z )
{
    this->centerPosition.x = x;
    this->centerPosition.y = y;
    this->centerPosition.z = z;
}


void GLHelper::Shapes3D::Cube::SetCenterPositionX( GLfloat x )
{
    this->centerPosition.x = x;
}

void GLHelper::Shapes3D::Cube::SetCenterPositionY( GLfloat y )
{
    
    this->centerPosition.y = y;
}

void GLHelper::Shapes3D::Cube::SetCenterPositionZ( GLfloat z )
{
    
    this->centerPosition.z = z;
}

glm::vec3 GLHelper::Shapes3D::Cube::GetCenterPosition( )
{
    return this->centerPosition;
}

GLfloat GLHelper::Shapes3D::Cube::GetCenterPositionX( )
{
    return this->centerPosition.x;
}

GLfloat GLHelper::Shapes3D::Cube::GetCenterPositionY( )
{
    return this->centerPosition.y;
}

GLfloat GLHelper::Shapes3D::Cube::GetCenterPositionZ( )
{
    return this->centerPosition.z;
}

void GLHelper::Shapes3D::Cube::SetEdgeLength( GLfloat edgeLength )
{
    this->edgeLength = edgeLength;
}

bool GLHelper::Shapes3D::Cube::GetEdgeLength( )
{
    return this->edgeLength;
}

