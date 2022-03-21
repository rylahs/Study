<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<% request.setCharacterEncoding("UTF-8"); %>
	<%
		String id = request.getParameter("id");
		String pw = request.getParameter("passwd");
	%>
	
	아이디는 <b><%= id %></b> <br>
	비밀번호는 <b> <%=pw %></b> <br>
</body>
</html>