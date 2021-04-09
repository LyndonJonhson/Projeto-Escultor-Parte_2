#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/**
 * @brief A classe FiguraGeometrica é uma classe abstrata
 *
 * @details A classe serve para representar figuras geométricas de forma geral,
 * onde cada classe filha possa ser desenhada na escultura digital.
 */
class FiguraGeometrica{
protected:
    int radius, rx, ry, rz;
    int x, xcenter, x0, x1;
    int y, ycenter, y0, y1;
    int z, zcenter, z0, z1;
    float r, g, b, a;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){};

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
