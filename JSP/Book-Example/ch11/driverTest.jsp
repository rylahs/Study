<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>JDBC Driver Test</title>
</head>
<body>
	<h2>JDBC Driver Test</h2>
	
	<%
		Connection conn = null;
		
		try {
			String jdbcUrl = "jdbc:mysql://localhost:3306/basicjsp?serverTimezone=UTC&useSSL=false";
			String dbId = "test";
			String dbPass = "1234";
			
			Class.forName("com.mysql.jdbc.Driver");
			conn = DriverManager.getConnection(jdbcUrl, dbId, dbPass);
			out.println("제대로 연결되었습니다.");
		} catch(Exception e) {
			e.printStackTrace();
		}
	%>
</body>
</html>