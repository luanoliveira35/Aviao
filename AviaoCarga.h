#include "aviao.h"
class AviaoCarga: public Aviao{
	
	public:

		AviaoCarga(bool = false, int = 0, int = 500 );
		AviaoCarga( const Aviao &);
		void abrirPortadeCarga();
		void adicionarCarga(int);
			
	private:
	
		bool estadoPortaDeCarga;
		int qtdCarga;
		int qtdCargaMax;
		int cargaID;
		int *cargas;
		
};
