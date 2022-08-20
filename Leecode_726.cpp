#include <iostream>
using namespace std;

int max(int nm1, int num2);

int main()
{
    int a, b;
    int c;
    float f;

    a = 10;
    b = 20;
    c = a+b;

    cout << c <<endl;

    f=70.0/3.0;
    cout << f << endl;

    return 0;
}

int max(int num1, int num2){
    int result;
    if(num1>num2)
        result = num1;
    else 
        result = num2;
    
    return result;
}