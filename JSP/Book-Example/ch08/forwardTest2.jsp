<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>forwardTest2</title>
</head>
<body>
	<% request.setCharacterEncoding("UTF-8");%>
	
	<%
		String id = "Rylah";
		String hobby = "마비노기 영웅전";
	%>
	
	포워딩 하는 페이지 forwardTest2.jsp 입니다.<br>
	
	<jsp:forward page="forwardToTest2.jsp">
		<jsp:param name="id" value="<%=id %>"/>
		<jsp:param name="hobby" value="<%=hobby %>"/>
	</jsp:forward>
	
</body>
</html>