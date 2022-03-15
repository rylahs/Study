<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>선언문 예제 2 - 변수 선언</title>
</head>
<body>
<h2>선언문 예제 2 - 변수 선언</h2>
<%!
	String id = "Rylah";

	public String getId() {
		return id;
	}
	
%>

id 변수의 내용 : <%= id %> <br>
getId() 메소드 실행 결과 <%=getId() %>
</body>
</html>