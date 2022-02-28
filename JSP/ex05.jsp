<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%!
int dan = 2, num = 1;
%>

<%
while(dan < 10)
{
	num = 1;
	while(num < 10)
	{
		out.print(dan + " x " + num + "=" + (dan * num));
		num++;
		out.print("<br>");
	}
	out.print("<br>");
	dan++;
}
%>
</body>
</html>