#include "putsphere.h"

PutSphere::PutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_, float r_, float g_, float b_, float a_){
    xcenter = xcenter_;
    ycenter = ycenter_;
    zcenter = zcenter_;
    radius = radius_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutSphere::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    t.putSphere(xcenter, ycenter, zcenter, radius);
}
