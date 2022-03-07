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
	int x = Integer.parseInt(request.getParameter("x"));
	%>
	
	<%!
	int function(int x)
	{
		int y;
		y = x * x + 2 * x + 1;
		return y;
	}%>
	<%=function(x) %>
</body>
</html>