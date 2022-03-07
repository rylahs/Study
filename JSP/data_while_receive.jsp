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
	String msg = request.getParameter("msg");
	int number = Integer.parseInt(request.getParameter("number"));
	
	int i = 1;
	out.print(msg+"<br>");
	out.print(number+"<br>");
	%>
	<%
	while(i <= number)
	{
		out.print(msg + "<br>");
		i++;
	}
	%>
</body>
</html>