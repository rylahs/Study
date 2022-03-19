<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>forward To Test2</title>
</head>
<body>
	<%
		String id = request.getParameter("id");
		String hobby = request.getParameter("hobby");
	%>
	
	포워딩 되는 페이지 forwardToTest2.jsp입니다. <br>
	<b><%=id %></b>님의 <br>
	취미는 <b><%=hobby %></b>입니다.
	
</body>
</html>