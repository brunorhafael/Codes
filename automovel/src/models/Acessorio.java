package models;

public enum Acessorio {
	AIR_BAG_DUPLO("Air Bag Duplo"), AR_CONDICIONADO("Ar Condicionado"), 
	FREIO_ABS("Freio ABS");
	
	private String nome;
	
	private Acessorio(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
}
