// Program 8
#include <iostream>
using namespace std;

struct Student
{
    char name[20];
    int roll;
};

void showStruct(Student object);

int main()
{

    Student stu;
    cout << "Pass Structure to a function" << endl;
    cout << "Enter you Name and Roll no" << endl;
    cin >> stu.name >> stu.roll;

    cout << endl
         << "Data from main method" << endl;
    cout << "Your Name: " << stu.name << endl
         << "Your Rollno: " << stu.roll << endl;
    cout << "---------------------" << endl;

    showStruct(stu);

    return 0;
}

void showStruct(Student object)
{
    cout << "Data from function" << endl;
    cout << "Your Name: " << object.name << endl
         << "Your Rollno: " << object.roll << endl;
}