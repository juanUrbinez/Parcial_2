#include "imagenread.h"
#include "fstream"
using namespace std;

int main()
{
    float A=0;
    int c=0; int AlturaInicial,AnchoInicial;
    unsigned long long rojo,verde,azul;
    string filname = "../Parcial_2/Mapas/Colombia 8x15.png"; //cargar la imagen
                    //retrocede/ingresa a la carpeta/nombre de la imagen o /nombre de la carp. imagen/nom. imagen
    QImage im(filname.c_str());


    //cout<<im.width()<<endl;
    //cout<<im.width()<<endl;
    //cout<<im.height()<<endl;
    //cout<<im.height()<<endl;
if(im.height()%16!=0)
{

}
AlturaInicial=im.height();
AnchoInicial=im.width();

cout<<im.height()<<endl;

A=16%im.height();


cout<<A<<endl;

//A=(16%im.height())*im.height();

//cout<<A<<endl;

//Sobremuestreo
for(int indey=0;indey<AlturaInicial;indey+=1)
{
    for(int index=0;index<AnchoInicial;index+=1)
    {
        for(int clock=0;clock<4;clock+=1)
        {
            rojo=im.pixelColor(index,indey).red();
            verde=im.pixelColor(index,indey).green();
            azul=im.pixelColor(index,indey).blue();
            c++;
            cout <<index<<", "<<indey<<" = "<< "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;
        }
        //cout<<c<<endl;
    }
}
string nombreArchivo= "../Parcial_2/Matriz.txt";
ofstream archivo;
c=0;
archivo.open(nombreArchivo.c_str(), fstream::out);
archivo<<"{"<<endl;

//pixeles faltantes




int PixelesFaltantes=16%im.height();

//4nx
for(int indey=0;indey<AlturaInicial;indey+=1)
{
    for(int clockY=0;clockY<16/AlturaInicial;clockY+=1)
    {
        archivo<<"{"<<endl;

        if(A!=0)
        {
            for(int index=0;index<AnchoInicial;index+=1)
            {
                for(int clockX=0;clockX<16/AnchoInicial;clockX+=1)
                {
                    rojo=im.pixelColor(index,indey).red();
                    verde=im.pixelColor(index,indey).green();
                    azul=im.pixelColor(index,indey).blue();
                    archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                    c++;
                    if(c%16!=0)
                    {
                        archivo<<",";
                    }
                }


            }
            archivo<<endl<<"},"<<endl;

            archivo <<"{"<< endl;
            A--;


        }
        for(int index=0;index<AnchoInicial;index+=1)
        {
            for(int clockX=0;clockX<16/AnchoInicial;clockX+=1)
            {


                rojo=im.pixelColor(index,indey).red();
                verde=im.pixelColor(index,indey).green();
                azul=im.pixelColor(index,indey).blue();
                archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                c++;


                if(c%16!=0)
                {
                    archivo<<",";
                }
            }


        }
        archivo<<endl<<"},"<<endl;
    }
}
archivo.close();



//ImagenRead c;
//c.submuestreo();


    return 0;
}
