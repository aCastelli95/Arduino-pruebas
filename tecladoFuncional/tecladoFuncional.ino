#include <Keypad.h>
const byte Filas = 4;          //KeyPad de 4 filas
const byte Cols = 4;           //y 4 columnas

byte Pins_Filas[] = {9, 8, 7, 6};     //Pines Arduino para las filas.
byte Pins_Cols[] = {5, 4, 3, 2};     // Pines Arduino para las columnas.

char Teclas [ Filas ][ Cols ] =
    {
        {'1','2','3','A'},
        {'4','5','6','B'},
        {'7','8','9','C'},
        {'*','0','#','D'}
     };


Keypad Teclado = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

void setup() {
  Serial.begin(9600);

}

void loop() {
   char pulsacion = Teclado.getKey() ;
   if (pulsacion != 0) {            // Si el valor es 0 es que no se
          Serial.println(pulsacion);   // se ha pulsado ninguna tecla
   }
}
