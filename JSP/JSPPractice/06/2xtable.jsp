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
			<th> <%=" " %> </th>
			<th> <%=sub[0] %> </th>
			<th> <%=sub[1] %> </th>
			<th> <%=sub[2] %> </th>
		</tr>
		
		<tr>
			<td> <%=name[0] %> </td>
			<td> <%=grade[0][0] %> </td>
			<td> <%=grade[0][1] %> </td>
			<td> <%=grade[0][2] %> </td>
		</tr>
		
		<tr>
			<td> <%=name[1] %> </td>
			<td> <%=grade[1][0] %> </td>
			<td> <%=grade[1][1] %> </td>
			<td> <%=grade[1][2] %> </td>
		</tr>
		
		<tr>
			<td> <%=name[2] %> </td>
			<td> <%=grade[2][0] %> </td>
			<td> <%=grade[2][1] %> </td>
			<td> <%=grade[2][2] %> </td>
		</tr>
		
	</table>
	
</body>
</html>