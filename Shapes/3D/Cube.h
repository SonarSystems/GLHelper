//
//  Cube.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef CUBE_H
#define CUBE_H

#include <GL/glew.h>

#include "../../Base/Object.h"
#include "../../External/glm/vec3.hpp"

namespace GLHelper
{
    namespace Shapes3D
    {
        class Cube : public Object
        {
        public:
            /**
             * Constructor
             */
            Cube( );
            
            /**
             * Draw the cube
             */
            void Draw( );
            
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
            
            /**
             * Set the edge length of the cube's sides
             * @param edgeLength the length of the cube's edges
             */
            void SetEdgeLength( GLfloat edgeLength );
            /**
             * Get the cube's edge length
             */
            bool GetEdgeLength( );
            
        private:
            glm::vec3 centerPosition;
            GLfloat edgeLength;
        };
    }
}


#endif /* CUBE_H */
