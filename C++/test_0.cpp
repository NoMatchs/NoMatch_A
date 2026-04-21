#include <iostream>
#include <string>
using namespace std;

int sub(int a,int b)
{
    return a - b;
}

double sub(double a, double b)
{
    return a - b;
}

int sub(int a,int b,int c)
{
    return a - b - c;
}

void swap(int &a ,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    string name, number;
    cin >> name >> number;
    cout << name << " " << number << endl;

    int a = 10;
    int b = 88;
    cout << "交换前：" << endl;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << "交换后：" << endl;
    cout << a << " " << b << endl;

    int intRes = sub(100,23);
    cout << "两个整数的减法：" << intRes << endl;

    double douRes = sub(23.12,12.321);
    cout << "两个浮点数的减法：" << douRes << endl; 

    int threeintRes = sub(20,5,3);
    cout << "三个整数的减法：" << threeintRes << endl;

    return 0;
}