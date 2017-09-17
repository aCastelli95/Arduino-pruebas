#include <contrasenia.h>
#include <MEF.h>

#include <SoftwareSerial.h>

//-------------------------------------
const int LED_G1 = 22;
const int LED_G2 = 24;
const int LED_Y = 26;
const int LED_R1 = 28;
const int LED_R2 = 30;
//-------------------------------------
const int S_MOV = 32; // sensor de movimiento, PONER EN PUERTO DIGITAL
SoftwareSerial S_BT(10,11); // RX, TX, BLUETOOTH
//---------------------------------------
MEF varMEF;
char tecla = 0;
void setup() {
  // put your setup code here, to run once:
  //Inicializamos todo

  pinMode(LED_G1,OUTPUT);
  pinMode(LED_G2,OUTPUT);
  pinMode(LED_Y,OUTPUT);
  pinMode(LED_R1,OUTPUT);
  pinMode(LED_R2,OUTPUT);
  pinMode(S_MOV,INPUT);

  Serial.begin(9600);
  S_BT.begin(9600);
}

void loop() {
  if (S_BT.available()) {
      tecla = S_BT.read();
      varMEF.tranMEF(tecla);
      varMEF.cambioMEF(tecla);
  }

  
  
 
}
