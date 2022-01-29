// 예제 1-6 연산자 오버로딩 함수 완성 

// 연산자 오버로딩 준비 예시 

#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { } // 생성자 
	void Print() const { cout << x << ", " << y << endl; }
	const Point operator+(const Point arg) {
		cout << "operator+() 함수 호출" << endl;
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;

		return pt;
	}
};

int main(void) {
	Point p1(2, 3), p2(5, 5);
	Point p3;
	p3 = p1 + p2; // 컴파일러가 p1.operator(p2);로 해석해서 호출!
	p3.Print();
	p3 = p1.operator+(p2); // 직접 호출해서 해보기!
	p3.Print();

	//p1 * p2; // p1.operator*(p2);와 같다.
	//p1 = p2; // p1.operator=(p2);와 같다.
	//p1 == p2; // p1.operator==(p2);와 같다.
	//p1 += p2; // p1.operator+=(p2);와 같다.

	return 0;
}