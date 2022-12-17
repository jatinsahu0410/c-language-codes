#include <iostream>
using namespace std;
int main()
{
   /* int a;
    cout << "Enter the amount: ";
    cin >> a;
    int n1, n2, n3, n4, n5;
    n1 = n2 = n3 = n4 = n5 = 0;
    switch (a >= 2000)
    { // here switch case is taking boolean value that is 0/1 so we can't take case 2
    case 1:
        // case 2: not valid
        n1 = a / 2000;
        cout << "The number of 2000rs notes are: " << n1 << endl;
        a = a % 2000;
    }
    switch (a >= 500)
    {
    case 1:
        n2 = a / 500;
        cout << "The number of 500rs notes are: " << n2 << endl;
        a = a % 500;
    }
    switch (a >= 100)
    {
    case 1:
        n3 = a / 100;
        cout << "The number of 100rs notes are: " << n3 << endl;
        a = a % 100;
    }
    switch (a >= 5)
    {
    case 1:
        n4 = a / 5;
        cout << "The number of 5rs notes are: " << n4 << endl;
        a = a % 5;
    }
    switch (a >= 1)
    {
    case 1:
        n5 = a / 1;
        cout << "The number of 1rs notes are: " << n5 << endl;
        a = a % 1;
    }*/
    //by using Array. 
    int a[9]={2000,500, 200, 100, 50, 20, 10, 5, 1};
    int b, n;
    cout<<"enter the amount: ";
    cin>>b;
    for (int i=0;i<9;i++){
        if(b>=a[i]){
            n =b/a[i];
            cout<<"The number of notes of "<<a[i]<<" is: "<<n<<endl;
            b = b%a[i];
        }
    }
}