#include "aviao.h"
class AviaoCarga: public Aviao{
	
	public:

		AviaoCarga(float = 1000.0, int = 700, int = 250 ,bool = false, int = 0, int = 500 );
		AviaoCarga( const Aviao &);
		void abrirPortadeCarga();
		void adicionarCarga(int);
			
	private:
	
		bool estadoPortaDeCarga;
		int qtdCarga;
		const static int qtdCargaMax;
		int *cargas;
		
};
