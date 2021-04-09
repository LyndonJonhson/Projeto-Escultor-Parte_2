#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"

/**
 * @brief Cria uma caixa de Voxels na estrutura 3D.
 *
 * @details A partir da classe PutBox, será escrito "putbox" no arquivo
 * de leitura da escultura com os parâmetros: x0_ e x1_, y0_ e y1_, z0_ e z1_, r_, g_, b_, a_.
 *
 * Ex: putbox x0_ x1_ y0_ y1_ z0_ z1_ r_ g_ b_ a_
 */
class PutBox : public FiguraGeometrica{
public:
    /**
     * @brief Define o local, tamanho e cor da caixa que será criada.
     *
     * @param x0_ é o ponto inicial em x da caixa.
     * @param x1_ é o ponto final em x da caixa.
     * @param y0_ é o ponto inicial em y da caixa.
     * @param y1_ é o ponto final em y da caixa.
     * @param z0_ é o ponto inicial em z da caixa.
     * @param z1_ é o ponto final em z da caixa.
     * @param r_ acrescenta tons de vermelho(red).
     * @param g_ acrescenta tons de verde(green).
     * @param b_ acrescenta tons de azul(blue).
     * @param a_ acrescenta transparência.
     */
    PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
