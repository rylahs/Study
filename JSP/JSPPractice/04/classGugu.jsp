<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch04.GuguDan" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%!
	int num[] = new int[9];
%>

<%
	GuguDan gugu = new GuguDan();
	out.print("Print GuguDan<br>");
	num = gugu.MakeGugu(9);
%>

<%
	for (int i = 0; i < 9; i++)
		out.print(num[i] + " ");
%>
</body>
</html>