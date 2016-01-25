package controllers;

import java.util.ArrayList;
import java.util.List;

import javax.faces.application.FacesMessage;
import javax.faces.bean.ManagedBean;
import javax.faces.bean.ManagedProperty;
import javax.faces.context.FacesContext;
import javax.faces.context.Flash;

import models.Acessorio;
import models.Automovel;
import models.Marca;

@ManagedBean
public class AutomovelBean {
	private Automovel automovel;
	private List<String> acessoriosSelecionados;
	private String marcaSelecionada;
	
	@ManagedProperty(value="#{repositorioBean}")
	private RepositorioBean repositorio;

	public AutomovelBean() {
		System.out.println("Instanciando AutomovelBean");
		this.automovel = new Automovel();
		this.acessoriosSelecionados = new ArrayList<String>();
	}

	public String insere() {
		// Insere o automóvel na lista de automóveis da sessão
		repositorio.getAutomoveis().add(this.automovel);

		// Seta marca
		this.automovel.setMarca(Marca.valueOf(marcaSelecionada));
		
		// Seta acessórios
		if (acessoriosSelecionados != null && ! acessoriosSelecionados.isEmpty()) {
			List<Acessorio> l = new ArrayList<Acessorio>();
			this.automovel.setAcessorios(l);
			for (String a : acessoriosSelecionados) {
				l.add(Acessorio.valueOf(a));
			}

		}
		Flash flash = FacesContext.getCurrentInstance().getExternalContext().getFlash();
		flash.setKeepMessages(true);
		FacesContext.getCurrentInstance().addMessage(null, new FacesMessage(FacesMessage.SEVERITY_INFO, "Automóvel inserido com sucesso.", null));
		return "/automovel/lista?faces-redirect=true";
	}
	
	
	public Automovel getAutomovel() {
		return automovel;
	}

	public void setAutomovel(Automovel automovel) {
		this.automovel = automovel;
	}

	public List<String> getAcessoriosSelecionados() {
		return acessoriosSelecionados;
	}

	public void setAcessoriosSelecionados(List<String> acessoriosSelecionados) {
		this.acessoriosSelecionados = acessoriosSelecionados;
	}

	public String getMarcaSelecionada() {
		return marcaSelecionada;
	}

	public void setMarcaSelecionada(String marcaSelecionada) {
		this.marcaSelecionada = marcaSelecionada;
	}

	public RepositorioBean getRepositorio() {
		return repositorio;
	}

	public void setRepositorio(RepositorioBean repositorio) {
		this.repositorio = repositorio;
	}
	
	public Marca[] getMarcas() {
		return Marca.values();
	}
	
	public Acessorio[] getAcessorios() {
		return Acessorio.values();
	}
	
}
