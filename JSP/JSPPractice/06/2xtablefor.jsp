<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<%
	String name[] = new String[3];
	name[0] = "Vindictus";
	name[1] = "Mabinogi Heroes";
	name[2] = "洛奇英雄传";
	
	String sub[] = new String[3];
	sub[0] = "Action";
	sub[1] = "RPG";
	sub[2] = "Communication";
	
	
	String grade[][] = new String[3][3];
	grade[0][0] = "S";
	grade[0][1] = "C";
	grade[0][2] = "E";
	
	grade[1][0] = "S";
	grade[1][1] = "C+";
	grade[1][2] = "D+";
	
	grade[2][0] = "S";
	grade[2][1] = "B";
	grade[2][2] = "A";
%>
</head>
<body>
Vindictus <br>
<table border="1">
	<tr>
		<th><%=" " %> </th>
		<% for (int i = 0; i < sub.length; i++) { %>
		<th> <%=sub[i] %> </th>
		<% } %>
	</tr>
	
	<%for (int i = 0; i < name.length; i++) { %>
	<tr>
		<td> <%=name[i] %> </td>
		<% for (int j = 0; j < grade[i].length; j++) { %>
		<td> <%= grade[i][j] %> </td>
		<% } %>
	</tr>
	<% } %>
		
</table>
</body>
</html>