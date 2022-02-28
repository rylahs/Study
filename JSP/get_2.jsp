<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%
String id = request.getParameter("id");
String password = request.getParameter("password");
out.print("아이디 : " + id );
out.print("비밀번호 : " + password );
%>
</body>
</html>