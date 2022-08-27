// Program 4
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Temperature OF 2 CITIES OF 2 WEEK" << endl;

    string cities[2];
    int city1[7], city2[7];

    cout << "Enter Name of 1st City:";
    cin >> cities[0];

    cout << "Enter Name of 2nd City:";
    cin >> cities[1];

    cout << "Enter temperature of a week of CITY: " << cities[0] << endl;
    for (int i = 0; i < 7; i++)
        cin >> city1[i];

    cout << "Enter temperature of a week of CITY: " << cities[1] << endl;
    for (int i = 0; i < 7; i++)
        cin >> city2[i];

    for (int i = 0; i < 2; i++)
    {
        cout << "CITY NAME: " << cities[i] << endl;
        for (int j = 0; j < 7; j++)
        {
            (i == 0) ? cout << "Day " << (j + 1) << " Temperature: " << city1[j] << endl : cout << "Day " << (j + 1) << " Temperature: " << city2[j] << endl;
        }
        cout << endl;
    }

    return 0;
}