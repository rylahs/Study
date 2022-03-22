#include <iostream>

class Date {
    int year_;
    int month_;  // 1 부터 12 까지.
    int day_;    // 1 부터 31 까지.

public:
    void ShowDate();

    Date() {
        std::cout << "Default Constructor Called" << std::endl;
        year_ = 2022;
        month_ = 3;
        day_ = 22;
    }
    Date(int day)
    {
        std::cout << "Overloading Constructor Called1" << std::endl;
        this->year_ = 2022;
        this->month_ = 3;
        this->day_ = day;
    }
    Date(int year, int month)
    {
        std::cout << "Overloading Constructor Called2" << std::endl;
        this->year_ = year;
        this->month_ = month;
        this->day_ = 1;
    }

    Date(int year, int month, int day)
    {
        std::cout << "Overloading Constructor Called3" << std::endl;
        this->year_ = year;
        this->month_ = month;
        this->day_ = day;
    }
    
    ~Date()
    {
        std::cout << "Destroy Called" << std::endl;
    }
};

void Date::ShowDate() {
    std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
        << " 일 입니다 " << std::endl;
}
int main() {
    Date day = Date();
    Date day1(30);
    Date day2(2002, 03);
    Date day3(2012, 10, 31);

    day.ShowDate();
    day1.ShowDate();
    day2.ShowDate();
    day3.ShowDate();

    return 0;
}