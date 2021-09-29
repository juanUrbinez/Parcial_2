#include "imagenread.h"
#include "fstream"

using namespace std;

int main()
{
    ImagenRead Imagen;


    string direccion= "../Parcial_2/Mapas/";
    string NombreImagen;


    cout<<"Escriba el nombre de la imagen"<<endl;
    cin>>NombreImagen;
    direccion+=NombreImagen;

    QImage bandera(direccion.c_str());

    cout<<"El ancho de su imagen es: "<<bandera.width()<<"px"<<endl;
    cout<<"El largo de su imagen es: "<<bandera.height()<<"px"<<endl;


    if(bandera.width()>16 && bandera.height()>16)
    {
        Imagen.submuestreo(direccion);
    }

    else if(bandera.width()<=16 && bandera.height()<=16)
    {
        Imagen.sobremuestreo(direccion);
    }
    else
    {
        Imagen.modificador(direccion);
    }

    cout<<"La matriz se ha guardado en Parcial_2/Matriz.txt"<<endl;
    return 0;
}
