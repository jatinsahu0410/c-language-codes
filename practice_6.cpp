#include<iostream>
using namespace std;
int main(){
    int n;
    char a ='A';
    cin>>n;
    for(int i=1;i<=n;i++,a++){
        for(int j=0;j<=n;j++){
            char b= a +j;
            // cout<<a+j;
            // cout<<b;
        }
        cout<<endl;
    }
}