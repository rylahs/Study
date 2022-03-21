<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<%!
	String name="Rylah";
	int age = 23;
	double weight = 80.5;
	double height = 179.7;

%>
</head>
<body>
	<p> Name : <%= name %> </p>
	<p> Age : <%= age %> </p>
	<p> Height : <%= height %>cm </p>
	<p> Weight : <%= weight %>kg </p>
	
</body>
</html>