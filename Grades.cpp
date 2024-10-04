//Aditya Sthawarmath
//23070123008
//Exp-3.c
//Program to take input of marks of 5 subjects and display the grade

#include <iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5;
    cout<<"Enter the marks of first subject: ";
    cin>>m1;
    cout<<"Enter the marks of second subject: ";
    cin>>m2;
    cout<<"Enter the marks of third subject: ";
    cin>>m3;
    cout<<"Enter the marks of fourth subject: ";
    cin>>m4;
    cout<<"Enter the marks of fifth subject: ";
    cin>>m5;
    float avg=(m1+m2+m3+m4+m5)/5;
    if(avg>=90)
    cout<<"Grade: O";
    else if(avg>=80)
    cout<<"Grade: A+";
    else if(avg>=70)
    cout<<"Grade: A";
    else if(avg>=60)
    cout<<"Grade: B+";
    else if(avg>=40)
    cout<<"Grade: B+";
    else
    cout<<"Fail";
}
