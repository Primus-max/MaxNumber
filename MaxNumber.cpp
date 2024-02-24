// Написать функцию для нахождения наибольшего из двух чисел.


#include <iostream>
#include <windows.h>
using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1 = 0, num2 = 0;
    cout << "Введите два числа и узнаете какое больше : ";
    cin >> num1 >> num2;    

    cout << "Большее число : " << MAX(num1, num2) << endl;
}

