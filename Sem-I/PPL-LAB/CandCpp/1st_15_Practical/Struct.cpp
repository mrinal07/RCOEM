// Program 7
#include <iostream>
using namespace std;

struct Student
{
    char name[20];
    int roll;
};

struct College
{
    Student stu;
    char colgName[20];
};

int main()
{
    College obj;

    cout << "Structure and Nested structure" << endl;
    cout << "Enter your Name  ";
    cin >> obj.stu.name;
    cout << "Enter your Roll no  ";
    cin >> obj.stu.roll;
    cout << "Enter your College name  ";
    cin >> obj.colgName;

    cout << endl
         << "Your Name: " << obj.stu.name << endl
         << "Your Rollno: " << obj.stu.roll << endl
         << "Your College name: " << obj.colgName << endl;

    return 0;
}
