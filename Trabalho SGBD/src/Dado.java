

public class Dado {
	private String nome; //x y z
	private int ts_r = 0;
	private int ts_w = 0;
	

	//CONSTRUTOR
	
	public Dado(String nome, int ts_r, int ts_w) {
		super();
		this.nome = nome;
		this.ts_r = ts_r;
		this.ts_w = ts_w;
	}
	
	
	//GETTER E SETTER
	
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getTs_r() {
		return ts_r;
	}
	public void setTs_r(int ts_r) {
		this.ts_r = ts_r;
	}
	public int getTs_w() {
		return ts_w;
	}
	public void setTs_w(int ts_w) {
		this.ts_w = ts_w;
	}
	
	
	
	@Override
	public boolean equals(Object obj) {
		Dado d = (Dado)obj;
		if(!(obj instanceof Dado)){
			return false;	
		}
		return d.getNome().equals(this.nome);
	}
	
	
}
