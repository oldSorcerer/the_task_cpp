#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Rus");

    string s;

    cout << "Введите число:" << endl;

    cin >> s;

    n =  s.length();

    cout << "Число разрядов:" << n << endl;

    int* arr = new int [n];

    for ( int i = 0; i < n ; i++)
        arr[i] = s[i]-48;

    cout << "Масcив цифр:" << endl;

    for ( int i=0; i < n; i++ )
        cout << arr[i] << " ";

    return 0;
}
