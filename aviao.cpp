#include "aviao.h"


Aviao::Aviao(float peso, int altitude , int velocidade ){
	peso >= 0 ? this->peso = peso : this->peso = 0 ;
	altitude >= 0 ? this->altitude = altitude : this->altitude = 0 ;
	velocidade >= 0 ? this->velocidade = velocidade : this->velocidade = 0 ;
	

}

Aviao::Aviao(const Aviao &aviaoOut){
	this->altitude = aviaoOut.altitude;
	this->peso = aviaoOut.peso;
	this->velocidade = aviaoOut.velocidade;
	this->tripulacao = aviaoOut.numTripulacao;
	
	
	if(this->numTripulacao !=0)
	{
		tripulacao = new int[numTripulacao];
		for(int i=0; i<numTripulacao; i++)
			tripulacao[i] = aviaoOut.numTripulacao[i];
			
		pesoTrip = new int[numTripulacao]	
		for(int i=0; i<numTripulacao; i++)
			pesoTrip[i] = aviaoOut.numTripulacao[i];
	}


	

}
