<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>To</title>
</head>
<body>
	<% request.setCharacterEncoding("UTF-8"); %>
	<%
		String id = request.getParameter("id");
		String passwd = request.getParameter("passwd");
	%>
	
	<h2>수행 결과</h2>
	아이디 : <%=id %><br>
	패스워드 : <%=passwd %> <br>
	
</body>
</html>