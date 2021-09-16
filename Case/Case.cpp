// Case.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task6
void find_lenth()
{
    int n, b;
    cout << "Number of your choose: ";
    cin >> n;
    cout << "your lenth: ";
    cin >> b;
    switch (n)
    {
    case 1:
        cout << b / 10;
    case 2:
        cout << b *1000;
    case 3:
        cout << b ;
    case 4:
        cout << b / 1000;
    case 5:
        cout << b / 100;
    break;
        cin.get();
        cin.get();
    }
}
//task4
void find_days()
{
    int a;
    cout << "Date: ";
    cin >> a;
    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days";
        break;
    case 2:
        cout << "28 days";
        break;
        cin.get();
        cin.get();
    }
}
//task 14
void work_with_triangle()
{
    int n;
    float x, a, r1, r2, s;
    cout << "number_of_your_element: ";
    cin >> n;
    cout << "your leanth: ";
    cin >> x;
    switch (n)
    {
    case 1:
        a = x;
        r1 = a * sqrt(3) / 6;
        r2 = 2 * r1;
        s = a * a * sqrt(3) / 4;
        cout << r1 << endl << r2 << endl << s;
        break;
    case 2:
        r1 = x;
        a = r1 * 6 / sqrt(3);
        r2 = 2 * r1;
        s = a * a * sqrt(3) / 4;
        cout << a << endl << r2 << endl << s;
        break;
    case 3:
        r2 = x;
        r1 = r2 / 2;
        a = r1 * 6 / sqrt(3);
        s = a * a * sqrt(3) / 4;
        cout << a << endl << r1 << endl << s;
        break;
    case 4:
        s = x;
        a = sqrt(s * 4 / sqrt(3));
        r1 = a * sqrt(3) / 6;
        r2 = 2 * r1;
        cout << a << endl << r1 << endl << r2;
        break;
        cin.get();
        cin.get();
    }
}
//task15
void work_with_triangle2()
{
    int n;
    float x, a, r1, r2, s;
    cout << "number_of_your_element2: ";
    cin >> n;
    cout << "your leanth2: ";
    cin >> x;
    switch (n)
    {
    case 1:
        a = x;
        r1 = a * sqrt(3) / 6;
        r2 = 2 * r1;
        s = a * a * sqrt(3) / 4;
        cout << r1 << endl << r2 << endl << s;
        break;
    case 2:
        r1 = x;
        a = r1 * 6 / sqrt(3);
        r2 = 2 * r1;
        s = a * a * sqrt(3) / 4;
        cout << a << endl << r2 << endl << s;
        break;
    case 3:
        r2 = x;
        r1 = r2 / 2;
        a = r1 * 6 / sqrt(3);
        s = a * a * sqrt(3) / 4;
        cout << a << endl << r1 << endl << s;
        break;
    case 4:
        s = x;
        a = sqrt(s * 4 / sqrt(3));
        r1 = a * sqrt(3) / 6;
        r2 = 2 * r1;
        cout << a << endl << r1 << endl << r2;
        break;
        cin.get();
        cin.get();
    }
}
//task20
void your_zodiak()
{
    int d, m;
    cout << "date:";
    cin >> d;

    cout << "mounth";
    cin >> m;

    switch (m) {
    case 1:
        if (d > 19)
            cout << "Vodoliy";
        else
            cout << "Kozerog";
        break;
    case 2:
        if (d > 18)
            cout << "Ryby";
        else
            cout << "Vodoley";
        break;
    case 3:
        if (d > 20)
            cout << "Oven";
        else
            cout << "Ryby";
        break;
    case 4:
        if (d > 19)
            cout << "Telec";
        else
            cout << "Oven";
        break;
    case 5:
        if (d > 20)
            cout << "Blyznec";
        else
            cout << "Telec";
        break;
    case 6:
        if (d > 21)
            cout << "Rak";
        else
            cout << "Blyznec";
        break;
    case 7:
        if (d > 22)
            cout << "Lev";
        else
            cout << "Rak";
        break;
    case 8:
        if (d > 22)
            cout << "Diva";
        else
            cout << "Lev";
        break;
    case 9:
        if (d > 22)
            cout << "Vesi";
        else
            cout << "Deva";
        break;
    case 10:
        if (d > 22)
            cout << "Скорпион";
        else
            cout << "Весы";
        break;
    case 11:
        if (d > 22)
            cout << "Strelec";
        else
            cout << "Scorpion";
        break;
    case 12:
        if (d > 21)
            cout << "Kozerog";
        else
            cout << "Strelec";
        break;
    }
    cin.get();
    cin.get();
    
}
int main()
{
    find_lenth();
    find_days();
    work_with_triangle();
    work_with_triangle2();
    your_zodiak();

    return 0;

}

