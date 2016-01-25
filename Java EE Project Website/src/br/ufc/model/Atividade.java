package br.ufc.model;

import java.util.List;
import java.util.Set;

import javax.faces.bean.ManagedBean;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.ManyToMany;
import javax.persistence.ManyToOne;
import javax.persistence.Table;
@ManagedBean
@Entity
@Table(name="atividade")
public class Atividade {
	
	@Id
	@GeneratedValue
	private int id;
	private int codigo;
	private String descricao;
	private String ministrante;
	private int quantParticipante;
	private double valor;
	
	@ManyToMany(mappedBy="atividades")
    private List<Participante> participantes;
	
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public int getCodigo() {
		return codigo;
	}
	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	public String getMinistrante() {
		return ministrante;
	}
	public void setMinistrante(String ministrante) {
		this.ministrante = ministrante;
	}
	public int getQuantParticipante() {
		return quantParticipante;
	}
	public void setQuantParticipante(int quantParticipante) {
		this.quantParticipante = quantParticipante;
	}
	public double getValor() {
		return valor;
	}
	public void setValor(double valor) {
		this.valor = valor;
	}
	
	
	

}
