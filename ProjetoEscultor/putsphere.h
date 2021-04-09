#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

/**
 * @brief Cria uma esfera de Voxels na estrutura 3D.
 *
 * @details A partir da classe PutSphere, será escrito "putsphere" no arquivo
 * de leitura da escultura com os parâmetros: xcenter_, ycenter_, zcenter_, radius_, r_, g_, b_, a_.
 *
 * Ex: putsphere xcenter_ ycenter_ zcenter_ radius_ r_ g_ b_ a_
 */
class PutSphere : public FiguraGeometrica{
public:
    /**
     * @brief Define o local, tamanho e cor da esfera que será criada.
     *
     * @param xcenter_ é o valor do centro da esfera em x.
     * @param ycenter_ é o valor do centro da esfera em y.
     * @param zcenter_ é o valor do centro da esfera em z.
     * @param radius_ radius é o raio da esfera.
     * @param r_ acrescenta tons de vermelho(red).
     * @param g_ acrescenta tons de verde(green).
     * @param b_ acrescenta tons de azul(blue).
     * @param a_ acrescenta transparência.
     */
    PutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_, float r_, float g_, float b_, float a_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
