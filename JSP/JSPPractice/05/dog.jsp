<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch05.Dog" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	Dog dog[] = new Dog[3];
	dog[0] = new Dog(3, 3, "Maltiz");
	dog[1] = new Dog(2, 10, "Sheperd");
	dog[2] = new Dog(4, 30, "Saint Bernard");
	
	
	for (int i = 0; i < dog.length; i++)
	{
		dog[i].ShowInfo();
		out.print("Type : " + dog[i].getType() + "<br>");
		out.print("Age : " + dog[i].getAge() + "<br>");
		out.print("Weight : " + dog[i].getWeight() + "<br>");
		out.print("<br>");
	}
	
%>
</body>
</html>