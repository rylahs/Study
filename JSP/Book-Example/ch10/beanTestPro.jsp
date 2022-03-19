<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="testBean" class="ch10.bean.TestBean">
	<jsp:setProperty name="testBean" property="name"/>
</jsp:useBean>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>JavaBean JSP Page</title>
</head>
<body>
	<h2>자바빈을 사용하는 JSP Page</h2>
	
	입력된 이름은 <jsp:getProperty name="testBean" property="name"/> 입니다.
</body>
</html>