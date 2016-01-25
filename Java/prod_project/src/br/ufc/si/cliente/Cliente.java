package br.ufc.si.cliente;


import br.ufc.si.Produto;
import br.ufc.si.RevendaComArray;

public class Cliente {

	public static void main(String[] args) {
		
		RevendaComArray rca = new RevendaComArray();
		
		Produto p1 = new Produto(1, "Lousa");
		Produto p2 = new Produto(2, "Pincel");
		Produto p3 = new Produto(3, "Apagador");
		
		rca.inserirProduto(p1, 1);
		rca.inserirProduto(p2, 2);
		rca.inserirProduto(p3, 3);
		
		Produto p = rca.consultar(1);

		if(p!=null)
			System.out.println(p.toString());
		else 
			System.out.println("Produto nao encontrado");
	}
}
















