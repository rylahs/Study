<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<p>1���� 10���� ����?</p>
<%
int i = 1, sum = 0;
while( i <= 10)
{
	sum += i;
	i++;
}
%>
<%=sum %>
</body>
</html>