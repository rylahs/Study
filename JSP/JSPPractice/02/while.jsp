<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>While Example</title>
</head>
<body>
	<h2>While Example</h2>
	1 ~ 10 Sum<p>
	<%
		int i = 1, sum = 0;
	
		while(i <= 10)
		{
			sum += i++;
		}
	%>
	Sum : <%=sum %>
	
</body>
</html>