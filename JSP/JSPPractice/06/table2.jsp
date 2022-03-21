<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<%!
	String name[] = {"Java", "JSP", "Android"};
%>
</head>
<body>
	Must CS Major
<table border="1" width="200">
<%
	for (int i = 0; i < name.length; i++) {
%>
	<tr>
		<td> <%= i + 1 %> </td>
		<td> <%= name[i] %> </td>
	</tr>
<% } %>
</table>
</body>
</html>