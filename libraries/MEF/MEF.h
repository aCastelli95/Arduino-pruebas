#ifndef MEF_H
#define MEF_H
#include <Arduino.h>
#include <contrasenia.h>
class MEF
{
public:
	enum estados {IDLE, MODO_MEVOY, MODO_ESTOY};
	
	estados eActual = IDLE;
	estados eAnterior = IDLE;
	char presionadaP = 0;
	char accionarVerificacion=1;
	contrasenia con;

	MEF();
	void cambioMEF(char tecla);
	void tranMEF(char tecla);
	void init();
};
#endif