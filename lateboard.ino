#include <Adafruit_NeoPixel.h>

#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5
#define PIN_6 6
#define PIN_7 7

Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(12, PIN_2, NEO_GRB + NEO_KHZ800); // Brown wire McCaul 
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(12, PIN_3, NEO_GRB + NEO_KHZ800); // Green wire Toilet
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(12, PIN_4, NEO_GRB + NEO_KHZ800); // Blue wire TTC
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(12, PIN_5, NEO_GRB + NEO_KHZ800); // White wire Richmond
Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(12, PIN_6, NEO_GRB + NEO_KHZ800); // Purple wire House
Adafruit_NeoPixel strip6 = Adafruit_NeoPixel(12, PIN_7, NEO_GRB + NEO_KHZ800); // Yellow wire coffee

int input;
int triggerOne = 0;
 


void setup() {
 Serial.begin(9600);
 // initialize serial communications

//STRIP 1
  strip1.begin();
  strip1.setBrightness(30); //adjust brightness here
  strip1.show(); // Initialize all pixels to 'off'

//STRIP 2
  strip2.begin();
  strip2.setBrightness(30); //adjust brightness here
  strip2.show(); // Initialize all pixels to 'off'


//STRIP 3
 strip3.begin();
  strip3.setBrightness(30); //adjust brightness here
  strip3.show(); // Initialize all pixels to 'off'


//STRIP 4
 strip4.begin();
  strip4.setBrightness(30); //adjust brightness here
  strip4.show(); // Initialize all pixels to 'off'


//STRIP 5
 strip5.begin();
  strip5.setBrightness(30); //adjust brightness here
  strip5.show(); // Initialize all pixels to 'off'


//STRIP 6
 strip6.begin();
  strip6.setBrightness(30); //adjust brightness here
  strip6.show(); // Initialize all pixels to 'off'
  
}
 
void loop() {
  // if there's serial data available
input=Serial.read(); 


if(input==1) // Sparking
{
   for(int i=0; i<strip1.numPixels(); i++) {
      strip1.setPixelColor(i,0, 0, 255);
      strip1.show();
     
}
} 

if(input==11) // Sparking
{
   for(int i=0; i<strip1.numPixels(); i++) {
      strip1.setPixelColor(i,0, 0, 0);
      strip1.show();
     
}
}
  

if(input==2)
{
 for(int i=0; i<strip2.numPixels(); i++) {
      strip2.setPixelColor(i,0, 0, 255);
      strip2.show();
       Serial.println("I'm here! Two");     
} 

}

if(input==22)
{
 for(int i=0; i<strip2.numPixels(); i++) {
      strip2.setPixelColor(i,0, 0, 0);
      strip2.show();
       Serial.println("I'm here! Two");     
} 

}

if(input==3)
{
 for(int i=0; i<strip3.numPixels(); i++) {
      strip3.setPixelColor(i,0, 0, 255);
      strip3.show();
      delay(100);
} 
}

if(input==33)
{
 for(int i=0; i<strip3.numPixels(); i++) {
      strip3.setPixelColor(i,0, 0, 0);
      strip3.show();
      delay(100);
} 
}

if(input==4)
{
 for(int i=0; i<strip4.numPixels(); i++) {
      strip4.setPixelColor(i,0, 0, 255);
      strip4.show();
      delay(100);
} 
}

if(input==44)
{
 for(int i=0; i<strip4.numPixels(); i++) {
      strip4.setPixelColor(i,0, 0, 0);
      strip4.show();
      delay(100);
} 
}

if(input==5) // Not working
{
 for(int i=0; i<strip5.numPixels(); i++) {
      strip5.setPixelColor(i,0, 0, 255);
      strip5.show();
      delay(100);
} 
}

if(input==55) // Not working
{
 for(int i=0; i<strip5.numPixels(); i++) {
      strip5.setPixelColor(i,0, 0, 0);
      strip5.show();
      delay(100);
} 
}

if(input==6)
{
 for(int i=0; i<strip6.numPixels(); i++) {
      strip6.setPixelColor(i,0, 0, 255);
      strip6.show();
      delay(100);
} 
}


if(input==66)
{
 for(int i=0; i<strip6.numPixels(); i++) {
      strip6.setPixelColor(i,0, 0, 0);
      strip6.show();
      delay(100);
} 
}
}





