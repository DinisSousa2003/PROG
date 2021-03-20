#include<iostream>
#include<string>

using namespace std;

bool leapYear(int year){
    bool isLeap = false;
    
    if(((year % 4 == 0) & (year % 100 != 0)) || (year % 400 == 0))
        isLeap = true;
    
    return isLeap;
}

int numDays(int month, int year){
    if (month == 2){
        if (leapYear(year)) return 29;
        else return 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}


int codeMonth(int month, int year){
    if (month == 1){
        if (leapYear(year)) return 6;
        else return 0;
    }
    else if (month == 2){
        if (leapYear(year)) return 2;
        else return 3;
    }
    else if (month == 3 || month == 11) return 3;
    else if (month == 4 || month == 7) return 6;
    else if (month == 5) return 1;
    else if (month == 6) return 4;
    else if (month == 8) return 2;
    else if (month == 9 || month == 12) return 5;
    else if (month == 10) return 0;
}



int dayWeek(int day, int month, int year){
    //s - two first digits of the year
    //a - two last digits of the year
    //c - month code

    int s = year / 100;
    int a = year % 100;
    int c = codeMonth(month, year);
    
    //0 = Saturday, 1 = Sunday, 2 = Monday, etc.
    int ds = (((5 * a) / 4) + c + day - 2*(s%4) + 7) % 7;

    return ds;
}

string numWeektoStr(int dayWeek){
    //turn number to wordss
    string output;

    if (dayWeek == 0)output = "Saturday";
    else if (dayWeek == 1) output =  "Sunday";
    else if (dayWeek == 2) output = "Monday";
    else if (dayWeek == 3) output = "Tuesday";
    else if (dayWeek == 4) output = "Wednesday";
    else if (dayWeek == 5) output = "Thursday";
    else if (dayWeek == 6) output = "Friday";

    return output;
}

string numMonthtoStr(int month){
    //turn number to wordss
    string output;

    if (month == 1)output = "January";
    else if (month == 2) output =  "February";
    else if (month == 3) output = "March";
    else if (month == 4) output = "April";
    else if (month == 5) output = "May";
    else if (month == 6) output = "June";
    else if (month == 7) output = "July";
    else if (month == 8) output = "August";
    else if (month == 9) output = "September";
    else if (month == 10) output = "October";
    else if (month == 11) output = "November";
    else if (month == 12) output = "December";

    return output;
}
void monthPrinter(int month, int year){
    cout << numMonthtoStr(month) << "/" << year << endl;
    cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;

    int i = 1;
    int currentDay;
    int firstDay = dayWeek(1, month, year);
    bool isFirst = true;

    while(i <= numDays(month, year)){
        //Saturday correction
        if (firstDay == 0) firstDay = 7;

        //first line tabs
        if (isFirst == true){
            for(int i = 1; i < firstDay; i++){
                cout << "\t";
            }
            isFirst = false;
        }
        
        //day printer go brrrr
        do{
            currentDay = dayWeek(i, month, year);
            cout << i << "\t";
            i++;
        }while(currentDay && i <= numDays(month, year)); //switches line when saturday
        cout << endl;
    }
}

void yearPrinter(int year){
    for(int i = 1; i <= 12; i++){
        monthPrinter(i, year);
        cout << endl << endl;
    }
}

int main(){
    int day;
    int month;
    int year;
    cout << "day here boi" << endl;
    cin >> day;
    cout << "month here boiii" << endl;
    cin >> month;
    cout << "year here boiiiiiiiiii" << endl;
    cin >> year;
    cout << endl << endl;
    //cout << leapYear(year) << endl;
    //cout << numDays(month, year) << endl;
    //cout << numMonthtoStr(month) << endl;
    //cout << codeMonth(month, year) << endl;
    //cout << numWeektoStr(dayWeek(day, month, year)) <<endl <<endl << endl;
    //monthPrinter(month, year);
    yearPrinter(year);

    return 0;
}