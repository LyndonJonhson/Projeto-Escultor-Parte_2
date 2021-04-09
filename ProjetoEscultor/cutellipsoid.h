#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

/**
 * @brief Apaga uma elipse de Voxels na estrutura 3D.
 *
 * @details A partir da classe CutEllipsoid, será escrito "cutellipsoid" no arquivo
 * de leitura da escultura com os parâmetros: xcenter_, ycenter_, zcenter_, rx_, ry_, rz_.
 *
 * Ex: cutellipsoid xcenter_ ycenter_ zcenter_ rx_ ry_ rz_
 */
class CutEllipsoid : public FiguraGeometrica{
public:
    /**
     * @brief Define o local e tamanho da elipse para ser removida.
     *
     * @param xcenter_ é o valor do centro da elipse em x.
     * @param ycenter_ é o valor do centro da elipse em y.
     * @param zcenter_ é o valor do centro da elipse em z.
     * @param rx_ é o raio da elipse em x.
     * @param ry_ é o raio da elipse em y.
     * @param rz_ é o raio da elipse em z.
     */
    CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
