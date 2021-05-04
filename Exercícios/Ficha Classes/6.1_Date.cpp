#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Date
{
public:
    //CONSTRUCTORS
    Date(unsigned int y, unsigned int m,unsigned int d);
    Date(string yearMonthDay);
    Date();
    //SET
    void setYear(unsigned int year) ;
    void setMonth(unsigned int month) ;
    void setDay(unsigned int day) ;
    void setDate(unsigned int year, unsigned int month, unsigned int day) ;
    //GET
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    string getDate() const; // returns the date in format "yyyy/mm/dd"
    //SHOW
    void show() const; // shows the date on the screen in format "yyyy/mm/dd" 
    //ADDITIONAL
    bool isValid();
    bool isEqualTo(const Date &date);
    bool isNotEqualTo(const Date &date);
    bool isAfter(const Date &date);
    bool isBefore(const Date &date);
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
    int numDays(int month, int year);
    bool leapYear(int year);
};

//---------------------CONSTRUCTORS--------------------------
Date::Date(unsigned int y, unsigned int m,unsigned int d){
    year = y;
    month = m;
    day = d;

    if (!isValid()){year = 0; month = 0; day = 0; cout << "NOT VALID" << endl;}
}

Date::Date(string yearMonthDay){
    year = stoi(yearMonthDay.substr(0, 4));
    month = stoi(yearMonthDay.substr(5, 2));
    day = stoi(yearMonthDay.substr(8, 2));

    if (!isValid()){year = 0; month = 0; day = 0; cout << "NOT VALID" << endl;}
}

Date::Date(){
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);

    year = (tPtr->tm_year)+1900;
    month = (tPtr->tm_mon)+1;
    day = (tPtr->tm_mday);
}
//-------------------------SET---------------------------------
void Date::setYear(unsigned int y){
    unsigned int tmp = year;
    year = y;

    if (!isValid()){year = tmp; cout << "NOT VALID" << endl;}
}

void Date::setMonth(unsigned int m){
    unsigned int tmp = month;
    month = m;

    if (!isValid()){month = tmp; cout << "NOT VALID" << endl;}
}
void Date::setDay(unsigned int d){
    unsigned int tmp = day;
    day = d;

    if (!isValid()){day = tmp; cout << "NOT VALID" << endl;}
}

//------------------------GET----------------------------------
unsigned int Date::getYear() const{
    return year;
}

unsigned int Date::getMonth() const{
    return month;
}

unsigned int Date::getDay() const{
    return day;
}

string Date::getDate() const{
    return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
}

//----------------------SHOW------------------------------------
void Date::show() const{
    cout << year << '/' << month << '/' << day << endl;
}
//---------------------ADDITIONAL------------------------------
bool Date::isValid(){
    if (day > 0 && day <= numDays(month, year)){return true;}
    else{return false;}
}

bool Date::isEqualTo(const Date &date){
    if (day == date.getDay() && month == date.getMonth() && year == date.getYear()){return true;}
    else {return false;}
}

bool Date::isNotEqualTo(const Date &date){
    if (day == date.getDay() && month == date.getMonth() && year == date.getYear()){return false;}
    else {return true;}
}

bool Date::isAfter(const Date &date){
    if (date.getYear() > year){return true;}
    else if (date.getYear() == year && date.getMonth() > month){return true;}
    else if(date.getYear() == year && date.getMonth() == month && date.getMonth() > day){return true;}
    else {return false;}
}

bool Date::isBefore(const Date &date){
    if (date.getYear() < year){return true;}
    else if (date.getYear() == year && date.getMonth() < month){return true;}
    else if(date.getYear() == year && date.getMonth() == month && date.getMonth() < day){return true;}
    else {return false;}
}

//---------------------PRIVATE--------------------------------
bool Date::leapYear(int year){
    bool isLeap = false;
    
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        isLeap = true;
    
    return isLeap;
}

int Date::numDays(int month, int year){
    if (month == 2){
        if (leapYear(year)) return 29;
        else return 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}
//---------------------------------------------------------------
int main(){
    Date d1(2020, 1, 21);
    Date d2(1120, 5, 23);

    d1.show();
    d1.setYear(2015);
    cout << d1.getYear() << endl;
    cout << endl; 

    d2.setMonth(4);
    cout << d2.getMonth() << endl;
    d2.show();
    cout << endl; 

    cout << d1.isValid() << endl;
    d1.setDay(44);
    cout << d1.isValid() << endl;
    d1.show();
    d1.setDay(22);
    cout << endl; 

    cout << d1.isAfter(d2)<< endl;
    cout << d1.isEqualTo(d1) << endl;
    cout << d2.isAfter(d1) << endl;
    cout << endl; 

    Date d3;
    d3.show();
    Date d4("2000/04/30");
    d4.show();
    
    return 0;
}