<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<%!
	int arr[] = new int[10];
%>

<%
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		out.print(arr[i] + " ");
	}
	out.print("<br>");
	
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 2 * i + 1;
		out.print(" " + arr[i] + " ");
	}
	out.print("<br>");
%>
</body>
</html>