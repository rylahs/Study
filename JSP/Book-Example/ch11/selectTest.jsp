<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Select Record</title>
</head>
<body>
	<h2>member 테이블의 레코드 표시</h2>
	<table border="1">
		<tr>
			<td width="100">아이디</td>
			<td width="100">패스워드</td>
			<td width="100">이름</td>
			<td width="250">가입일자</td>
		</tr>
	<%
		Connection conn = null;
		PreparedStatement pstmt = null;
		ResultSet rs = null;
		
		try {
			String jdbcUrl = "jdbc:mysql://localhost:3306/basicjsp?serverTimezone=UTC&useSSL=false";
			String dbId = "test";
			String dbPass = "1234";
			
			Class.forName("com.mysql.jdbc.Driver");
			conn = DriverManager.getConnection(jdbcUrl, dbId, dbPass);
			
			String sql = "select * from member";
			pstmt = conn.prepareStatement(sql);
			rs = pstmt.executeQuery();
			
			while(rs.next()) {
				String id = rs.getString("id");
				String passwd = rs.getString("passwd");
				String name = rs.getString("name");
				Timestamp register = rs.getTimestamp("reg_date");
	%>
		<tr>
			<td width="100"><%=id %></td>
			<td width="100"><%=passwd %></td>
			<td width="100"><%=name %></td>
			<td width="250"><%=register %></td>
		</tr>
	<% 		}
		} catch(Exception ex) {
			ex.printStackTrace();
		} finally {
			if (rs != null)
				try { rs.close(); } catch(SQLException sqle) {}
			if (pstmt != null)
				try { pstmt.close(); } catch(SQLException sqle) {}
			if (conn != null)
				try { conn.close(); } catch(SQLException sqle) {}
		}
	%>		
	</table>
	
</body>
</html>