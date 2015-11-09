#include "AviaoCarga.h"


AviaoCarga::AviaoCarga(float peso, int altitude , int velocidade, bool estadoPortaDeCarga, int qtdCarga, int qtdCargaMax )
:Aviao(peso, altitude, velocidade)
{
	
	estadoPortaDeCarga = true ? this->estadoPortaDeCarga = false : this->estadoPortaDeCarga = false ;
	qtdCarga >= 0 ? this->qtdCarga = qtdCarga : this->qtdCarga = 0 ;
	qtdCargaMax >= 0 ? this->qtdCargaMax = qtdCargaMax : this->qtdCargaMax = 0 ;

	
}

AviaoCarga::AviaoCarga(const AviaoCarga &aviaoCargaOut ) : Aviao(static_cast<Aviao>(aviaoCargaOut))
{
	this->estadoPortaDeCarga = aviaoCargaOut.estadoPortaDeCarga;
	this->qtdCarga = aviaoCargaOut.qtdCarga;
	this->qtdCargaMax = aviaoCargaOut.qtdCargaMax;
	this->cargas = aviaoCargaOut.qtdCarga;
	
	
	if(this->qtdCarga !=0)
	{
		cargas = new int[qtdCarga];
		for(int i=0; i<qtdCarga; i++)
			cargas[i] = aviaoOut.qtdCarga[i];
	}
	
	
}
