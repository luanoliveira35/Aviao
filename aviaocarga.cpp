#include "AviaoCarga.h"


AviaoCarga::AviaoCarga(float peso, int altitude , int velocidade, bool estadoPortaDeCarga, int qtdCarga, int qtdCargaMax )
:Aviao(peso, altitude, velocidade)
{
	
	estadoPortaDeCarga = true ? this->estadoPortaDeCarga = false : this->estadoPortaDeCarga = false ;
	qtdCarga >= 0 ? this->qtdCarga = qtdCarga : this->qtdCarga = 0 ;
	qtdCargaMax >= 0 ? this->qtdCargaMax = qtdCargaMax : this->qtdCargaMax = 0 ;

	
}
