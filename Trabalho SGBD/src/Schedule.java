import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;


public class Schedule {
	private String scalonamento;
	
	//CONSTRUTOR
	
	public Schedule(String scalonamento) {
		this.scalonamento = scalonamento;
	}

	
	//METODOS
	
	
	public boolean isSeriabilizavel() {
		ConverterOperacoes convert = new ConverterOperacoes();
		List<Operacao> op =  convert.toOperacoes(getScalonamento());
		

		
		
		Map<String , Dado> mapa = new LinkedHashMap<String, Dado>();
		
	
		for(Operacao opera : op){
			
			Transacao tr = opera.getTx();
			Dado dd = opera.getDado();
			if(!mapa.containsKey(dd.getNome())){
				mapa.put(dd.getNome(), dd);
			}
			
			
			
			
			
			
			
			
			
			
			if(opera.isRead()){
						
				if(tr.getId()>= mapa.get(dd.getNome()).getTs_w()){
					
					mapa.get(dd.getNome()).setTs_r(tr.getId());
					
				}else{
					return false;
				}
				
				
				
				
				
				
				
				
			}else if(opera.isWrite()){
			
				if(tr.getId()>= mapa.get(dd.getNome()).getTs_r() && tr.getId()>= mapa.get(dd.getNome()).getTs_w()){
				
					mapa.get(dd.getNome()).setTs_w(tr.getId());
				
				}else{
					return false;
				}
			}
		}
		
		return true;
	}

	
	
	
	
	//GETTER E SETTER
	
	public void setScalonamento(String scalonamento) {
		this.scalonamento = scalonamento;
	}
	public String getScalonamento() {
		return scalonamento;
	}
	

}
