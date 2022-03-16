<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>연습문제 04-01</title>
<style>

</style>
</head>
<body>
	<h2>JSP 페이지에서 제공하는 세개의 디렉티브를 나열하고, 이들이 하는 역할을 기술하시오</h2>
	<hr>
	<h4>page 디렉티브(page Directive) - < %@ page %></h4>
	<p>JSP 페이지에 대한 정보를 page 디렉티브(Directive)의 속성들을 사용해서 정의하는데, 생성되는 문서의 타입, 스크립트 언어, import할 클래스, 세션 및 버퍼의 사용 여부, 버퍼의 크기 등 JSP 페이지에서 필요한 설정 정보를 지정한다.</p>
	<table>
		<tr>
		<th>속성</th>
		<th>속성의 기본 값</th>
		<th>사용법</th>
		<th>속성 설명</th>
		</tr>
		
		<tr>
		<td>info</td>
		<td></td>
		<td>info = "설명.."</td>
		<td>페이지를 설명해주는 문자열을 지정하는 속성</td>
		</tr>
		
		<tr>
		<td>language</td>
		<td>"java"</td>
		<td>language="java"</td>
		<td>JSP 페이지의 스크립트 요소에서 사용할 언어를 지정하는 속성</td>
		</tr>
		
		<tr>
		<td>contentType</td>
		<td>"text/html; charset=ISP=8859-1"</td>
		<td>contentType="text/html; charset=UTF-8"</td>
		<td>JSP 페이지가 생성할 당시 문서의 타입을 지정하는 속성 </td>
		</tr>
		
		<tr>
		<td>extends</td>
		<td></td>
		<td>extends="system.MasterClass"</td>
		<td>자신이 삭송받을 클래스를 지정할 때 사용하는 속성</td>
		</tr>
		
		<tr>
		<td>import</td>
		<td></td>
		<td>import="java.util.Vector" import="java.util.*"</td>
		<td>다른 패키지에 있는 클래스를 가져다 쓸 때 사용하는 속성</td>
		</tr>
		
		<tr>
		<td>session</td>
		<td>"true"</td>
		<td>session="true"</td>
		<td>HttpSession을 사용할 지 여부를 지정하는 속성</td>
		</tr>

		<tr>
		<td>buffer</td>
		<td>8kb</td>
		<td>buffer="10kb" buffer="none"</td>
		<td>JSP 페이지의 출력 버퍼의 크기를 지정하는 속성</td>
		</tr>

		<tr>
		<td>autoFlush</td>
		<td>"true"</td>
		<td>autoFlush="false"</td>
		<td>출력 버퍼가 다 찰 경우에 저장되어 있는 내용의 처리를 설정하는 속성</td>
		</tr>

		<tr>
		<td>isThreadSafe</td>
		<td>"true"</td>
		<td>autoFlush="false" isThreadSafe="true"</td>
		<td>현재 페이지에 다중쓰레드를 허용할지의 여부를 설정하는 속성 </td>
		</tr>

		<tr>
		<td>errorPage</td>
		<td></td>
		<td>errorPage="error/fail.jsp"</td>
		<td>에러 발생시 에러를 처리할 페이지를 지정하는 속성</td>
		</tr>
		
		<tr>
		<td>isErrorPage</td>
		<td>"false"</td>
		<td>isErrorPage="false"</td>
		<td>해당 페이지를 에러페이지로 지정하는 속성</td>
		</tr>
		
		<tr>
		<td>pageEndcoding</td>
		<td>"ISO-8859-1"</td>
		<td>pageEncoding="UTF-8"</td>
		<td>해당 페이지의 문자 인코딩을 지정하는 속성</td>
		</tr>
		
		<tr>
		<td>isELIgnored</td>
		<td>jsp 버전 및 설정에 따라 다름</td>
		<td>isELIgnored="true"</td>
		<td>표현 언어(EL)에 대한 지원 여부를 설정하는 속성</td>
		</tr>
	</table>
	
	<br>
	<br>
	
	<h4>include 디렉티브(include Directive) = < %@ include%></h4>
	<ul>
	<li>공통적으로 포함할 내용을 가진 파일들을 해당 JSP 페이지 내에 삽입하는 기능을 제공하는 것이 include 디렉티브이다.</li>
	<li>include 디렉티브는 < %@ include%>로 시작되면 포함시킬 파일 명을 file 속성의 속성 값으로 기술한다. 사용법은 다음과 같다.</li>
	</ul>
	<table>
		<tr>
		<th>< %@ include file="포함될 파일의 url"%></th>
		</tr>
	</table>
	<ul>
	<li>include 디렉티브는 주로 조각코드를 삽입할 때 사용한다.
	</li>
	</ul>
	
	<br>
	<br>
	
	<h4>taglib 디렉티브(taglib Directive) = < %@ taglib%></h4>
	<ul>
	<li>taglib 디렉티브는 표현언어(EL : Expression Language), JSTL(JSP Standard Tag Library), 커스텀 태그(Custum Tag)를 JSP 내에서 사용할 때 사용되어진다.</li>
	<li>사용 방법은 아래와 같이 두개의 속성인 prefix 속성과 uri 속성의 속성 값을 지정해 주어야 한다.</li>
	</ul>
	< %@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%><br>
	--------------- 중략 ---------------------------<br>
	< c:set var="aint value="123"%>


	
	
	
	
</body>
</html>