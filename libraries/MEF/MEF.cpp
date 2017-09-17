#include<MEF.h>
/*
	Para los estados, lo que tenemos
		IDLE: Estado en el cual se espera por u evento de teclado o algo del usuario-
		MODO_MEVOY: Estado en el cual se necseita realziar el activado d la alarma
		MODO_ESTOY: Estado en el cual se realiza el desactivado de la alarma MOMENTANEAMENTE.
		presionadaP= Indica si se presiono dicha tecla, si es 0 se acepto sino estoy en entada de cosas.
*/


MEF::MEF(){

	
}
void MEF::init(){
	eActual = IDLE;
	eAnterior = IDLE;
	presionadaP = 0; 
	accionarVerificacion=1;
}

void MEF::cambioMEF(char tecla){
	switch(eActual){
		case(IDLE):
			// por ahora no hago anda mas que vijilar
			// podria ir la funcion de si detecto algo que lo imprima....vemos.
		break;
		case(MODO_MEVOY):
			if (accionarVerificacion)
			{
				delay(2000);
				digitalWrite(24, HIGH);
				delay(2000);
				digitalWrite(24, LOW);
				accionarVerificacion = 0; // PARA QUE SUCEDA UA SOLA VEZ

			}
			 // simulo la comprobacion del equipo rapidamente, ponele.
			if (!presionadaP){
				// veo si el bluetooth mando algo
					if ((tecla>=48) && (tecla<=57))
					{
						con.setContraseniaNueva(tecla);
					}
				
			}else{
				// verifico si lo ingresado es correcto
				delay(2000);
				// tendria que verifica si al clave ingersada es correcta
				Serial.println("Se activo la alarma con normalidad");
				presionadaP = 0;
				eAnterior = MODO_MEVOY;
				eActual = IDLE;
				delay(3000);
				Serial.println("Salga de la habitacion inmediatamente");
				delay(3000);

			}                                                                                               


		break;
		case(MODO_ESTOY):
		break;
	}

}
void MEF::tranMEF(char tecla){
	Serial.println("Entre a la MEF");
	Serial.println();
	switch(tecla){
		case('1'):
		break;
		
		case('2'):
		break;

		case('3'):
		break;

		case('4'):
		break;

		case('5'):
		break;

		case('6'):
		break;

		case('7'):
		break;

		case('8'):
		break;

		case('9'):
		break;

		case('0'):
		break;

		case('P'):
			presionadaP = 1;
		break;

		case('F'):
		break;

		//case('1'): Este seria el del fuego-, lo que pasa q puse doble F en los botones.
		//break;

		case('Z'):
		break;

		case('M'):
			// presionamos y salimos del estado IDLE
			if (eActual == IDLE){
					eActual = MODO_MEVOY;
					Serial.println("Se presiono MODO");
			}
				/* code */
			
		break;

		case('C'):
		break;

		default:
			// Cuando no se presiona nada, vemos que hacemos.

		break;
	}

}