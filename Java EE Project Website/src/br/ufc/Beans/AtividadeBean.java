package br.ufc.Beans;

import java.util.List;

import javax.faces.bean.ManagedBean;
import javax.faces.context.FacesContext;
import javax.persistence.EntityManager;
import javax.servlet.http.HttpServletRequest;

import br.ufc.DAO.AtividadeDAO;
import br.ufc.DAO.AtividadeJPADAO;
import br.ufc.DAO.GenericDAO;
import br.ufc.DAO.ParticipanteJPADAO;
import br.ufc.model.Atividade;

@ManagedBean(name="atividadeBean")
public class AtividadeBean {

	
	private Atividade atividade;
	
	public AtividadeBean() {
		this.atividade = new Atividade();
	}
	
	
	public String inserirAtividade(){
		
	
		AtividadeDAO atividadeDAO = new AtividadeJPADAO();
		try{
			atividadeDAO.beginTransaction();
			atividadeDAO.save(this.atividade);
			atividadeDAO.commit();
			
		} catch (Exception e){
			atividadeDAO.rollback();
			e.printStackTrace();
		} finally{
			atividadeDAO.close();
		}
		
		return "/listarAtividade";
		
	}
	
	public List<Atividade> getAtividades(){
		AtividadeDAO atividadeDAO = new AtividadeJPADAO();
		atividadeDAO.beginTransaction();
		List<Atividade> l = atividadeDAO.find();
		atividadeDAO.close();
		return l;
	}
	
	
	public String atualizarAtividade(){
		
			AtividadeDAO atividadeDAO = new AtividadeJPADAO();
			
			atividadeDAO.beginTransaction();
			atividadeDAO.update(atividade);
			atividadeDAO.commit();
			atividadeDAO.close();
			return "/listarAtividade";
		}

	public String buscarAtividade(){
		
		HttpServletRequest request = (HttpServletRequest)FacesContext.getCurrentInstance().getExternalContext().getRequest();
		int id = Integer.parseInt(request.getParameter("id"));
		AtividadeDAO dao = new AtividadeJPADAO();
		atividade = dao.find(id);

		return "/atualizarAtividade";
		
	}

	public void deletarAtividade(){
		
		HttpServletRequest request = (HttpServletRequest)FacesContext.getCurrentInstance().getExternalContext().getRequest();
		int id = Integer.parseInt(request.getParameter("id"));
		
		
		AtividadeDAO atividadeDAO = new AtividadeJPADAO();
		
		atividadeDAO.beginTransaction();
		Atividade persistedAtividade  = atividadeDAO.find(id);
		atividadeDAO.delete(persistedAtividade);
		atividadeDAO.commit();
		atividadeDAO.close();
	}
	
	
	
	
	public Atividade getAtividade() {
		return atividade;
	}


	public void setAtividade(Atividade atividade) {
		this.atividade = atividade;
	}

	


}
