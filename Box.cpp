#include "Box.h"

// definition of constructors
Box::Box(){ width = -1; height = -1; depth = -1; }
Box::Box(double _w, double _h, double _d){ width = _w; height = _h, depth = _d; }
Box::Box(double _len){ width = height = depth = _len; }
Box::Box(const Box& ob) { width = ob.width; height = ob.height; depth = ob.depth; }

// definition of destructor
Box::~Box(){ /*cout << "Delete object!...";*/ }

// definition of methods
double Box::Objem()
{
    return width*height*depth;
}
