<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>While Example 2</title>
</head>
<body>
	<h2>While Example 2</h2>
	<%!
		int dan = 2;
		int num = 1;
	%>
	
	<%
		while (dan <= 9)
		{
			num = 1;
			while (num <= 9)
			{
				out.print(dan + " x " + num + " = " + (dan * num) + "<br>");
				num++;
			}
			out.print("<br>");
			dan++;
		}
	%>
</body>
</html>