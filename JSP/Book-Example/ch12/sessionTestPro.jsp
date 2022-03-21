<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>세션 속성 설정 및 사용</title>
</head>
<body>
	<%
		String id = request.getParameter("id");
		String passwd = request.getParameter("passwd");
		
		session.setAttribute("id", id);
		session.setAttribute("passwd", passwd);
	%>
	
	id와 passwd 세션 속성을 설정했습니다.
	
	id 속성의 값은
		<%= (String)session.getAttribute("id") %> 이고 <br>
	passwd 속성의 값은
		<%= (String)session.getAttribute("passwd") %> 입니다.
</body>
</html>