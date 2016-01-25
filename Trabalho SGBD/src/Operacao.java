
public class Operacao {
	private boolean read;
	private boolean write;
	private Transacao Tx;
	private Dado dado;
	
	
	//CONSTRUTOR
	
	
	
	public Operacao(boolean read, boolean write, Transacao tx, Dado dado) {
		super();
		this.read = read;
		this.write = write;
		Tx = tx;
		this.dado = dado;
	}

	
	
	//GETTER E SETTER
	
	public boolean isRead() {
		return read;
	}

	public boolean isWrite() {
		return write;
	}

	public void setWrite(boolean write) {
		if(write){
			this.read=false;
		}
		this.write=write;
	}
	

	public void setRead(boolean read) {
		if(read){
			this.write = false;
		}
		this.read=read;
	}


	public Transacao getTx() {
		return Tx;
	}

	public void setTx(Transacao tx) {
		Tx = tx;
	}

	public Dado getDado() {
		return dado;
	}

	public void setDado(Dado dado) {
		this.dado = dado;
	}
	
	
	
	
	
}
