#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

/**
 * @brief Apaga uma esfera de Voxels na estrutura 3D.
 *
 * @details A partir da classe CutSphere, será escrito "cutsphere" no arquivo
 * de leitura da escultura com os parâmetros: xcenter_, ycenter_, zcenter_, radius_.
 *
 * Ex: cutsphere xcenter_ ycenter_ zcenter_ radius_
 */
class CutSphere : public FiguraGeometrica{
public:
    /**
     * @brief Define o local e tamanho da esfera para ser removida.
     *
     * @param xcenter_ é o valor do centro da esfera em x.
     * @param ycenter_ é o valor do centro da esfera em y.
     * @param zcenter_ é o valor do centro da esfera em z.
     * @param radius_ radius é o raio da esfera.
     */
    CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
