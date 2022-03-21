<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%
	Cookie[] cookies = request.getCookies();
	if (cookies != null) {
		for (int i = 0; i < cookies.length; ++i) {
			if (cookies[i].getName().equals("id")) {
				cookies[i].setMaxAge(0);
				response.addCookie(cookies[i]);
			}
		}
	}
%>

<!DOCTYPE html>
<html>
<head>
<script>
	alert("로그아웃 되었습니다.");
	location.href="cookieMain.jsp";
</script>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

</body>
</html>