#include <string.h>

class Aviao{
	
	public:

		Aviao(float = 1000.0, int = 700, int = 250 );
		Aviao( const Aviao &);
		void decolar();
		void pousar();
	
	protected:
		void calcularPesoTrip();
		string *tripulacao;
		float *pesoTrip;
		
			
	private:
		float peso; // em Kg
		int altitude; // em Pés
		int velocidade; // em Nós	
	
	
};
