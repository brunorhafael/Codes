package controllers;
import java.util.ArrayList;
import java.util.List;

import javax.faces.bean.ManagedBean;
import javax.faces.bean.SessionScoped;

import models.Automovel;

@ManagedBean
@SessionScoped
public class RepositorioBean {

	public RepositorioBean() {
		System.out.println("Instanciando RepositorioBean");
	}
	
	List<Automovel> automoveis = new ArrayList<Automovel>();
	
	public List<Automovel> getAutomoveis() {
		return automoveis;
	}

	public void setAutomoveis(List<Automovel> automoveis) {
		this.automoveis = automoveis;
	}

	public String insere(Automovel a) {
		automoveis.add(a);
		return "lista";
	}

}
