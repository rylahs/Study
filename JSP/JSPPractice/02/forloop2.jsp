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
	decreasing <p>
	<%
		for (int i = 24; i >= 0; i = i - 2)
			out.print(i + " ");
	%>
</body>
</html>