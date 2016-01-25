package br.ufc.si;

public class Produto {

	private int cod, qtd;
	private String desc;
	private double custo,valor,lucro;
	
	public Produto(int cod, int qtd, String desc, 
			       double custo, double lucro) {
		this.cod = cod;
		this.qtd = qtd;
		this.desc = desc;
		this.custo = custo;
		this.lucro = lucro;
	}

	public Produto(int cod, String desc) {
		this.cod = cod;
		this.desc = desc;
	}

	public void comprar(int qtd){
		this.qtd+=qtd;
	}
	
	public void vender(int qtd){
		if(qtd <= this.qtd)
			this.qtd-=qtd;
		else
			System.out.println("Estoque insuficiente: " + this.qtd);
	}
	
	public double calcularPrecoVenda(){
		double lucroCalc = this.lucro*(this.valor+this.custo);
		return this.valor+this.custo+lucroCalc;
	}
	
	public int getCod() {
		return cod;
	}
	public void setCod(int cod) {
		this.cod = cod;
	}
	public int getQtd() {
		return qtd;
	}
	public void setQtd(int qtd) {
		this.qtd = qtd;
	}
	public String getDesc() {
		return desc;
	}
	public void setDesc(String desc) {
		this.desc = desc;
	}
	public double getCusto() {
		return custo;
	}
	public void setCusto(double custo) {
		this.custo = custo;
	}
	public double getLucro() {
		return lucro;
	}
	public void setLucro(double lucro) {
		this.lucro = lucro;
	}
	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public String toString() {
		return "Produto [cod=" + cod + ", qtd=" + qtd + "," +
			   " desc=" + desc	+ ", custo=" + custo + "," +
			   " lucro=" + lucro + "]";
	}
	
	
	
}
