#include "cutsphere.h"

CutSphere::CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_){
    xcenter = xcenter_;
    ycenter = ycenter_;
    zcenter = zcenter_;
    radius = radius_;
}

void CutSphere::draw(Sculptor &t){
    t.cutSphere(xcenter, ycenter, zcenter, radius);
}
