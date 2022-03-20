<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<% request.setCharacterEncoding("UTF-8"); %>
<%
	String id = request.getParameter("id");
	String passwd = request.getParameter("passwd");
	
	Connection conn = null;
	PreparedStatement pstmt = null;
	ResultSet rs = null;
	
	try {
		String jdbcUrl = "jdbc:mysql://localhost:3306/basicjsp?serverTimezone=UTC&useSSL=false";
		String dbId = "test";
		String dbPass = "1234";
		
		Class.forName("com.mysql.jdbc.Driver");
		conn = DriverManager.getConnection(jdbcUrl, dbId, dbPass);
		
		String sql = "select id, passwd from member where id = ?";
		pstmt = conn.prepareStatement(sql);
		
		pstmt.setString(1, id);
		rs = pstmt.executeQuery();
		
		
		if (rs.next()) {
			String rId = rs.getString("id");
			String rPasswd = rs.getString("passwd");
			
			if (id.equals(rId) && passwd.equals(rPasswd)) {
				String newsql = "delete from member where id = ?";
				pstmt = conn.prepareStatement(newsql);
				pstmt.setString(1, id);
				pstmt.executeUpdate();
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Delete Data</title>
</head>
<body>
	member 테이블의 레코드를 삭제했습니다.
</body>
</html>
<%
			} else
				out.println("패스워드가 틀렸습니다.");
		} else 
			out.println("아이디가 틀렸습니다.");
	} catch (Exception ex) {
		ex.printStackTrace();
	} finally {
		if (rs != null)
			try { rs.close(); } catch(SQLException ex){}
		if (pstmt != null)
			try { pstmt.close(); } catch(SQLException ex){}
		if (conn != null)
			try { conn.close(); } catch(SQLException ex){}
	}
%>