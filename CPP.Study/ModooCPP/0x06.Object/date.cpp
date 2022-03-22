#include <iostream>

class Date {
private:
	int year_;
	int month_;
	int day_;

public:
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);
	
	void ShowDate();

	bool isLeapYear(int year);
};

void Date::SetDate(int year, int month, int date)
{
	this->year_ = year;
	this->month_ = month;
	this->day_ = date;
}

bool Date::isLeapYear(int year)
{
	if ((year_ % 4 == 0 && year_ % 100 != 0) || year_ % 400 == 0)
		return true;
	return false;
}

void Date::AddYear(int inc)
{
	year_ += inc;

	AddDay(0);
}
void Date::AddMonth(int inc)
{
	month_ += inc;

	while (month_ > 12)
	{
		year_++;
		month_ -= 12;
	}

	AddDay(0);
}
void Date::AddDay(int inc)
{
	const int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	day_ += inc;

	if (isLeapYear(year_) && month_ == 2)
	{
		if (day_ > days[month_] + 1)
		{
			// Leap Year Case
			day_ = day_ - days[month_] - 1;
			AddMonth(1);
		}
	}
	else
	{
		while (day_ > days[month_])
		{
			// Normal Case

			day_ -= days[month_];
			AddMonth(1);
		}
	}
}
void Date::ShowDate()
{
	std::cout << this->year_ << "/" << this->month_ << "/" << this->day_ << std::endl;
}

int main(void)
{
	Date d;
	d.SetDate(2022, 3, 22);
	d.ShowDate();

	d.AddDay(3);
	d.ShowDate();

	d.AddDay(49997);
	d.ShowDate();

	d.AddMonth(5000);
	d.ShowDate();

	Date da;
	da.SetDate(2020, 1, 29);
	da.AddMonth(1);
	da.ShowDate();

	//da.AddDay(500);
	//da.ShowDate();
	//
	//da.AddMonth(25);
	//da.ShowDate();

	//da.AddYear(1);
	//da.ShowDate();


	return 0;
}
