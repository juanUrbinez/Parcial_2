#include "imagenread.h"
#include "fstream"

using namespace std;
//#define direccion "../Parcial_2/Mapas/"

int main()
{
ImagenRead z;


  string direccion= "../Parcial_2/Mapas/";
  string p;


cout<<"Escriba la direccion del archivo"<<endl;
cin>>p;
direccion+=p;

QImage bandera(direccion.c_str());

cout<<bandera.width()<<endl;
cout<<bandera.height()<<endl;


if(bandera.width()>16 && bandera.height()>16)
{
    z.submuestreo(direccion);
}

else if(bandera.width()<=16 && bandera.height()<=16)
{
    z.sobremuestreo(direccion);
}
else
{
    z.prueba(direccion);
}

    return 0;
}
