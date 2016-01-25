package br.ufc.Beans;

import javax.faces.bean.ManagedBean;

import br.ufc.DAO.EventoDAO;
import br.ufc.DAO.EventoJPADAO;
import br.ufc.model.Evento;

@ManagedBean(name="eventoBean")
public class EventoBean {
	
	
	 private Evento evento;
	 
	 public EventoBean() {
		 this.evento = new Evento();
	}
	 
	 public String inserirEvento(){
		 EventoDAO eventoDAO = new EventoJPADAO();
		 try{
			 eventoDAO.beginTransaction();
			 eventoDAO.save(this.evento);
			 eventoDAO.commit();
		 } catch(Exception e){
			 eventoDAO.rollback();
			 e.printStackTrace();
		 } finally{
			 eventoDAO.close();
		 }
		 
		 return "";
	 }

	public Evento getEvento() {
		return evento;
	}

	public void setEvento(Evento evento) {
		this.evento = evento;
	}
	 
	 
	 

}
