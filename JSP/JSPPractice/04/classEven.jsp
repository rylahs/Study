<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch04.EvenSum" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	EvenSum evSum = new EvenSum();
	out.print("1부터 1000까지 짝수의 합 : ");
	out.print(evSum.printEvenSum(1000));
%>
</body>
</html>