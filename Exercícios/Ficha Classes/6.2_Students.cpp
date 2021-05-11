#include <iostream>
#include<cmath>
#include<string>

using namespace std;

class Student
{
public:
    Student();
    Student(const string &code, const string &name);
    void setGrades(double shortExam, double project, double exam);
    string getCode() const;
    string getName() const;
    double getExam() const; 
    int getFinalGrade() const;
    void setShortExam(double shortExam);
    void setProject(double project);
    void setExam(double exam);
    bool isApproved() const; // is the student approved or not ?
    static int weightShortExam, weightProject, weightExam; // weights in percentage (ex:20,30,50)
private:
    int updateFinalGrade();
    string code; // student code
    string name; // student complete name
    double shortExam, project, exam; // grades obtained by the student in the different components
    int finalGrade;
}; 

//---------Public-------------
int Student::weightExam = 50;
int Student::weightShortExam = 20;
int Student::weightProject = 30;


Student::Student(){
    this -> code = "up2020000000";
    this -> name = "Dinis Sousa";
}

Student::Student(const string &code, const string &name){
    this -> code = code;
    this -> name = name;
}

string Student::getCode() const{
    return this->code;
}

string Student::getName() const{
    return this->name;
}

double Student::getExam() const{
    return this->exam;
}

int Student::getFinalGrade() const{
    return this->finalGrade;
}

void Student::setShortExam(double shortExam){
    this->shortExam = shortExam;
    this-> finalGrade =updateFinalGrade();
}

void Student::setExam(double exam){
    this->exam = exam;
    this-> finalGrade =updateFinalGrade();
}

void Student::setProject(double project){
    this->project = project;
    this-> finalGrade =updateFinalGrade();
}

void Student::setGrades(double shortExam, double project, double exam){
    this->shortExam = shortExam;
    this->project = project;
    this->exam = exam;
    this-> finalGrade = updateFinalGrade();
}

bool Student::isApproved() const{
    if (finalGrade > 9.5) return true;
    else return false;
}

//--------Private-----------
int Student::updateFinalGrade(){
    return round(this->shortExam * this->weightShortExam / 100 + this->project * this->weightProject / 100 + this->exam * this->weightExam / 100);
}

//-------------
Student readStudentData(){
    string name, code;
    double shortExam, project, exam;

    cout << "Student code?"; getline(cin, code); 
    cout << "Student name?"; getline(cin, name);

    Student s(code, name);

    cout << "Short exam grade?"; cin >> shortExam; 
    cout << "Project grade?"; cin >> project;
    cout << "Exam grade?"; cin >> exam;

    s.setGrades(shortExam, project, exam);

    return s;
}

int main(){
    Student Dinis;
    Student Albertino("up6932908", "Albertino");
    Student Jonas  = readStudentData();

    cout << Jonas.getCode() << endl;
    cout << Jonas.getExam() << endl;
    cout << Jonas.getFinalGrade() << endl;

    Dinis.setGrades(14.2, 15.9, 18.4);
    cout << Dinis.getFinalGrade() << endl;
}