package br.ufc.Beans;





import java.util.List;

import javax.faces.bean.ManagedBean;
import javax.faces.context.FacesContext;
import javax.servlet.http.HttpServletRequest;



import br.ufc.DAO.AtividadeDAO;
import br.ufc.DAO.AtividadeJPADAO;
import br.ufc.DAO.ParticipanteDAO;
import br.ufc.DAO.ParticipanteJPADAO;
import br.ufc.model.Atividade;
import br.ufc.model.Participante;

@ManagedBean(name="participanteBean")
public class ParticipanteBean {

	
	private Participante participante;
	private Atividade atividade;
	
	public Atividade getAtividade() {
		return atividade;
	}

	public void setAtividade(Atividade atividade) {
		this.atividade = atividade;
	}

	public ParticipanteBean() {
		this.participante = new Participante();
	}
	
	
	public String inserirParticipante(){
		
		ParticipanteDAO participanteDAO = new ParticipanteJPADAO();
		
		try{
			participanteDAO.beginTransaction();
			participanteDAO.save(this.participante);
			participanteDAO.commit();
			
		} catch (Exception e){
			participanteDAO.rollback();
			e.printStackTrace();
		} finally{
			participanteDAO.close();
		}
		
		return "/listarParticipante";
		
	}
	
	
	public List<Participante> getParticipantes(){
		ParticipanteDAO participanteDAO = new ParticipanteJPADAO();
		participanteDAO.beginTransaction();
		List<Participante> l = participanteDAO.find();
		participanteDAO.close();
		return l;
	}
	
	
	
	public String atualizarParticipante(){
		
		ParticipanteDAO participanteDAO = new ParticipanteJPADAO();
		
		participanteDAO.beginTransaction();
		participanteDAO.update(participante);
		participanteDAO.commit();
		participanteDAO.close();
		return "/listarParticipante";
	}

	public String addParticipante(){
		
		AtividadeDAO aDao = new AtividadeJPADAO();
		atividade = aDao.find(atividade.getId());
		aDao.close();
		ParticipanteDAO dao = new ParticipanteJPADAO();
		participante = dao.find(participante.getId());
		participante.getAtividades().add(atividade);
		
		dao.beginTransaction();
		dao.update(participante);
		dao.close();
		
		dao.close();
		return"";
	}
	
	/*
	 * pega o id e usando o dao carrega o participante
	 * pega o id da atividade e carrega usando o dao
	 * pega a lista de atividades do participante
	 * adiciona a atividade a lista
	 * update no usuario
	 */
	
	public String buscarParticipante(){
		
		HttpServletRequest request = (HttpServletRequest)FacesContext.getCurrentInstance().getExternalContext().getRequest();
		int id = Integer.parseInt(request.getParameter("id"));
		ParticipanteDAO dao = new ParticipanteJPADAO();
		participante = dao.find(id);
	
		return "/atualizarParticipante";
		
	}



	public void deletarParticipante(){
		
		HttpServletRequest request = (HttpServletRequest)FacesContext.getCurrentInstance().getExternalContext().getRequest();
		int id = Integer.parseInt(request.getParameter("id"));
		
		
		ParticipanteDAO participanteDAO = new ParticipanteJPADAO();
		
		participanteDAO.beginTransaction();
		Participante persistedAtividade  = participanteDAO.find(id);
		participanteDAO.delete(persistedAtividade);
		participanteDAO.commit();
		participanteDAO.close();
	}
	
	
	public Participante getParticipante() {
		return participante;
	}

	public void setParticipante(Participante participante) {
		this.participante = participante;
	}
	
	
	

	
			
}
