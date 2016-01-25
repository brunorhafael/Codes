package br.ufc.si.servlets;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


@WebServlet("/LoginUsuario")
public class LoginUsuario extends HttpServlet {
	private static final long serialVersionUID = 1L;


	public LoginUsuario() {
		super();
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {


		String name = request.getParameter("nome");
		String senha = request.getParameter("senha");

		if(name.equals("Bruno") && senha.equals("1234")){
			HttpSession session = request.getSession(true);
			session.setAttribute(name,"nome");
			session.setAttribute(senha,"senha");
			session.setMaxInactiveInterval(18000);

			String nameObitdo = (String) session.getAttribute(name);
			PrintWriter out1 = response.getWriter();
			out1.print(nameObitdo);
			response.sendRedirect("PrimeiraPagina.jsp");
		}
		else{
			response.sendRedirect("Login.jsp");
		}
	}		
}