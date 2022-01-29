//#ifndef CAT_H
//#define CAT_H
#pragma once // 이걸 쓰면 된다. 위 아래 3줄과 동일한 의미이다. 
             // pragma once
             // cat.h가 두번 정의되거나 할때 한번만 인식하게 하는 방법이다.
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