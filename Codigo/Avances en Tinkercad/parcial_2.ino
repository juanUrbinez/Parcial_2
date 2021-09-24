#include <Adafruit_NeoPixel.h>

#define LED_PIN 2

#define LED_COUNT 256

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// C++ code
//
void setup()
{
  int arreglo[3][3][3]=
  {
    {
      {240,0,0},{0,0,0},{0,0,0}
    },
    {
      {0,0,0},{0,0,0},{0,0,0}
    },
    {
      {0,0,0},{0,250,0},{0,0,0}
    }
  };
  
  
  
  strip.begin();
  strip.fill(130, 0, 256);
  //strip.setPixelColor(12,arreglo[0][0][0], 0,arreglo[2][1][1] );
  //strip.setPixelColor(12,0, 0, 250);
  strip.show();
  
}

void loop()
{

}