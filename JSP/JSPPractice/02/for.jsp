<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>For Loop</title>
</head>
<body>
	<h2>For Loop</h2>
	1 ~ 100 Sum <p>
	<%
		int sum = 0;
		for (int i = 1; i < 101; i++)
			sum += i;
	%>
	
	Sum : <%=sum %>
</body>
</html>