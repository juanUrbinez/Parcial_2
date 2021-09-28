#include "imagenread.h"


ImagenRead::ImagenRead()
{

}


void ImagenRead::submuestreo(string fillname)
{

    QImage im(fillname.c_str());


//Submuestreo
string nombreArchivo= "../Parcial_2/Matriz.txt";
ofstream archivo;
archivo.open(nombreArchivo.c_str(), fstream::out);

archivo<<"{"<<endl;

for(int indey=im.height()/16-1;indey<im.height();indey+=im.height()/16)
{
    archivo<<"{"<<endl;
    for(int index=im.width()/16-1;index<im.width();index+=im.width()/16)
    {
        rojo=im.pixelColor(index,indey).red();
        verde=im.pixelColor(index,indey).green();
        azul=im.pixelColor(index,indey).blue();
        if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
        archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
        c=c+1;
        if(c%16!=0)
        {
            archivo<<",";
        }
    }
    c2++;
    archivo<<endl<<"}"<<endl;
    if(c2%16!=0)
    {
        archivo<<",";
    }
}

archivo<<"};"<<endl;
archivo.close();
}

void ImagenRead::sobremuestreo(string fillname)
{
    float PixelesFaltantesAltura=0;
    QImage im(fillname.c_str());


    string nombreArchivo= "../Parcial_2/Matriz.txt";
    ofstream archivo;
    c=0;
    PixelesFaltantesAltura=16%im.height();
    archivo.open(nombreArchivo.c_str(), fstream::out);
    archivo<<"{"<<endl;


    int PixelesFaltantesAncho=16%im.width();

    for(int indey=0;indey<im.height();indey+=1)
    {
        for(int clockY=0;clockY<16/im.height();clockY+=1)
        {
            archivo<<"{"<<endl;

            if(PixelesFaltantesAltura!=0)
            {
                for(int index=0;index<im.width();index+=1)
                {
                    for(int clockX=0;clockX<16/im.width();clockX+=1)
                    {
                        rojo=im.pixelColor(index,indey).red();
                        verde=im.pixelColor(index,indey).green();
                        azul=im.pixelColor(index,indey).blue();

                        if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}

                        archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                        c++;

                        if(c%16!=0)
                        {
                            archivo<<",";
                        }
                    }

                    //agregado
                    if (PixelesFaltantesAncho!=0)
                    {
                        rojo=im.pixelColor(index,indey).red();
                        verde=im.pixelColor(index,indey).green();
                        azul=im.pixelColor(index,indey).blue();

                        if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}

                        archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"},";
                        c++;
                        PixelesFaltantesAncho--;
                    }

                }
                PixelesFaltantesAncho=16%im.width();

                archivo<<endl<<"},"<<endl;
                c2++;
                archivo <<"{"<< endl;
                PixelesFaltantesAltura--;

            }
            for(int index=0;index<im.width();index+=1)
            {
                for(int clockX=0;clockX<16/im.width();clockX+=1)
                {
                    rojo=im.pixelColor(index,indey).red();
                    verde=im.pixelColor(index,indey).green();
                    azul=im.pixelColor(index,indey).blue();
                    if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
                    archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                    c++;

                    if(c%16!=0)
                    {
                        archivo<<",";
                    }
                }

                //agregado
                if (PixelesFaltantesAncho!=0)
                {
                    rojo=im.pixelColor(index,indey).red();
                    verde=im.pixelColor(index,indey).green();
                    azul=im.pixelColor(index,indey).blue();
                    if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
                    archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"},";
                    c++;
                    PixelesFaltantesAncho--;
                }
            }

            PixelesFaltantesAncho=16%im.width();

            c2++;
            archivo<<endl<<"}"<<endl;
            if(c2%16!=0)
            {
                archivo<<",";
            }
        }
    }

    archivo<<"};"<<endl;

    archivo.close();
}

void ImagenRead::prueba(string fillname)
{
    float A=0;


    //string filname = "../Parcial_2/Mapas/japon_9x9.png"; //cargar la imagen
     //retrocede/ingresa a la carpeta/nombre de la imagen o /nombre de la carp. imagen/nom. imagen
    QImage im(fillname.c_str());


    string nombreArchivo= "../Parcial_2/Matriz.txt";
    ofstream archivo;
    A=16%im.height();

    int PixelesFaltantes=16%im.width();

    c=0;
    A=16%im.height();
    archivo.open(nombreArchivo.c_str(), fstream::out);
    archivo<<"{"<<endl;

    //pixeles faltantes

cout<<im.height()<<endl;
if (im.height()>16)
{
    for(int indey=im.height()/16-1;indey<im.height();indey+=im.height()/16)
    {
        archivo<<"{"<<endl;
        for(int index=0;index<im.width();index+=1)
        {
            for(int clockX=0;clockX<16/im.width();clockX+=1)
            {
                rojo=im.pixelColor(index,indey).red();
                verde=im.pixelColor(index,indey).green();
                azul=im.pixelColor(index,indey).blue();
                if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
                archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                c++;
                if(c%16!=0)
                {
                    archivo<<",";
                }
            }

            //agregado
            if (PixelesFaltantes!=0)
            {
                rojo=im.pixelColor(index,indey).red();
                verde=im.pixelColor(index,indey).green();
                azul=im.pixelColor(index,indey).blue();
                if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
                archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"},";
                c++;
                PixelesFaltantes--;
            }
        }

        PixelesFaltantes=16%im.width();

        c2++;
        archivo<<endl<<"}"<<endl;
        if(c2%16!=0)
        {
            archivo<<",";
        }
    }
}

else
{
    for(int indey=0;indey<im.height();indey+=1)
    {
        for(int clockY=0;clockY<16/im.height();clockY+=1)
        {
            archivo<<"{"<<endl;

            if(A!=0)
            {
                for(int index=im.width()/16-1;index<im.width();index+=im.width()/16)
                {
                    rojo=im.pixelColor(index,indey).red();
                    verde=im.pixelColor(index,indey).green();
                    azul=im.pixelColor(index,indey).blue();
                    if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
                    archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                    c=c+1;
                    if(c%16!=0)
                    {
                        archivo<<",";
                    }

                }
                PixelesFaltantes=16%im.width();


                archivo<<endl<<"},"<<endl;
                c2++;
                archivo <<"{"<< endl;
                A--;
            }
            for(int index=im.width()/16-1;index<im.width();index+=im.width()/16)
            {
                rojo=im.pixelColor(index,indey).red();
                verde=im.pixelColor(index,indey).green();
                azul=im.pixelColor(index,indey).blue();
                if(rojo==255 && verde==255 && azul==255){azul=254;}else if(rojo==0 && verde==0 && azul==0){azul=1;}
                archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                c=c+1;
                if(c%16!=0)
                {
                    archivo<<",";
                }

            }

            //PixelesFaltantes=16%im.width();

            c2++;
            archivo<<endl<<"}"<<endl;
            if(c2%16!=0)
            {
                archivo<<",";
            }
        }

    }
}

archivo.close();

}
