#include "putbox.h"

PutBox::PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_){
    x0 = x0_;
    x1 = x1_;
    y0 = y0_;
    y1 = y1_;
    z0 = z0_;
    z1 = z1_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutBox::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    t.putBox(x0, x1, y0, y1, z0, z1);
}
