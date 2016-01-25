package br.ufc.si;

public interface IRevenda {
	
	public void inserirProduto(Produto produto, int indice);
	
	public void comprar(int cod, int qtd);
	
	public void vender(int cod, int qtd);
	
	public Produto consultar(int cod);
	
	public void listarProdutos();
	
}
