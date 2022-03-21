package ch12.member;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

public class LogonDBBean {
	private static LogonDBBean instance = new LogonDBBean();

	public static LogonDBBean getInstance() {
		return instance;
	}

	private LogonDBBean() {

	}

	private Connection getConnection() throws Exception {
		Context initCtx = new InitialContext();
		Context envCtx = (Context) initCtx.lookup("java:comp/env");
		DataSource ds = (DataSource) envCtx.lookup("jdbc/basicjsp");
		return ds.getConnection();
	}

	public void insertMember(LogonDataBean member) throws Exception {
		Connection conn = null;
		PreparedStatement pstmt = null;

		try {
			String sql = "insert into member values (?, ?, ?, ?)";
			conn = getConnection();
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, member.getId());
			pstmt.setString(2, member.getPasswd());
			pstmt.setString(3, member.getName());
			pstmt.setTimestamp(4, member.getReg_date());
			pstmt.executeUpdate();
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			if (pstmt != null)
				try { pstmt.close(); } catch (SQLException ex) {}
			if (conn != null)
				try { conn.close();	} catch (SQLException ex) {}
		}
	}

	public int userCheck(String id, String passwd) throws Exception {
		Connection conn = null;
		PreparedStatement pstmt = null;
		ResultSet rs = null;
		String dbPasswd = "";
		int x = -1;
		
		try {
			String sql = "select passwd from member where id = ?";
			conn = getConnection();
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, id);
			rs = pstmt.executeQuery();
			
			if (rs.next()) {
				dbPasswd = rs.getString("passwd");
				if (dbPasswd.equals(passwd)) {
					x = 1; // 인증 성공
				}
				else {
					x = 0; // 인증 실패
				}
			}
			else
				x = -1; // ID not Found
			
			
		} catch(Exception ex) {
			ex.printStackTrace();
		} finally {
			if (rs != null)
				try { rs.close(); } catch (SQLException ex) {}
			if (pstmt != null)
				try { pstmt.close(); } catch (SQLException ex) {}
			if (conn != null)
				try { conn.close();	} catch (SQLException ex) {}
		}
		
		return x;
	}
}
