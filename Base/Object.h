//
//  Object.h
//  GLHelper
//
//  Created by Sonar Systems on 18/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef OBJECT_H
#define OBJECT_H

#include <GL/glew.h>

#include "../External/glm/vec3.hpp"

namespace GLHelper
{
    class Object
    {
    public:
        /**
         * Constructor
         */
        Object( );
        
        /**
         * Draw the object
         */
        virtual void Draw( );
        
        /**
         * Turn wireframe on or off (true or false)
         * @param isWireframe is the object in wireframe mode or not
         */
        void SetWireframe( bool isWireframe );
        /**
         * Check if the object is in wireframe mode
         */
        bool GetWireframe( );
        
        /**
         * Set the RGB (red, green, blue) colour values for the object
         * @param red red colour value for the object
         * @param green green colour value for the object
         * @param blue blue colour value for the object
         */
        void SetColour( GLfloat red, GLfloat green, GLfloat blue );
        /**
         * Set the red colour value for the object
         * @param red red colour value for the object
         */
        void SetColourRed( GLfloat red );
        /**
         * Set the green colour value for the object
         * @param green green colour value for the object
         */
        void SetColourGreen( GLfloat green );
        /**
         * Set the blue colour value for the object
         * @param blue blue colour value for the object
         */
        void SetColourBlue( GLfloat blue );
        /**
         * Get the object's RGB (red, green, blue) colour values
         */
        glm::vec3 GetColour( );
        /**
         * Get the object's red colour value
         */
        GLfloat GetColourRed( );
        /**
         * Get the object's green colour value
         */
        GLfloat GetColourGreen( );
        /**
         * Get the object's blue colour value
         */
        GLfloat GetColourBlue( );
        
        /**
         * Set the cube's center position (x, y, z) coordinates
         * @param x x position coordinate
         * @param y y position coordinate
         * @param z z position coordinate
         */
        void SetCenterPosition( GLfloat x, GLfloat y, GLfloat z );
        /**
         * Set the cube's x center position
         * @param x x position coordinate
         */
        void SetCenterPositionX( GLfloat x );
        /**
         * Set the cube's y center position
         * @param y y position coordinate
         */
        void SetCenterPositionY( GLfloat y );
        /**
         * Set the cube's z center position
         * @param z z position coordinate
         */
        void SetCenterPositionZ( GLfloat z );
        /**
         * Get the cube's center position (x, y, z) coordinate values
         */
        glm::vec3 GetCenterPosition( );
        /**
         * Get the cube's center x position coordinate value
         */
        GLfloat GetCenterPositionX( );
        /**
         * Get the cube's center y position coordinate value
         */
        GLfloat GetCenterPositionY( );
        /**
         * Get the cube's center z position coordinate value
         */
        GLfloat GetCenterPositionZ( );

        
    protected:
        glm::vec3 centerPosition;
        bool isWireframe;
        glm::vec3 colour;
    };
}

#endif /* OBJECT_H */
