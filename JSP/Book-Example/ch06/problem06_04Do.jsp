<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Problem06_04 Do!</title>
</head>
<body>
<h2>입력한 숫자만큼 반복 수행</h2>
<%
request.setCharacterEncoding("UTF-8");
%>

<%
int getNums = Integer.parseInt(request.getParameter("number"));
if (getNums <= 0)
	out.println("생성할 값이 없습니다.");
else {
%>
<table border="1">
	<tr>
		<th>글번호</th>
		<th>글제목</th>
		<th>글내용</th>
	</tr>

<%
	for (int i = getNums; i > 0; i--)
	{
%>
<tr>
	<td><%=i%></td>
	<td><%="제목 " + i %></td>
	<td><%="내용 " + i %></td>
</tr>
<%	
	}
}
%>
</table>
</body>
</html>