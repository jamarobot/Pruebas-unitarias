/*


#define LED 9

bool estado;

void setup(){
   

   estado=false;
               // Espera antes de encender el modulo
    Serial.begin(9600);
    pinMode(LED,OUTPUT);
   
}
void loop(){
     if (Serial.available()){
         Serial.read();
        estado=!estado;
        Serial.println(estado);         
    }

    if(estado){
        digitalWrite(LED,HIGH);
    }else{
        digitalWrite(LED,LOW);
      
    }
    //digitalWrite(LED_BUILTIN, (encendido)?HIGH:LOW);
    //encendido=!encendido;
    //delay(500);

    
}

{{13, 1, 5, 5, 3},
                                    {9, 6, 9, 5, 2},
                                    {10, 11, 10, 9, 6},
                                    {10, 10, 10, 12, 3},
                                    {12, 6, 14, 9, 6}};*/
#define TEST 2;
#include "Maze.h"

Maze m;
void setup(){
    Serial.begin(9600);
    int templ[5][5]={{13, 1, 5, 5, 3},
                                    {9, 6, 9, 5, 2},
                                    {10, 11, 10, 9, 6},
                                    {10, 10, 10, 12, 3},
                                    {12, 6, 14, 9, 6}};
    m.test(templ,1,1,4,4);
}
void loop(){
    
   
}