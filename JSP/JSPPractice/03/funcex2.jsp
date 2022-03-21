<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%!
	int cnt = 0;
	int result = 0;
	public int binary(int _cnt) {
		int num = 1;
		for (int i = 1; i <= _cnt; ++i)
			num = num << 1;
		return num;
	}

%>
<%
	cnt = 10;
	result = binary(cnt);
%>
	<%="비트" + cnt + "개로 표현할 수 있는 데이터 갯수 : " + result %> <br>
<%
	cnt = 20;
	result = binary(cnt);
%>
	<%= "비트" + cnt + "개로 표현할 수 있는 데이터 갯수 : " + result %> <br>
</body>
</html>