<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Problem06_03 Do!</title>
</head>
<body>
	<%request.setCharacterEncoding("UTF-8"); %>
	<%
	String id = request.getParameter("id");
	String pw = request.getParameter("passwd");
	
	boolean isPass = false;
	
	if (id.equals("abcd") && pw.equals("z1234"))
		isPass = true;
	else
		isPass = false;
	
	if (isPass)
		out.println("로그인에 성공하였습니다.");
	else
		out.println("로그인에 실패하였습니다.");
	%>
</body>
</html>