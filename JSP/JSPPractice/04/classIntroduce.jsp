<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch04.Introduce" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	Introduce intro = new Introduce();
	String name = "Rylah";
	int age = 25;
	out.print("Let me introduce myself!" + "<br>");
	out.print(intro.IntroduceMySelf(name, age));
	
%>
</body>
</html>