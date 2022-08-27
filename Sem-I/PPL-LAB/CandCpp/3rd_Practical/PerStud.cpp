#include <iostream>
using namespace std;

float Calpercent(float s1, float s2, float s3, float s4, float s5)
{
    float total = 0.00, percentage = 0.00;
    total = s1 + s2 + s3 + s4 + s5;
    percentage = ((total / 500.0) * 100);
    cout << "\n The Total marks = " << total << "/500\n";
    return percentage;
}
int main()
{
    float s1, s2, s3, s4, s5, per;
    cout << "\n Enter the marks of five subject : \n";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    per = Calpercent(s1, s2, s3, s4, s5);
    cout << "\n Percentage is :" << per;
    return 0;
}