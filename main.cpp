#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Rus");

    cout << "Введите число:" << endl;

    long long a, b;
    int i = 0;

    cin >> a;

    b = a;

    while (a>0){
        a = a/10;
        i++;
        }
    
    cout << "Число разрядов:" << i << endl;

    int* arr = new int [i];

    int j = i-1;

    while (b>0){
        arr[j] = b%10;
        b = b/10;
        j--;
    }

    cout << "Масcив цифр:" << endl;

    for (j=0; j < i; j++ )
        cout << arr[j] << " ";

    return 0;
}
