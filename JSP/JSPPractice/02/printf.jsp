<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.io.PrintWriter" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<%
	PrintWriter pw = response.getWriter();
%>

<% pw.printf("Java Printf use <br>"); %>
<% pw.printf("%.1f <br>", 3.141592); %>
<% pw.printf("%.2f <br>", 3.141592); %>
<% pw.printf("%.3f <br>", 3.141592); %>
<% pw.printf("%.4f <br>", 3.141592); %>
<% pw.printf("%.5f <br>", 3.141592); %>
</body>
</html>