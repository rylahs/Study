//#ifndef CAT_H
//#define CAT_H
#pragma once // �̰� ���� �ȴ�. �� �Ʒ� 3�ٰ� ������ �ǹ��̴�. 
             // pragma once
             // cat.h�� �ι� ���ǵǰų� �Ҷ� �ѹ��� �ν��ϰ� �ϴ� ����̴�.
#include <string>
#include <vector>
class Cat
{
public:
	void speak();
private:
	std::vector<std::string>  mFriends;
};
//#endif