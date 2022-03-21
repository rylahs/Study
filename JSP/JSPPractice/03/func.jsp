<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%!
	int numberA = 0;
	int numberB = 0;
	int result = 0;
	
	public int add(int n1, int n2)
	{
		return n1 + n2;
	}
%>

<%
	numberA = 10;
	numberB = 25;
	
	result = add(numberA, numberB);
	
	out.print(numberA + " + " + numberB + " = " + result );
%>
</body>
</html>