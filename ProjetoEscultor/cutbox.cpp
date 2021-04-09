#include "cutbox.h"

CutBox::CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_){
    x0 = x0_;
    x1 = x1_;
    y0 = y0_;
    y1 = y1_;
    z0 = z0_;
    z1 = z1_;
}

void CutBox::draw(Sculptor &t){
    t.cutBox(x0, x1, y0, y1, z0, z1);
}
