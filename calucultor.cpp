#include <iostream>
using namespace std;
class basiccal
{
    int a;
    int b;

public:
    void read(void);
    void add(void);
    void sub(void);
    void mul(void);
    void div(void);
};
void basiccal::read(void)
{
    cout << "Enter the value 1:";
    cin >> a;
    cout << "Enter the value 2:";
    cin >> b;
}

void basiccal::add(void)
{
    cout << "\nThe addition of a+b is:" << (a + b) << endl;
}
void basiccal::sub(void)
{
    cout << "\nThe subtraction of a-b is:" << (a - b) << endl;
}
void basiccal::mul(void)
{
    cout << "\nThe multiplication of a*b is:" << (a * b) << endl;
}
void basiccal::div(void)
{
    cout << "\nThe division of a/b is:" << (a / b) << endl;
}

class scical
{
    int a, b;

public:
    void squareread(void);
    void square(void);
};

void scical::squareread(void)
{
    cout << "Enter the value 1:";
    cin >> a;
    cout << "Enter the power of the value 1:";
    cin >> b;
}
void scical::square(void)
{
    int t = a;
    for (int i = 1; i < b; i++)
    {
        a = a * t;
    }
    cout << "The square of numbers is:" << a;
}
class hybridcal: public basiccal,public scical{
    public:
        void option(void);
};
void hybridcal::option(void)
{
    int choice;
    cout<<"nter your choice: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Square: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        read();
        add();
        break;
    case 2:
        read();
        sub();
        break;
    case 3:
        read();
        mul();
        break;
    case 4:
        read();
        div();
        break;
    case 5:
        squareread();
        square();
        break;
    default:
        cout << "Invalid choice";
    }
}

int main()
{
    hybridcal obj;
    obj.option();
    return 0;
}