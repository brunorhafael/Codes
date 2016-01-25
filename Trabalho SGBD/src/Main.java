


public class Main {

	
	public static void main(String[] args) {
		
		//String escalonamento = "r2(x);r1(y);w1(y);r2(y);w1(z);w2(y);r2(z);w2(z)";
		//String escalonamento = "r2(x);r1(y);w1(y);r2(y);w1(z);w1(y);r2(z);w2(z)";
		//String escalonamento = "r1(x);r2(x);w1(x);r1(y);w2(x);w1(y))";
		String escalonamento = "r4(y);r2(x);r1(x);w4(y);r3(y);w3(y);w1(x);r2(x)";
		
		
		Schedule schedule = new Schedule(escalonamento);
		
		if(schedule.isSeriabilizavel()){
			System.out.println("É seriabilizável");
			
		}else{			
			System.out.println("Não é seriabilizável");
			}
		
		schedule.isSeriabilizavel();
		
	}

}
