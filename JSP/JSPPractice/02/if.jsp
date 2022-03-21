<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>If</title>
</head>
<body>
	<h2>If Example</h2>
	
<%!
	int num = 11;
%>

<%
	if (num % 2 == 0)
		out.println("짝수입니다.");
	else
		out.println("홀수입니다.");
%>

<%!
	String name = "QWERTY";
	int age = 43;
%>
<br>
<%
	if (age >= 20)
		out.println(name + "님은 성인입니다.");
	else
		out.println(name + "님은 미성년자입니다.");
%>
<br><br>

<%!
	int sum = 0;
	int last_num = 0;
%>
<%
	for (int i = 0; i <= 500; i++)
	{
		if (sum >= 5000)
		{
			last_num = i - 1;
			break;
		}
		else
			sum += i;
	}
	
%>
<%="Last Add Number : " + last_num %>
<%="Sum : " + sum %>

<br> <br> <br>
<%
	for (int i = 0; i <= 30; i++)
	{
		if (i % 2 == 0)
			out.print(i + " ");
	}
%>
<br> <br> <br>
<%! int sumNumber = 0; %>
<%
	for (int i = 1; i <= 10; i++)
	{
		if (i < 10)
		{
			sumNumber += i;
			out.print(i + "+");
		}
		else
		{
			out.print(i + "=");
		}
	}
	out.print(sumNumber);
%>

</body>
</html>