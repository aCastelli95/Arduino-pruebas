#include <Faros.h>

#define LUZ_PRINCPIAL 2
#define LUZ_GIRO_DERECHA 22
#define LUZ_GIRO_IZQUIERDA 60 
#define LUZ_POSICION 4  // ESTO VA A CAMBIAR, PERO PARA LA PRUEBA ESTA BIEN.
#define LUZ_TIPO_NOCHE 24
Faros::Faros(){
	// cuerpo para las luces
}
void Faros::init(){
	pinMode(LUZ_PRINCPIAL, OUTPUT);
	pinMode(LUZ_GIRO_DERECHA,OUTPUT);
	pinMode(LUZ_POSICION,OUTPUT);
	pinMode(LUZ_TIPO_NOCHE,OUTPUT);

}

void Faros::delanteros(int porc_luz){
	// variable que contiene si la luz esta o no encendida segun lo presionado.
	if (faros_principales)
	{	int val_encendido = (255 * porc_luz)/100 ; // control de lo que viene del celular.
		// hacer la cuenta de cuanta intensidad tienen que estar encendidos.
		analogWrite(LUZ_PRINCPIAL, val_encendido);
	}else{
		analogWrite(LUZ_PRINCPIAL, 0);
	}


}

void Faros::giro(){
	if (faros_giroD){
		digitalWrite(LUZ_GIRO_DERECHA, HIGH);
	}else{
		digitalWrite(LUZ_GIRO_DERECHA, LOW);
	}

}

void Faros::posicion(int porc_luz){
	if(faros_posicion){
		int val_encendido = ((1024/4) * porc_luz)/100 ; // control de lo que viene del celular.
		// hacer la cuenta de cuanta intensidad tienen que estar encendidos.
		analogWrite(LUZ_POSICION, val_encendido);
	}else{
		analogWrite(LUZ_POSICION, 0);
	}

}

void Faros::tipoNoche(){
	if (faros_tNoche){
		digitalWrite(LUZ_TIPO_NOCHE,HIGH);
	}else{
		digitalWrite(LUZ_TIPO_NOCHE,LOW);
	}

}

