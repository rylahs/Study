<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="ch05.Employee" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	Employee emp = new Employee("Rylah", 25, 4000);
	emp.ShowInfo();
	out.print("Name : " + emp.getName() + "<br>");
	out.print("Age : " + emp.getAge() + "<br>");
	out.print("Salary : " + emp.getSalary() + "<br>");
%>
</body>
</html>