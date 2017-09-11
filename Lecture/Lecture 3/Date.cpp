#include "Date.h"
using namespace std;
#include <iostream>
using std::ostream;

Date::Date(){
	setDate(1,1,1970);
}
Date::Date(int m, int d, int y){
	setDate(m,d,y);
}
int Date::getMonth(){
	return month;
}
int Date::getDay(){
	return day;
}
int Date::getYear(){
	return year;
}
void Date::setDate(int m, int d, int y){
	month = m;
	day = d;
	year = y;
}
Date Date::operator+(int d){
	Date temp(month,day+d,year);
	return temp;
}

friend ostream& operator<<(ostream& out, const Date& d){
	out<<d.month<<"/"<<d.day<<"/"<<d.year;
	return out;	
}
