<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>Calc Mult</h2>
	<%
		request.setCharacterEncoding("UTF-8");
		int number = Integer.parseInt(request.getParameter("num"));
	%>
	
	<%
		int cnt = 1;
		while(cnt <= 100)
		{
			out.print((number * cnt) + " ");
			if (cnt % 10 == 0)
				out.print("<br>");
			cnt++;
		}
	%>
</body>
</html>