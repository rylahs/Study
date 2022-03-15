<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Include 디렉티브 연습</title>
</head>
<body>
  <h2>Include 디렉티브 연습</h2>
  <%
  String name = "M";
  %>
  <%@ include file="top.jsp" %>
  포함하는 페이지 includeDirective.jsp의 내용입니다.
  <%@ include file="bottom.jsp" %>
  
</body>
</html>