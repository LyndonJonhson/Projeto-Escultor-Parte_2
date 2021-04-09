#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageometrica.h"

/**
 * @brief Apaga um Voxel na estrutura 3D.
 *
 * @details A partir da classe CutVoxel, será escrito "cutvoxel" no arquivo
 * de leitura da escultura com os parâmetros: x_, y_, z_.
 *
 * Ex: cutvoxel x_ y_ z_
 */
class CutVoxel : public FiguraGeometrica{
public:
    /**
     * @brief Define o local do Voxel que será removido.
     *
     * @param x_ é o local no eixo x que o voxel será desativado.
     * @param y_ é o local no eixo y que o voxel será desativado.
     * @param z_ é o local no eixo z que o voxel será desativado.
     */
    CutVoxel(int x_, int y_, int z_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
