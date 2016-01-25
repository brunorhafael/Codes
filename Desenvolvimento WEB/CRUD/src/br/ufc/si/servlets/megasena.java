package br.ufc.si.servlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.util.ArrayList;
import java.util.Random;


@WebServlet("/megasena")
public class megasena extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
  
    public megasena() {
        super();
      
    }
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	
		ArrayList<Integer> numeros = new ArrayList<>();
		PrintWriter out = response.getWriter();
		out.println("<html> <title>Mega Sena</title><body><br>");
		Random rand = new Random();
		
		while(numeros.size() < 6) {
			
			int r  = rand.nextInt(60);
			
			if(!numeros.contains(r)) {
				numeros.add(r);
				
			}
		}
		for (Integer i : numeros) {
			
			out.println("<p>"+ i +"</p> <br />");
		}	
	}	
}
