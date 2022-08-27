// Program 9
#include <iostream>
using namespace std;

struct Student
{
    char name[20];
    int roll;
};

Student showStruct();

int main()
{
    cout << "Return Structure from a function" << endl;

    Student stu = showStruct();

    cout << "Your Name: " << stu.name << endl
         << "Your Rollno: " << stu.roll << endl;

    return 0;
}

Student showStruct()
{
    Student object;

    cout << "Enter you Name and Roll no" << endl;
    cin >> object.name >> object.roll;

    return object;
}