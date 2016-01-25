<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Calcular Idade</title>
</head>
<body>

	<form action="CalcularIdade" method="get">
	
	Nome:<input type="text" name="nome"/>
	<br />
	Data de nascimento
	<br />
	Dia <input type="text" name="dia"/>
	<br />
	Mês <input type="text" name="mes"/>
	<br />
	Ano <input type="text" name="ano"/>
	<br />
	
	
	<input type="submit" value="Calcular"/>
	</form>



</body>
</html>