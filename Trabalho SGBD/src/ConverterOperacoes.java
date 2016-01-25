import java.util.ArrayList;
import java.util.List;


public class ConverterOperacoes {
	private Dado dd;
	private Operacao op;
	private Transacao tr;
	
	public List<Operacao> toOperacoes(String escalonamento){
		
		List<Operacao> lista_op = new ArrayList<Operacao>();
		String[] es = escalonamento.split(";");
		
		
		try {
			for(String ss : es){	
				
				
				if(ss.charAt(0)=='r'){
					dd = new Dado(ss.charAt(3)+"", 0 ,0);
					tr = new Transacao();
					tr.setId(Integer.parseInt(ss.charAt(1)+""));
					op = new Operacao(true, false, tr, dd);
					lista_op.add(op);
					//System.out.println("\n Operação " + lista_op.size() + ": r" + tr.getId() +"("+ op.getDado().getNome()+")");
				}else if(ss.charAt(0)=='w'){
					dd = new Dado(ss.charAt(3)+"", 0 ,0);
					tr = new Transacao();
					tr.setId(Integer.parseInt(ss.charAt(1)+""));
					op = new Operacao(false, true, tr, dd);
					lista_op.add(op);
					//System.out.println("\n Operação " + lista_op.size() + ": w" + tr.getId() +"("+ op.getDado().getNome()+")");
				}
				
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
			
		return lista_op;
	}	
}