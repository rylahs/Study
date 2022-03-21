<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<%!
	String lang1 = "C";
	String lang2 = "Java";
	String lang3 = "Python";
	
	String System1 = "Operating System";
	String System2 = "Kali Linux";
	String System3 = "Reverse Engineering";
%>
</head>
<body>
	What can i do study?
	<ul>
		<li> Language
		<ol>
			<li><%=lang1 %> </li>
			<li><%=lang2 %> </li>
			<li><%=lang3 %> </li>
		</ol>
		<li> System
		<ol>
			<li><%=System1 %></li>
			<li><%=System2 %></li>
			<li><%=System3 %></li>
		</ol>
	</ul>
</body>
</html>