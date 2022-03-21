<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch05.Warrior" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	Warrior obj = new Warrior(100, 3.5, "Sword");
	out.print(obj.showInfo());
%>
</body>
</html>