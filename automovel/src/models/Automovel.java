package models;
import java.util.List;


public class Automovel {

	private static int ultimoId = 0;
	
	private int id;
	private String descricao;
	private List<Acessorio> acessorios;
	private Marca marca;

	public Automovel() {
		this.id = ++ultimoId;
	}
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	public List<Acessorio> getAcessorios() {
		return acessorios;
	}
	public void setAcessorios(List<Acessorio> acessorios) {
		this.acessorios = acessorios;
	}
	public Marca getMarca() {
		return marca;
	}
	public void setMarca(Marca marca) {
		this.marca = marca;
	}
	
	
	
	
}
