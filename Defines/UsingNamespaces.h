//
//  Using Namespaces.h
//  GLHelper
//
//  Created by Sonar Systems on 10/12/2015.
//  Copyright © 2015 Sonar Systems. All rights reserved.
//

#ifndef USING_NAMESPACES_H
#define USING_NAMESPACES_H

// shortcuts for using GLHelper
#define GLH GLHelper
#define GLCore GLHelper
// shortcut for using namespace GLHelper;
#define USING_NS_GLH using namespace GLHelper;
// shortcut for using namespace Shapes2D;
#define USING_NS_SHAPES_2D USING_NS_GLH using namespace Shapes2D;
// shortcut for using namespace Circle;
#define USING_NS_CIRCLE USING_NS_SHAPES_2D using namespace Circle;
// shortcut for using namespace Triangle;
#define USING_NS_TRIANGLE USING_NS_SHAPES_2D using namespace Triangle;
// shortcut for using namespace Quad;
#define USING_NS_QUAD USING_NS_SHAPES_2D using namespace Quad;
// shortcut for using namespace Pentagon;
#define USING_NS_PENTAGON USING_NS_SHAPES_2D using namespace Pentagon;
// shortcut for using namespace Hexagon;
#define USING_NS_HEXAGON USING_NS_SHAPES_2D using namespace Hexagon;

#endif /* USING_NAMESPACES_H */
