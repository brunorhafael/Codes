package br.ufc.si.servlets;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Set;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet("/Soma")
public class Soma extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    public Soma() {
        super();
       
    }

	
	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		int numero1 = Integer.parseInt(request.getParameter("n1"));
		int numero2 = Integer.parseInt(request.getParameter("n2"));
		
		request.setAttribute("soma", numero1 + numero2);
		request.setAttribute("subtracao", numero1 - numero2);
		
		request.getRequestDispatcher("/FormularioSoma.jsp").forward(request, response);
	
		
	}
}
