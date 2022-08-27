#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void sum(int, int);
int main()
{
    int row, col;
    cout << "\n Enter the number of rows ";
    cin >> row;
    cout << "\n Enter the number of column ";
    cin >> col;
    sum(row, col);
    return 0;
}

void sum(int r, int c)
{
    int i, j;
    int m1[r][c], m2[r][c], s[r][c];
    cout << "\n Enter the elements of first matrix ";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> m1[i][j];
    cout << "\n Enter the elements of second matrix ";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> m2[i][j];
    cout << "\n Addition of two matrix is :\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = m1[i][j] + m2[i][j];
            cout << s[i][j] << " ";
        }
        cout<<endl;
    }
}