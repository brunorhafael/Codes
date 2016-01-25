package models;

public enum Marca {
	CHEVROLET("Chevrolet"), FIAT("Fiat"), FORD("Ford"), 
	TOYOTA("Toyota"), VOLKSWAGEN("Volkswagen"); 

	private String nome;
	
	private Marca(String nome) {
		this.nome = nome;
	}

	public String getNome() {
		return this.nome;
	}

}
