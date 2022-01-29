// ���� 1-6 ������ �����ε� �Լ� �ϼ� 

// ������ �����ε� �غ� ���� 

#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { } // ������ 
	void Print() const { cout << x << ", " << y << endl; }
	const Point operator+(const Point arg) {
		cout << "operator+() �Լ� ȣ��" << endl;
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;

		return pt;
	}
};

int main(void) {
	Point p1(2, 3), p2(5, 5);
	Point p3;
	p3 = p1 + p2; // �����Ϸ��� p1.operator(p2);�� �ؼ��ؼ� ȣ��!
	p3.Print();
	p3 = p1.operator+(p2); // ���� ȣ���ؼ� �غ���!
	p3.Print();

	//p1 * p2; // p1.operator*(p2);�� ����.
	//p1 = p2; // p1.operator=(p2);�� ����.
	//p1 == p2; // p1.operator==(p2);�� ����.
	//p1 += p2; // p1.operator+=(p2);�� ����.

	return 0;
}