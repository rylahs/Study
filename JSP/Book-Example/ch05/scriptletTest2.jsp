<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.Timestamp"  %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>스크립트릿 예제 활용</title>
</head>
<body>
	<h2>스크립트릿 예제 활용 </h2>
	<%
	Timestamp now = new Timestamp(System.currentTimeMillis());
	%>
	
	현재는 <%=now.getHours() %>시 <%=now.getMinutes()%>분 입니다.

</body>
</html>