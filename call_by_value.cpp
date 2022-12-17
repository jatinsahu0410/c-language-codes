#include<iostream>
using namespace std;
/*
int update(int a){
    a= a/2;
    cout<<a<<endl;
    return a;

}
int main(){
    int a=10;
    cout<<"update call:"<<update(a)<<endl;
    cout<<a;
}*/
int update(int a){
    int ans= a*a;
    return ans;

}
int main(){
    int a= 14;
    a =update(a);
    cout<<"the value of a is :"<<a<<endl;
}