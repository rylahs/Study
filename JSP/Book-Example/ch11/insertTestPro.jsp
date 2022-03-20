<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
	<% request.setCharacterEncoding("UTF-8"); %>
	<%
		String id = request.getParameter("id");
		String passwd = request.getParameter("passwd");
		String name = request.getParameter("name");
		Timestamp register = new Timestamp(System.currentTimeMillis());
		
		Connection conn = null;
		PreparedStatement pstmt = null;
		String str = "";
		
		try {
			String jdbcUrl = "jdbc:mysql://localhost:3306/basicjsp?serverTimezone=UTC&useSSL=false";
			String dbId = "test";
			String dbPass = "1234";
			
			Class.forName("com.mysql.jdbc.Driver");
			conn = DriverManager.getConnection(jdbcUrl, dbId, dbPass);
			
			String sql = "insert into member values (?, ?, ? ,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, id);
			pstmt.setString(2, passwd);
			pstmt.setString(3, name);
			pstmt.setTimestamp(4, register);
			pstmt.executeUpdate();
			
			str = "member 테이블에 새로운 데이터를 추가했습니다.";
		} catch(Exception ex) {
			ex.printStackTrace();
			
			str = "member 테이블에 새로운 데이터를 추가하는데 실패했습니다.";
		} finally {
			if (pstmt != null)
				try { pstmt.close(); } catch(SQLException sqle){}
			if (conn != null)
				try { conn.close(); } catch(SQLException sqle){}
		}
		
	%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert Data</title>
</head>
<body>
	<%=str %>
</body>
</html>