#include <iostream>

using namespace std;
void swap(int &x, int &y);// function declaration
int main()
{
    //local variables declaration

    int a = 100;
    int b = 200;
    cout <<"Before swap, value of a : "<<a<<endl;
    cout <<"Before swap, value of b : "<<b<<endl;
    /* calling a function to swap the values using variable reference */
    swap(a,b);
    cout <<"After swap, value of a : "<<a<<endl;
    cout <<"After swap, value of b : "<<b<<endl;
    return 0;
}

//function definition to swap the values
void swap(int &x, int &y){
    int temp;
    temp = x; //save the value at address x in temp
    x = y; //put y into x
    y = temp;//put temp into y
}
