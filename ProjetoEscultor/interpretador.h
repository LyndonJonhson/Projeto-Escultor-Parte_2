#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H

#include "figurageometrica.h"
#include <vector>
#include <string>

/**
 * @brief A classe Interpretador faz a leitura do arquivo .txt
 *
 */
class Interpretador{
protected:
    int dimX, dimY, dimZ;
    int radius, rx, ry, rz;
    int x, xcenter, x0, x1;
    int y, ycenter, y0, y1;
    int z, zcenter, z0, z1;
    float r, g, b, a;
public:
    Interpretador();

    /**
     * @brief Realiza a leitura do arquivo .txt
     *
     * @param filename é o nome do arquivo que será lido pelo método.
     *
     * @return Retorna um vetor com todos os comandos que estavam
     * escritos no arquivo .txt para serem desenhados.
     */
    std::vector<FiguraGeometrica*> leitor(std::string filename);

    /**
     * @brief Retorna o tamanho em X da matriz que contém a escultura.
     *
     * @return Retorna o valor encontrado no arquivo .txt para a dimensão
     * X da matriz da escultura.
     */
    int getDimX();

    /**
     * @brief Retorna o tamanho em Y da matriz que contém a escultura.
     *
     * @return Retorna o valor encontrado no arquivo .txt para a dimensão
     * Y da matriz da escultura.
     */
    int getDimY();

    /**
     * @brief Retorna o tamanho em Z da matriz que contém a escultura.
     *
     * @return Retorna o valor encontrado no arquivo .txt para a dimensão
     * Z da matriz da escultura.
     */
    int getDimZ();
};

#endif // INTERPRETADOR_H
