<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Formul�rio de Soma de N�meros</title>
</head>
<body>

	<form action="Soma" method="post">
	
	<p><label for="n1">N�mero 1:</label><input id="n1" type="text" name="n1" value="${param.n1}"/></p>
	<p><label for="n2">N�mero 2:</label><input id="n2" type="text" name="n2" value="${param.n2}"/></p>
	<input type="submit" name="Somar"/>
	</form>

<p>Soma: ${soma}</p>
<p>Subtra��o: ${subtracao}</p>

</body>
</html>