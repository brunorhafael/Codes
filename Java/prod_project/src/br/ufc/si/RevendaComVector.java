package br.ufc.si;

import java.util.ArrayList;

public class RevendaComVector implements IRevenda{

	private  ArrayList<Produto> produtos = new ArrayList<Produto>();
	private int indice;
	private int max;
	
	public RevendaComVector(ArrayList<Produto> produtos, int indice, int max) {
		super();
		this.produtos = produtos;
		this.indice = indice;
		this.max = max;
	}

	public RevendaComVector() {
		
	}

	public void inserirProduto(Produto produto, int indice){
		produtos.add(indice, produto);
	  }
	
	public void comprar(int cod, int qtd){
		 for(int i=0; i<produtos.size(); i++){
			Produto p = produtos.get(i);
			 if(p.getCod() == cod){
				p.comprar(qtd);
				return;
			}
		 }
		
		System.out.println("Produto não encontrado!");
		
	}
	
	public void vender(int cod, int qtd){
			Produto p = produtos.get(this.indice);
			if(p.getCod() == cod){
				p.vender(qtd);
				return;
			}
		
		System.out.println("Produto não encontrado!");
	}
	
	
	public Produto consultar(int cod){
			Produto p = produtos.get(this.indice);
			if(p.getCod() == cod){
				return p;
			}
		return null;
	}
	
	public void listarProdutos(){
			System.out.println(produtos);
	}
}
