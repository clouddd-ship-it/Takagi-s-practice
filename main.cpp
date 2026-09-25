// main.cpp

#include<iostream>
int mul(int a , int b);

int main ()

{   using namespace std;
    int a = 5;
    int b = 10;
    cout << "please input two numbers: " << endl;
    cin >> a ;
    cin >> b ;
    cout << "The result of multiplication is: " << mul(a, b) << endl;
    return 0;
}