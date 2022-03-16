<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>결과 출력</title>
</head>
<body>

<%request.setCharacterEncoding("UTF-8");%>
<%
String name = request.getParameter("name");
int age = Integer.parseInt(request.getParameter("age"));

if (age >= 20) {
	out.println(" <b>" + name + "</b>님의 나이는 20세 이상 입니다.");
} else {
	out.println(" <b>" + name + "</b>님의 나이는 미성년입니다.");
}
%>

</body>
</html>