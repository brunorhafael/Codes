package br.ufc.DAO;

import br.ufc.model.Participante;


public class ParticipanteJPADAO extends GenericJPADAO<Participante> implements ParticipanteDAO {
	
	public ParticipanteJPADAO() {
		this.persistentClass = Participante.class;
	}

}
