<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<%@ page import="MyPackage.JSP_Class_Test01" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%
int num = 0;
JSP_Class_Test01 test01 = new JSP_Class_Test01();
out.print("1부터 100까지의 합 : ");
num = test01.printSum(100);
out.print(num);
%>
</body>
</html>