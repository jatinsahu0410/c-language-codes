#include<iostream>
using namespace std;
//factorial 
int fib(int m){
    if(m<2){
        return m;
    }
    return fib((m-1)+fib(m-2));
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    //factorial:
    // 6= 6*5*4*3*2*1
    // 0! = 1 by defination
    //n! =n*(n-1)!
    int a;
    cout<<"enter the number of your choose: "<<endl;
    cin>>a;
    /*
    step by step calculation of factorial:
    factorial(4)= 4* factorial(3);
    factorial(4)=4*3*factorial(2);
    factorial(4)=4*3*2*factorial(1);
    factorial(4)=4*3*2*1;
    */
    cout<<"the factorial is: "<<factorial(a)<<endl;
    // cout<<"The tern in fibonacci sequence at the position is: "<<a<<fib(a)<<endl;
  return 0;

}