#ifndef IMAGENREAD_H
#define IMAGENREAD_H

#include <iostream>
#include <QImage>
#include "fstream"
//#include <string.h>

using namespace std;

class ImagenRead
{
public:
    ImagenRead();//leera la imagen
    void conteo();
    void submuestreo();
    void sobremuestreo();
    void matriz();// se crea matiz que recibira los datos del sobremuestro o submues... debe retornar una matriz
    void guardar_matriz();// recibira la matriz y lo guardara en un archivo txt

private:
    char ***RGB;
    unsigned long long i,fil,col, rojo,verde,azul;


};

#endif // IMAGENREAD_H
