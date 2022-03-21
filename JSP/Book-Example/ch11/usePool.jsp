<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.sql.*" %>
<%@ page import = "javax.sql.*" %>
<%@ page import = "javax.naming.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Connection Pool을 사용한 테이블의 레코드들을 화면에 표시하기</title>
</head>
<body>
	<h3>Connection Pool을 사용한 테이블의 레코드들을 화면에 표시하기</h3>
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
				Context initCtx = new InitialContext();
				Context envCtx = (Context)initCtx.lookup("java:comp/env");
				DataSource ds = (DataSource)envCtx.lookup("jdbc/basicjsp");
				conn = ds.getConnection();
				
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
				<td width="250"><%=register.toString() %></td>
			</tr>
			<%
				}
			} catch(Exception ex) {
				ex.printStackTrace();
			} finally {
				if (rs != null)
					try { rs.close(); } catch (SQLException e) {}
				if (pstmt != null)
					try { pstmt.close(); } catch (SQLException e) {}
				if (conn != null)
					try { conn.close(); } catch (SQLException e) {}
			}
			%>
			

	</table>
</body>
</html>