#include <iostream>
#include "imagenread.h"

using namespace std;

int main()
{
    unsigned long long rojo,verde,azul;
    string filname = "../Parcial_2/Colombia.png"; //cargar la imagen
                    //retrocede/ingresa a la carpeta/nombre de la imagen o /nombre de la carp. imagen/nom. imagen
    QImage im(filname.c_str());


    cout<<im.width()<<endl;
    cout<<im.width()/16<<endl;
    cout<<im.height()<<endl;
    cout<<im.height()/16<<endl;


for(int index=0;index<im.width();index+=75)

{
    for(int indey=0;indey<im.height();indey+=50)
    {
        rojo=im.pixelColor(index,indey).red();
        verde=im.pixelColor(index,indey).green();
        azul=im.pixelColor(index,indey).blue();
        cout <<index<<", "<<indey<<" = "<< "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;

    }
}



    return 0;
}
