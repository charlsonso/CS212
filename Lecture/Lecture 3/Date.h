#ifndef DATE_H
#define DATE_H

class Date{
	public:
		Date(int, int, int);
		Date();
		int getMonth();
		int getDay();
		int getYear();
		void setDate(int, int, int);
		Date operator+(int);
		friend ostream& operator<<(ostream&, const Date&);
		
	private:
		int month;
		int day;
		int year;

};

#endif
