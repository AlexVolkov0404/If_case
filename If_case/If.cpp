// If_case.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task12
void find_min()
{
    int a, b, c;
    cout << "task12" << endl;
    cout << "enter number 1:";
    cin >> a;
    cout << "enter number 2: ";
    cin >> b;
    cout << "enter number 3: ";
    cin >> c;
    
    if (a < b && a < c) cout << a;
    else if (b < a && b < c) cout << b;
    else if (c < a && c < b) cout << c;
    cin.get();
    cin.get();
}
//task19
void find_number() {
    int a, b, c,d;
    cout << "task19" << endl;
    cout << "enter number 1:";
    cin >> a;
    cout << "enter number 2: ";
    cin >> b;
    cout << "enter number 3: ";
    cin >> c;
    cout << "enter number 4: ";
    cin >> d;

    if (a == b && a == c) cout << "4";
    else if (b == c && b == d) cout << "1";
    else if (d = a && d==b) cout << "3";
    else if (c = a && d == c) cout << "2";
    cin.get();
    cin.get();
}
//task22
void find_quarter()
{
    int x, y;
    cout << "task22" << endl;
    cout << "enter number x:";
    cin >> x;
    cout << "enter number y: ";
    cin >> y;
   

    if (x>0 && y>0) cout << "1 quarter";
    else if (x<0 && y>0) cout << "2 quater";
    else if (x<0 && y<0) cout << "3 quater";
    else if (x>0 && y<0) cout << "4 quater";
    cin.get();
    cin.get();
}
//task25
void find_x1()
{
    int x;
    cout << "task25" << endl;
    cout << "enter  x:";
    cin >> x;
    if ((x < -2) || (x > 2)) cout << "your x= " << 2 * x;
    else  cout << "your x= " << -3 * x; 
    cin.get();
    cin.get();
}
//task26
void find_x2()
{
    int x;
    cout << "task26" << endl;
    cout << "enter  x:";
    cin >> x;
    if (x > 0&&x<2) cout << "your x= " << x*x;
    else if (x<=0) cout << "your x= " <<  -x;
    else if (x >=2) cout << "your x= " <<"4";
    cin.get();
    cin.get();
}

int main()
{
    find_min();
    find_number();
    find_quarter();
    find_x1();
    find_x2();
    return 0;
}

