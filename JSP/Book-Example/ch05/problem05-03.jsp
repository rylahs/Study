<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Problem05-03</title>
</head>
<body>
<%!
	private String name = "Rylah";
	public String getName() {
		return name;
	}
%>

<% String hobby = "Programming"; %>

이름 : <%=getName() %> <br>
취미 : <%=hobby %> <br>
</body>
</html>