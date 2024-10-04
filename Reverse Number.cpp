//Sakshi Sonawane 
//24070123505
//Exp-3(4)
//Program to enter last 5 digits of PRN and reverse it

#include <iostream>
using namespace std;
int main(){
    int num,reverse;
    cout<<"Enter last five digits of your PRN: ";
    cin>>num;
    while(num>0){
        reverse=num%10;
        cout<<reverse;
        num=num/10;
    }
}
