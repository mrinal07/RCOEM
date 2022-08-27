#include <iostream>
using namespace std;

struct Employee
{
    char emp_name[25];
    int emp_id;
};

void Display(struct Employee e[]);

int main()
{
    struct Employee e1[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the Employee Name:\n";
        cin >> e1[i].emp_name;
        cout << "Enter the Employee ID:\n";
        cin >> e1[i].emp_id;
    }
    Display(e1);
    return 0;
}
void Display(struct Employee e[])
{
    cout << "\n****Employee Detail:**\n\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "Employee Name: " << e[i].emp_name << endl;
        cout << "Employee ID: " << e[i].emp_id << endl;
    }
}