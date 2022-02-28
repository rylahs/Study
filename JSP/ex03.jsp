<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
<%!
String str ="김민수";
int age = 25;
double height = 175;
double weight = 75;
%>
</head>
<body>
<p>내 이름은 <%=str %> 입니다.</p>
<p>나이는 <%=age %> 입니다.</p>
<p>키는 <%=height %> 입니다.</p>
<p>몸무게는 <%=weight %> 입니다.</p>
</body>
</html>