<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Declaration Test Example</title>
</head>
<body>
<h2>선언문 예제 - 변수 선언</h2>
<%
  String str1 = str2 + " Server Page";
%>

<%!
	String str2 = "Java";
%>

출력 결과 : <%=str1.toString() %>
</body>
</html>