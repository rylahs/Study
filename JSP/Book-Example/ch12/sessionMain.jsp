<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%
	String id = "";
	try {
		id = (String)session.getAttribute("id");
		if (id == null || id.equals(""))
			response.sendRedirect("sessionLoginForm.jsp");
		else {
	}
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>세션을 활용한 인증</title>
</head>
<body>
	<b> <%=id %></b>님이 로그인 하셨습니다.
		<form method="post" action="sessionLogout.jsp">
			<input type="submit" value="로그아웃">
		</form>
</body>
</html>
<%
	} catch(Exception ex) {
		ex.printStackTrace();
	}
%>