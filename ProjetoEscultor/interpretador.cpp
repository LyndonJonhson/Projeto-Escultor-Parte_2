#include "interpretador.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"
#include <fstream>
#include <sstream>

Interpretador::Interpretador(){

}

std::vector<FiguraGeometrica*> Interpretador::leitor(std::string filename){
    std::vector<FiguraGeometrica*> figs;
    std::ifstream fin;
    std::stringstream ss;
    std::string s, c;

    fin.open(filename.c_str());
    if(!fin.is_open()){
        exit(0);
    }

    while(fin.good()){
        std::getline(fin, s);
        if(fin.good()){
            ss.clear();
            ss.str(s);
            ss >> c;
            if(fin.good()){
                if(c.compare("dim") == 0){
                    ss >> dimX >> dimY >> dimZ;
                }
                else if(c.compare("putvoxel") == 0){
                    ss >> x >> y >> z >> r >> g >> b >> a;
                    figs.push_back(new PutVoxel(x, y, z, r, g, b, a));
                }
                else if(c.compare("cutvoxel") == 0){
                    ss >> x >> y >> z;
                    figs.push_back(new CutVoxel(x, y, z));
                }
                else if(c.compare("putbox") == 0){
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if(c.compare("cutbox") == 0){
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
                }
                else if(c.compare("putsphere") == 0){
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                    figs.push_back(new PutSphere(xcenter, ycenter, zcenter, radius, r, g, b, a));
                }
                else if(c.compare("cutsphere") == 0){
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figs.push_back(new CutSphere(xcenter, ycenter, zcenter, radius));
                }
                else if(c.compare("putellipsoid") == 0){
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
                    figs.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
                }
                else if(c.compare("cutellipsoid") == 0){
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                    figs.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
                }
            }
        }
    }
    return(figs);
}

int Interpretador::getDimX(){
    return dimX;
}

int Interpretador::getDimY(){
    return dimY;
}

int Interpretador::getDimZ(){
    return dimZ;
}
