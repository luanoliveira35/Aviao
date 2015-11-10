#include "aviao.h"

class AviaoJato: Aviao{
	
	public:
		AviaoJato();
		int executarManobra();
		void ativarTurbo();
		virtual void mover() ;
		virtual void ligarMotores();
		
	private:
		
		bool estadoCabinePiloto;
		int tipoDeManobra;
		bool motor1,motor2;
	
};
