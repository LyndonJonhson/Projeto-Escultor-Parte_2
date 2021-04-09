#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

/**
 * @brief Cria uma elipse de Voxels na estrutura 3D.
 *
 * @details A partir da classe PutEllipsoid, será escrito "putellipsoid" no arquivo
 * de leitura da escultura com os parâmetros: xcenter_, ycenter_, zcenter_, rx_, ry_, rz_, r_, g_, b_, a_.
 *
 * Ex: putellipsoid xcenter_ ycenter_ zcenter_ rx_ ry_ rz_ r_ g_ b_ a_
 */
class PutEllipsoid : public FiguraGeometrica{
public:
    /**
     * @brief Define o local, tamanho e cor da elipse que será criada.
     *
     * @param xcenter_ é o valor do centro da elipse em x.
     * @param ycenter_ é o valor do centro da elipse em y.
     * @param zcenter_ é o valor do centro da elipse em z.
     * @param rx_ é o raio da elipse em x.
     * @param ry_ é o raio da elipse em y.
     * @param rz_ é o raio da elipse em z.
     * @param r_ acrescenta tons de vermelho(red).
     * @param g_ acrescenta tons de verde(green).
     * @param b_ acrescenta tons de azul(blue).
     * @param a_ acrescenta transparência.
     */
    PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_, float r_, float g_, float b_, float a_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
