<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%
	request.setCharacterEncoding("UTF-8");
	
	String sports[] = request.getParameterValues("sports");
	
	for (int i = 0; i < sports.length; i++)
	{
		out.println(sports[i] + "<br>");
	}
		
	%>
</body>
</html>