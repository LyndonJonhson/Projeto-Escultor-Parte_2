#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"

/**
 * @brief Cria um Voxel na estrutura 3D.
 *
 * @details A partir da classe PutVoxel, será escrito "putvoxel" no arquivo
 * de leitura da escultura com os parâmetros: x_, y_, z_, r_, g_, b_, a_.
 *
 * Ex: putvoxel x_ y_ z_ r_ g_ b_ a_
 */
class PutVoxel : public FiguraGeometrica{
public:
    /**
     * @brief Define o local e a cor do Voxel que será criado.
     *
     * @param x_ é o local no eixo x que o voxel será ativado
     * @param y_ é o local no eixo y que o voxel será ativado.
     * @param z_ é o local no eixo z que o voxel será ativado.
     * @param r_ acrescenta tons de vermelho(red).
     * @param g_ acrescenta tons de verde(green).
     * @param b_ acrescenta tons de azul(blue).
     * @param a_ acrescenta transparência.
     */
    PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_);

    /**
     * @brief Método que realiza o desenho da figura na escultura.
     *
     * @param t é a escultura alocada que irá receber a figura.
     */
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
