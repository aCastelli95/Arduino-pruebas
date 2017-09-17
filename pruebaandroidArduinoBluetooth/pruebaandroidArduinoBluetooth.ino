#include <SoftwareSerial.h>

SoftwareSerial bluetooth(11, 10); // RX, TX

void setup()
{
Serial.begin(9600); //Iniciar el serial
pinMode(13, OUTPUT); //Establecer el pin 13 como salida
}
 
 
void loop()
{
   if(Serial.available()>=1)
   {
      char entrada = Serial.read(); //Leer un caracter
 
      if(entrada == 'h' or entrada == 'H') //Si es 'H', encender el LED
      {
         digitalWrite(13, HIGH);
         Serial.println("LED encendido");
      }
 
      else if(entrada == 'l' or entrada == 'L') //Si es 'L', apagar el LED
      {
         digitalWrite(13, LOW);
         Serial.println("LED apagado");
      }
 
      else if(entrada == 'i' or entrada == 'I') //Si es 'I', mostrar un mensaje de ayuda
      {
         Serial.println("Comandos:n (i) - abrir esta listan (h)- encender ledn (l) - apagar ledn");
      }
   }
}
