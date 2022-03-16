<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Problem05-04 회원 정보</title>
</head>
<body>
<%
String id;
String password;
int age;

id = "test";
password = "testpass";
age = 20;
%>

회원정보 <hr>
<%=id%>님의 <br> 비밀번호는 <%=password%>이고, 나이는 <%=age %>입니다. 
</body>
</html>ㅌ