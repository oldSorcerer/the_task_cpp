#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Rus");

    cout << "Введите число:" << endl;

    int i, a;

    cin >> a;

    for (i =2; i < a/2; i++){
        if (a%i == 0)
        break;
    }

    if (i==a/2)
        cout << "Ваше число " << a << " простое" << endl;
    else
        cout << "Ваше число " << a << " не является простым" << endl;

    return 0;
}
