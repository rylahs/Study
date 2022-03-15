<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.util.Date" %>
<%@ page import="java.text.SimpleDateFormat" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>page디렉티브 연습 - import 속성</title>
</head>
<body>
  <h2>page디렉티브 연습 - import 속성</h2>
  <%
    
    SimpleDateFormat date = new SimpleDateFormat("yyyy-MM-dd");
    String now = date.format(new Date());
    String strDate = now;
  %>
  
   오늘은 <%=strDate %> 입니다.

</body>
</html>