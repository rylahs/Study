<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>07_03 입력</title>
</head>
<body>
	<h2>정보를 입력하세요</h2>
	
	<form method="post" action="problem07_03Pro.jsp">
	학번 : <input type="text" name="stdNum"><br>
	이름 : <input type="text" name="stdName"><br>
	전공 : <select name="major">
			<option value="0" selected>=선택하세요=</option>
			<option value="컴퓨터공학">컴퓨터공학</option>
			<option value="전자공학">전자공학</option>
			<option value="기계공학">기계공학</option>
	</select><br>
	<input type="submit" value="입력완료">
	</form>
</body>
</html>