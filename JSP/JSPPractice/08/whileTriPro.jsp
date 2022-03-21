<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>While Triangle</h2>
	<%
		request.setCharacterEncoding("UTF-8");
		int h = Integer.parseInt(request.getParameter("height"));
	%>
	<%
		int i = 0;
		int j = 0;
		while(i < h)
		{
			j = 0;
			while( j <= i)
			{
				out.print("*");
				j++;
			}
			out.print("<br>");
			i++;
		}
	%>
</body>
</html>