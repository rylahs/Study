<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>Reverse String</h2>
	<%
		request.setCharacterEncoding("UTF-8");
	
		String str = request.getParameter("str");
	%>
	
	<%
		for (int i = str.length() - 1; i >= 0; i--)
			out.print(str.charAt(i));
	%>
</body>
</html>