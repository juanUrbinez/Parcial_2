#ifndef IMAGENREAD_H
#define IMAGENREAD_H

#include <iostream>
#include <QImage>
#include "fstream"

using namespace std;

class ImagenRead
{
public:
    ImagenRead();
    void submuestreo(string fillname);
    void sobremuestreo(string fillname);
    void modificador(string fillname);


private:
    int rojo,verde,azul;
    int c=0,c2=0;
    string nombreArchivo= "../Parcial_2/Matriz.txt";
    ofstream archivo;

};

#endif // IMAGENREAD_H
