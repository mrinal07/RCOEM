// Program 10
#include <stdio.h>
#include <iostream>

using namespace std;

union Student
{
   float salary;
   int workerNo;
};

int main()
{
   Student obj;

   cout << "Access the members of union data types" << endl;

   obj.salary = 12.3;
   cout << "Salary = " << obj.salary << endl;

   obj.workerNo = 100;
   cout << "Number of workers = " << obj.workerNo;

   return 0;
}
// Union can be defined as a user - defined data type 
// which is a collection of different variables of 
// different data types in the same memory location.
// The union can also be defined as many members, 
// but only one member can contain a value at a 
// particular point in time.