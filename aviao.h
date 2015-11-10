#include <string.h>
#include "veiculo.h"

class Aviao : public Veiculo{
	
	public:

		Aviao(float = 1000.0, int = 700, int = 250 );
		Aviao( const Aviao &);
		virtual void mover() = 0;
		virtual void ligarMotores()=0;
		void decolar();
		void pousar();
	
	protected:
		void calcularPesoTrip();
		string *tripulacao;
		float *pesoTrip;
		float somaPeso;
		int numTripulacao;
			
	private:
		float peso; // em Kg
		int altitude; // em Pés
		int velocidade; // em Nós	
	
	
};
