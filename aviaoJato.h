#include "aviao.h"

class AviaoJato: Aviao{
	
	public:
		AviaoJato();
		int executarManobra();
		void ativarTurbo();
		virtual void mover() = 0;
		virtual void ligarMotores()=0;
		
	private:
		
		bool estadoCabinePiloto;
		int tipoDeManobra;
		bool motor1,motor2;
	
};
