<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.util.Date, java.text.SimpleDateFormat" %>
<%@ page errorPage="error.jsp" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>에러</title>
</head>
<body>
	<%
		Date date = new Date();
		SimpleDateFormat simpleDate = new SimpleDateFormat("yyyy-MM-dd");
		String strDate = simpleDate.format(date);
	%>
	
	보통의 JSP 페이지 형태입니다. <br>
	
	<%--고의로 에러를 발생시킨 라인으로 strDate 변수명을 strdate으로 틀리게 입력했다. --%>
	오늘 날짜는 <%=strDate %>입니다.
	
</body>
</html>