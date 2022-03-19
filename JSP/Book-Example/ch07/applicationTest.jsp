<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Application 내장 객체</title>
</head>
<body>
	<h2>Application 내장 객체</h2>
	<%
		String info = application.getServerInfo();
		String path = application.getRealPath("/");
		application.log("로그 기록 : ");
	%>
	
	웹 컨테이너의 이름과 버전 : <%=info %> <p>
	웹 애플리케이션 폴더와 로컬 시스템의 경로 : <%=path %>
</body>
</html>