#include "aviaoJato.h"

AviaoJato::ligarMotores(){
	this->motor1 = true;
}

AviaoJato::ativarTurbo(){
	if(this->motor1 == true){
		this->motor2= true;
	}
	
}

AviaoJato::mover(){
	if(this->motor1 = true){
		this-> velocidade = 100;
		
		if(this->motor2){
			this->velocidade = velocidade*5;
		}
	}
	
}
