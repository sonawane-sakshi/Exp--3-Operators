//Program to find coordinates lies in which quadrant
//Sakshi Sonawane 
//24070123505
//Exp-3(2)

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter X coordinates: ";
    cin>>x;
    cout<<"Enter Y coordinates: ";
    cin>>y;
    if(x>0 && y>0)
    cout<<"The coordinate lies in first quadrant";
    else if(x<0 && y>0)
    cout<<"The coordinate lies in second quadrant";
    else if(x<0 && y<0)
    cout<<"The coordinate lies in third quadrant";
    else
    cout<<"The coordinate lies in fourth quadrant";
}
/*
**Output**
Enter X coordinates: 3
Enter Y coordinates: 5
The coordinate lies in first quadrant
*/
