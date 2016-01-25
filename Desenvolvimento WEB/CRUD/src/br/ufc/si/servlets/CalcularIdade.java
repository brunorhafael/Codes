package br.ufc.si.servlets;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Calendar;  
import java.util.Date; 

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/CalcularIdade")
public class CalcularIdade extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    public CalcularIdade() {
        super();
       
    }
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	
		PrintWriter out = response.getWriter();
		String name = request.getParameter("nome");
		int dia = Integer.parseInt(request.getParameter("dia"));
		int mes = Integer.parseInt(request.getParameter("mes"));
		int ano = Integer.parseInt(request.getParameter("ano"));
	
		Calendar c = Calendar.getInstance();  
        c.set(ano, dia, mes); 
    
        
        Date hoje = new Date();  
        Calendar cal = Calendar.getInstance();  
          
        cal.setTime(hoje);  
        int day1 = cal.get(Calendar.DAY_OF_YEAR);  
        int ano1 = cal.get(Calendar.YEAR);  
          
        int day2 = c.get(Calendar.DAY_OF_YEAR);  
        int ano2 = c.get(Calendar.YEAR);  
        
        
        int nAno = ano1 - ano2;  
        if(day1 < day2){
        	nAno--;
        	}

        out.println("<p>" + name +", voce tem "+ nAno +" anos </p>");
       
		
	}
}