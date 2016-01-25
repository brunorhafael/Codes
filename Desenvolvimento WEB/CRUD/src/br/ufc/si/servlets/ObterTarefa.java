package br.ufc.si.servlets;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


@WebServlet("/ObterTarefa")
public class ObterTarefa extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    
    public ObterTarefa() {
        super();
      
    }

	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		String name = request.getParameter("tarefa");
		PrintWriter out = response.getWriter();
		HttpSession session = request.getSession();
		ArrayList<String> nomes=null;
		
		if(session.getAttribute("Lista") != null){
			nomes = (ArrayList<String>) session.getAttribute("Lista");
		}else{
			nomes = new ArrayList<String>();
		}
		
		nomes.add(name);
		
		for (String string : nomes) {
			out.println("<p>"+ string +"</p>");
			
		}
		
		session.setAttribute("Lista", nomes);
	}
}