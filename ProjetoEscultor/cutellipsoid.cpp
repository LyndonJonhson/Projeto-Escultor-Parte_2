#include "cutellipsoid.h"

CutEllipsoid::CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_){
    xcenter = xcenter_;
    ycenter = ycenter_;
    zcenter = zcenter_;
    rx = rx_;
    ry = ry_;
    rz = rz_;
}

void CutEllipsoid::draw(Sculptor &t){
    t.cutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz);
}
