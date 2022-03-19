<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>07_03정보</title>
</head>
<body>
	<h2>입력한 정보</h2>
	<%request.setCharacterEncoding("UTF-8"); %>
	<%
		String stdNum = request.getParameter("stdNum");
		String stdName = request.getParameter("stdName");
		String major = request.getParameter("major");
	%>
	학번 : <%=stdNum %> <br>
	이름 : <%=stdName %> <br>
	전공 : <%=major %> <br>
</body>
</html>