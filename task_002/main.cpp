#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Rus");

    cout << "Введите число:" << endl;

     int i=0, a, b;

     cin >> a;

     b = a;

     while (a>0) {
        a = a/2;
        i++;
      }

     cout << "Число разрядов:" << i << endl;

      int* arr = new int [i];

      int j = i-1; // Первое полученное в цикли число положим в последнею ячейку массива 

      while (b>0) {
        arr [j] = b%2;
        b = b/2;
        j--;
      }

    cout << "Масcив цифр:" << endl;

    for (j=0; j < i; j++ )
        cout << arr[j] << " ";

    return 0;
}
