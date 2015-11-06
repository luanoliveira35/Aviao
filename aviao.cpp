#include "aviao.h"


Aviao::Aviao(float peso, int altitude , int velocidade ){
	peso >= 0 ? this->peso = peso : this->peso = 0 ;
	altitude >= 0 ? this->altitude = altitude : this->altitude = 0 ;
	velocidade >= 0 ? this->velocidade = velocidade : this->velocidade = 0 ;
	
}
