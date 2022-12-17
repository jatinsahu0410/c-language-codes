#include <iostream>
using namespace std;
/*
bool is_even(int a){
    if(a&1){  //by using bitwise operator
        return 0;
    }
    return 1;
}
int main(){
    int num;
    cout<<"Enter the number of your choose: "<<endl;
    cin>>num;
    if(is_even(num)){
        cout<<"The number is found to be even.";
    }
    else{
        cout<<"the number is odd."<<endl;
    }
}*/

// function for ncr.

//function signature 
int factorial(int a)
{
    // function body
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    //function calling
    int num = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    int ans = num / deno;
    return ans;
}
int main()
{
    int n, r;
    cout << "enter the value of n:";
    cin >> n;
    cout << "Enter the value of r:";
    cin >> r;
    cout << "Answer is" << nCr(n, r) << endl;
}
