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
             * Set the edge length of the cube's sides
             * @param edgeLength the length of the cube's edges
             */
            void SetEdgeLength( GLfloat edgeLength );
            /**
             * Get the cube's edge length
             */
            GLfloat GetEdgeLength( );
            
        private:
            GLfloat edgeLength;
        };
    }
}


#endif /* CUBE_H */
