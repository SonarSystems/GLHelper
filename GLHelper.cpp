//
//  GLHelper.cpp
//  GLHelper
//
//  Created by Sonar Systems on 19/11/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "GLHelper.h"

void GLHelper::Shapes2D::Circle::DrawCircle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLint numberOfSides, const GLboolean isHollow )
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
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_STRIP, 0, numberOfVertices ); }
    else
    { glDrawArrays( GL_TRIANGLE_FAN, 0, numberOfVertices ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Triangle::DrawTriangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLboolean isHollow )
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
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 3 ); }
    else
    { glDrawArrays( GL_TRIANGLES, 0, 3 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Triangle::DrawTriangle( const GLfloat vertex1X, const GLfloat vertex1Y, const GLfloat vertex1Z, const GLfloat vertex2X, const GLfloat vertex2Y, const GLfloat vertex2Z, const GLfloat vertex3X, const GLfloat vertex3Y, const GLfloat vertex3Z, const GLboolean isHollow )
{
    float vertices[] =
    {
        vertex1X, vertex1Y, vertex1Z,
        vertex2X, vertex2Y, vertex2Z,
        vertex3X, vertex3Y, vertex3Z
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 3 ); }
    else
    { glDrawArrays( GL_TRIANGLES, 0, 3 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Triangle::DrawTriangle( const GLfloat vertex1[3], const GLfloat vertex2[3], const GLfloat vertex3[3], const GLboolean isHollow )
{
    GLfloat vertices[] =
    {
        vertex1[0], vertex1[1], vertex1[2],
        vertex2[0], vertex2[1], vertex2[2],
        vertex3[0], vertex3[1], vertex3[2]
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 3 ); }
    else
    { glDrawArrays( GL_TRIANGLES, 0, 3 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Triangle::DrawTriangle( const GLfloat vertices[9], const GLboolean isHollow )
{
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 3 ); }
    else
    { glDrawArrays( GL_TRIANGLES, 0, 3 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Quad::DrawSquare( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat sideLength, const GLfloat isHollow )
{
    GLfloat halfSideLength = sideLength * 0.5f;
    
    GLfloat vertices[] =
    {
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos, // top left
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos, // bottom right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos // bottom left
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Quad::DrawQuad( const GLfloat topLeftVertex[3], const GLfloat topRightVertex[3], const GLfloat bottomRightVertex[3], const GLfloat bottomLeftVertex[3], const GLboolean isHollow )
{
    GLfloat vertices[] =
    {
        topLeftVertex[0], topLeftVertex[1], topLeftVertex[2], // top left
        topRightVertex[0], topRightVertex[1], topRightVertex[2], // top right
        bottomRightVertex[0], bottomRightVertex[1], bottomRightVertex[2], // bottom right
        bottomLeftVertex[0], bottomLeftVertex[1], bottomLeftVertex[2] // bottom left
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Quad::DrawRectangle( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat width, const GLfloat height, const GLboolean isHollow )
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
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isHollow )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}

void GLHelper::Shapes2D::Pentagon::DrawPentagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow )
{
    GLHelper::Shapes2D::Circle::DrawCircle( xCenterPos, yCenterPos, zCenterPos, radius, 5, isHollow );
}

void GLHelper::Shapes2D::Hexagon::DrawHexagon( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat radius, const GLboolean isHollow )
{
    GLHelper::Shapes2D::Circle::DrawCircle( xCenterPos, yCenterPos, zCenterPos, radius, 6, isHollow );
}

void GLHelper::Shapes3D::Cube::DrawCube( const GLfloat xCenterPos, const GLfloat yCenterPos, const GLfloat zCenterPos, const GLfloat edgeLength, const GLfloat isWireframe )
{
    GLfloat halfSideLength = edgeLength * 0.5f;
    
    GLfloat vertices[] =
    {
        xCenterPos - halfSideLength, yCenterPos + halfSideLength, zCenterPos, // top left
        xCenterPos + halfSideLength, yCenterPos + halfSideLength, zCenterPos, // top right
        xCenterPos + halfSideLength, yCenterPos - halfSideLength, zCenterPos, // bottom right
        xCenterPos - halfSideLength, yCenterPos - halfSideLength, zCenterPos // bottom left
    };
    
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer( 3, GL_FLOAT, 0, vertices );
    if ( isWireframe )
    { glDrawArrays( GL_LINE_LOOP, 0, 4 ); }
    else
    { glDrawArrays( GL_QUADS, 0, 4 ); }
    glDisableClientState( GL_VERTEX_ARRAY );
}





