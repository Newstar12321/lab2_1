#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c, p;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    p = (b - a) * (c - b);
    cout << "Произведение длин отрезков ac и ab = " << p << endl;
}