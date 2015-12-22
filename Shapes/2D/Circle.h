//
//  Circle.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include <GL/glew.h>

#include "../../Base/Object.h"

namespace GLHelper
{
    namespace Shapes2D
    {
        class Circle : public Object
        {
        public:
            /**
             * Constructor
             */
            Circle( );
            
            /**
             * Draw the circle
             */
            void Draw( );
            
            
            /**
             * Set the radius of the circle
             * @param radius the radius of the circle
             */
            void SetRadius( GLfloat radius );
            /**
             * Get the circle's radius
             */
            GLfloat GetRadius( );
            
            /**
             * Set the number of sides that make up the circle
             * @param numberOfSides the number of sides the circle will be made up of (a greater number provides a smoother circle)
             */
            void SetNumberOfSides( GLint numberOfSides );
            /**
             * Get the number of sides that the circle is made up of
             */
            GLint GetNumberOfSides( );
            
        private:
            GLfloat radius;
            GLint numberOfSides;
            
        };
    }
}

#endif /* CIRCLE_H */
