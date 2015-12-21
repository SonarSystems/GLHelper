//
//  Object.cpp
//  GLHelper
//
//  Created by Sonar Systems on 18/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#include "Object.h"

#include "../Defines/Colours.h"


GLHelper::Object::Object( )
{
    this->isWireframe = false;
    this->colour.r = 255;
    this->colour.g = 255;
    this->colour.b = 255;
}

void GLHelper::Object::Draw( )
{
    
}

void GLHelper::Object::SetWireframe( bool isWireframe )
{
    this->isWireframe = isWireframe;
}

bool GLHelper::Object::GetWireframe( )
{
    return this->isWireframe;
}

void GLHelper::Object::SetColour( GLfloat red, GLfloat green, GLfloat blue )
{
    this->colour.r = red;
    this->colour.g = green;
    this->colour.b = blue;
}

void GLHelper::Object::SetColourRed( GLfloat red )
{
    this->colour.r = red;
}

void GLHelper::Object::SetColourGreen( GLfloat green )
{
    this->colour.g = green;
}

void GLHelper::Object::SetColourBlue( GLfloat blue )
{
    this->colour.b = blue;
}

glm::vec3 GLHelper::Object::GetColour( )
{
    return this->colour;
}

GLfloat GLHelper::Object::GetColourRed( )
{
    return this->colour.r;
}

GLfloat GLHelper::Object::GetColourGreen( )
{
    return this->colour.g;
}

GLfloat GLHelper::Object::GetColourBlue( )
{
    return this->colour.b;
}