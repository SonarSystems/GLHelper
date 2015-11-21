//
//  GLHelper.cpp
//  GLHelper
//
//  Created by Sonar Systems on 19/11/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "GLHelper.h"

void GLHelper::Shapes::Circle::DrawCircle( GLfloat xPos, GLfloat yPos, GLfloat zPos, GLfloat radius, GLint numberOfSides )
{
    GLint numberOfVertices = numberOfSides + 2;
    
    GLfloat doublePi = 2.0f * M_PI;
    
    GLfloat vertices[numberOfVertices * 3];
    vertices[0] = xPos;
    vertices[1] = yPos;
    vertices[2] = zPos;
    
    for ( int i = 1; i < numberOfVertices; i++ )
    {
        vertices[i * 3] = xPos + ( radius * cos( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 1] = yPos + ( radius * sin( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 2] = zPos;
    }
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    glDrawArrays( GL_TRIANGLE_FAN, 0, numberOfVertices );
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes::Circle::DrawHollowCircle( GLfloat xPos, GLfloat yPos, GLfloat zPos, GLfloat radius, GLint numberOfSides )
{
    GLint numberOfVertices = numberOfSides + 1;
    
    GLfloat doublePi = 2.0f * M_PI;
    
    GLfloat vertices[numberOfVertices * 3];
    
    for ( int i = 0; i < numberOfVertices; i++ )
    {
        vertices[i * 3] = xPos + ( radius * cos( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 1] = yPos + ( radius * sin( i * doublePi / numberOfSides ) );
        vertices[( i * 3 ) + 2] = zPos;
    }
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    glDrawArrays( GL_LINE_STRIP, 0, numberOfVertices );
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes::Triangle::DrawTriangle( GLfloat xCenterPos, GLfloat yCenterPos, GLfloat zCenterPos, GLfloat sideLength )
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
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    glDrawArrays( GL_TRIANGLES, 0, 3 );
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes::Triangle::DrawTriangle( GLfloat vertex1X, GLfloat vertex1Y, GLfloat vertex1Z, GLfloat vertex2X, GLfloat vertex2Y, GLfloat vertex2Z, GLfloat vertex3X, GLfloat vertex3Y, GLfloat vertex3Z )
{
    float vertices[] =
    {
        vertex1X, vertex1Y, vertex1Z,
        vertex2X, vertex2Y, vertex2Z,
        vertex3X, vertex3Y, vertex3Z
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    glDrawArrays( GL_TRIANGLES, 0, 3 );
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes::Triangle::DrawTriangle( GLfloat vertex1[3], GLfloat vertex2[3], GLfloat vertex3[3] )
{
    float vertices[] =
    {
        vertex1[0], vertex1[1], vertex1[2],
        vertex2[0], vertex2[1], vertex2[2],
        vertex3[0], vertex3[1], vertex3[2]
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    glDrawArrays( GL_TRIANGLES, 0, 3 );
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes::Triangle::DrawTriangle( GLfloat vertices[9] )
{
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    glDrawArrays( GL_TRIANGLES, 0, 3 );
    glDisableClientState( GL_VERTEX_ARRAY );
}
