//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t09_spiral() {

    int n=0;
    int m=0;
    cin >> n >> m;
    int a[n][m];
    int number = 1;
    int i=0;
    int j=0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {

            a[i][j] = 0;

        }
    }

    a[0][0] = number++;

    i = 0;
    j = 0;


    while ((a[i][j + 1] == 0 && j < m - 1) or (a[i + 1][j] == 0 && i < n - 1) or (a[i][j - 1] == 0 && j > 0) or (a[i - 1][j] == 0 && i > 0)) {
        while (a[i][j + 1] == 0 && j < (m - 1)) {
            a[i][j + 1] = number++;
            j++;
        }
        while (a[i + 1][j] == 0 && i < (n - 1)) {
            a[i + 1][j] = number++;
            i++;
        }
        while (a[i][j - 1] == 0 && j > 0) {
            a[i][j - 1] = number++;
            j--;
        }
        while (a[i - 1][j] == 0 && i > 0) {
            a[i - 1][j] = number++;
            i--;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {

            cout << setw (4) << a[i][j];

        }
        cout << endl;
    }

    return 0;
}
