#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"

/**
 * @brief Apaga uma caixa de Voxels na estrutura 3D.
 *
 * @details A partir da classe CutBox, será escrito "cutbox" no arquivo
 * de leitura da escultura com os parâmetros: x0_ e x1_, y0_ e y1_, z0_ e z1_.
 *
 * Ex: cutbox x0_ x1_ y0_ y1_ z0_ z1_
 */
class CutBox : public FiguraGeometrica{
public:
    /**
     * @brief Define o local e tamanho da caixa para ser removida.
     *
     * @param x0_ é o ponto inicial em x da caixa.
     * @param x1_ é o ponto final em x da caixa.
     * @param y0_ é o ponto inicial em y da caixa.
     * @param y1_ é o ponto final em y da caixa.
     * @param z0_ é o ponto inicial em z da caixa.
     * @param z1_ é o ponto final em z da caixa.
     */
    CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
