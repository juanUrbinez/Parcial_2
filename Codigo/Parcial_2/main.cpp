#include "imagenread.h"
#include "fstream"

using namespace std;

int main()
{
ImagenRead z;


string  p;

cout<<"Escriba la direccion del archivo"<<endl;
cin>>p;


QImage bandera(p.c_str());

cout<<bandera.width()<<endl;
cout<<bandera.height()<<endl;


if(bandera.width()>16 && bandera.height()>16)
{
    z.submuestreo(p);
}

else if(bandera.width()<=16 && bandera.height()<=16)
{
    z.sobremuestreo(p);
}
else
{
    z.prueba(p);
}

    return 0;
}
