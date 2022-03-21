<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch04.FindGCD" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	FindGCD gcd = new FindGCD();

	out.print("124와 3696의최대 공약수(Normal GCD) : ");
	out.print(gcd.findGCD(124, 3696) + "<br>");
	
	out.print("<br> 124와 3696의 최대공약수(Euclid GCD) : ");
	out.print(gcd.findGCDEuclid(124, 3696));
%> 
</body>
</html>