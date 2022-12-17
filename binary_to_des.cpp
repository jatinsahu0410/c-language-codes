#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, rem, temp, i=0, des=0;
    cin>>num;
    temp=num;
    while(temp>0){
        rem = temp %10;
        des= des +(rem*pow(10,i));
        i++;
        temp=temp/10;

    }
    cout<<"Decimal number: "<<des;
}