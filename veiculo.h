class Veiculo{
	public:
		
		Veiculo();
		virtual void mover() = 0;
	
	private:
		
		float velocidade;
		float distancia;
	
};
