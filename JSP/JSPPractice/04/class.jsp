<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch04.SumCalc" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	SumCalc calc = new SumCalc();
	out.print("1부터 1000까지의 합 : ");
	out.print(calc.printSum(1000));
%>
</body>
</html>