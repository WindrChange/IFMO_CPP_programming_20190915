//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>
#include <algorithm>


using namespace std;

int t05_palindrom() {

    string a;
    cin >> a;
    bool check = true;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] != a [a.length() - i - 1]) check = false;
    }
    if (check) cout << "yes";
    else cout << "no";
    return 0;


}
