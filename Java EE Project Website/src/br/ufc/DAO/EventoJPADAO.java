package br.ufc.DAO;

import br.ufc.model.Evento;

public class EventoJPADAO extends GenericJPADAO<Evento> implements EventoDAO {
	public EventoJPADAO(){
		this.persistentClass = Evento.class;
	}

	
}
