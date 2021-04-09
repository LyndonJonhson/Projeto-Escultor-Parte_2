#include "putellipsoid.h"

PutEllipsoid::PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_, float r_, float g_, float b_, float a_){
    xcenter = xcenter_;
    ycenter = ycenter_;
    zcenter = zcenter_;
    rx = rx_;
    ry = ry_;
    rz = rz_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutEllipsoid::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    t.putEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz);
}
