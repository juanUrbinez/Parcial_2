#include "imagenread.h"


ImagenRead::ImagenRead()
{
    //int i;
    //leer la imagen

    //verificar si abrio correctamente

    // si abrio correctamente:

        //llamar la funcion conteo
        // con un if, podremos comparar si el dato dado por la funcion conteo es mayor o menor a nuestra matriz 16x16
            // de ser verdadero, es decir, el dato dado por "conteo" es mayor a nuestra matriz:
            // realizamos el submuestreo
            // lo guardamos en forma de matriz con la funcion matriz
            // el dato de la funcion matriz se guardara en un archivo txt

        //de ser falso, es decir, el dato dado por "conteo" es menor a nuestra matriz:
            // realizamos el sobremuestreo
            // lo guardamos en forma de matriz con la funcion matriz
            // el dato de la funcion matriz se guardara en un archivo txt

    // si no abrio correctamente, indicarle al usuario que el archivo no pudo abrirse

    /*RGB = new char** [3];
    for(int f=0;f<3;f++){
        RGB[f]=new char* [16];
        for(int c=0;c<16;c++){
            RGB[f][c]= new char;
        }
    }*/

    string filname = "C:/Users/Usuario/Documents/UNIVERSIDAD DE ANTIOQUIA/SEMESTRE 2021-1/INFORMATICA II/Parciales";
    QImage im(filname.c_str());

    RGB=new char** [i];
    for(i=0;i<3;i++){
        RGB[i]=new char* [fil];
        for(fil=0;im.width();fil++){
            RGB[i][fil]=new char[col];
            for(col=0;im.height();col++){
                for(int index=0;index<im.width();++index){
                    for(int indey=0;indey<im.height();++indey){
                        rojo=im.pixelColor(index,indey).red();
                        verde=im.pixelColor(index,indey).green();
                        azul=im.pixelColor(index,indey).blue();
                        cout << "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;

                    }
                }
            }
        }

    }
}