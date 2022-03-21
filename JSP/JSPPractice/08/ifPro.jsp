<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>

	<%!
		String msg;
	%>
	<%
		String name = request.getParameter("name");
		String color = request.getParameter("color");
		
		
		if (color.equals("blue")) {
			msg = "Blue!";
		} else if (color.equals("red")) {
			msg = "Red!";
		} else if (color.equals("orange")) {
			msg = "Orange!";
		} else {
			color = "white";
			msg = "Etc!";
		}
		
	%>
</head>
<body bgcolor=<%=color %>>
	<h2>If-else</h2>	
	<b><%=name %></b>'s favorite color is <%=color %> <br>
</body>
</html>