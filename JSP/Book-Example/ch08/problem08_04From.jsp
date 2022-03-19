<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>From</title>
</head>
<body>
	<% request.setCharacterEncoding("UTF-8"); %>
	<%
		String id="";
		String passwd="";
		
		id = request.getParameter("id");
		passwd = request.getParameter("passwd");
		
		if (id == null || id.equals(""))
			id = "test";
		
		if (passwd == null || passwd.equals(""))
			passwd="testPass";
		
	%>
	
	problem08_04To.jsp로 포워딩합니다. <br>
	
	<jsp:forward page="problem08_04To.jsp">
		<jsp:param name="id" value="<%=id%>"/>
		<jsp:param name="passwd" value="<%=passwd%>"/>
	</jsp:forward>
</body>
</html>