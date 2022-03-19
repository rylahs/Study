<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="ExBean" class="ex.ch10.ExBean">
	<jsp:setProperty name="ExBean" property="id"/>
	<jsp:setProperty name="ExBean" property="passwd"/>
	<jsp:setProperty name="ExBean" property="number"/>
</jsp:useBean>
	
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>problem10_03Pro.jsp</title>
</head>
<body>
	<h2>입력 받은 정보 표시</h2>
	아이디 : <jsp:getProperty name="ExBean" property="id"/><br>
	패스워드 : <jsp:getProperty name="ExBean" property="passwd"/><br>
	좋아하는 숫자 : <jsp:getProperty name="ExBean" property="number"/><br>
</body>
</html>