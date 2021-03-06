#include <iostream>

class Date {
    int year_;
    int month_;
    int day_;

public:
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    int GetCurrentMonthTotalDays(int year, int month);

    void ShowDate();


    // Default Constructor
    Date()
    {
        year_ = 2022;
        month_ = 3;
        day_ = 22;
    }
    // Constructor
    //Date(int year, int month, int day)
    //{
    //    this->year_ = year;
    //    this->month_ = month;
    //    this->day_ = day;
    //}

    // Init
    //Date(int year, int month, int day) :year_(year), month_(month), day_(day) {}
};

void Date::SetDate(int year, int month, int day)
{
    this->year_ = year;
    this->month_ = month;
    this->day_ = day;
}

int Date::GetCurrentMonthTotalDays(int year, int month)
{
    static int month_day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month != 2)
    {
        return month_day[month_];
    }
    else if ((year && 4 == 0 && year % 100 != 0) || year && 400 == 0)
    {
        return 29;
    }
    else
    {
        return 28;
    }
}

void Date::AddDay(int inc)
{
    while (true)
    {
        int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

        if (day_ + inc < current_month_total_days)
        {
            day_ += inc;
            return;
        }

        else
        {
            inc -= (current_month_total_days - day_ + 1);
            day_ = 1;
            AddMonth(1);
        }
    }
}
void Date::AddMonth(int inc)
{
    AddYear((inc + month_ - 1) / 12); // 초과하는 년만큼 더해줌
    month_ = month_ + inc % 12; // 나머지가 더해야할 달
    month_ = (month_ == 12 ? 12 : month_ % 12); // 12 이상이면 나머지로
}

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
    std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
        << " 일 입니다 " << std::endl;
}

int main() {
    //Date day(2011, 3, 1);
    Date day2;
    Date day = Date();
    day.ShowDate();
    day.SetDate(2011, 3, 1);
    day.ShowDate();

    day.AddDay(30);
    day.ShowDate();

    day.AddDay(2000);
    day.ShowDate();

    day.SetDate(2012, 1, 31);  // 윤년
    day.AddDay(29);
    day.ShowDate();

    day.SetDate(2012, 8, 4);
    day.AddDay(2500);
    day.ShowDate();
    return 0;
}