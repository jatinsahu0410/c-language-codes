#include<iostream>
using namespace std;
int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int add(int a, int b, int c){
    cout<<"Using nfunction with 3 arguments"<<endl;
    return a+b+c;
}
//volume of a cylinder.
float volume(float r, int h){
    return(3.14*r*r*h);
}
//volume of cube
int volume(int a){
    return(a*a*a);
}
int main(){;
    cout<<"The sum of 3 and 8 is : "<<add(3,8)<<endl;
    cout<<"The sum of 3,7 and 8 is : "<<add(3,7,8)<<endl;
    float r,h;
    cout<<"Enter the radius and height of cylinder: "<<endl;
    cin>>r>>h;
    cout<<"The volume of cylinder is: "<<volume(r,h)<<endl;
    cout<<"The volume of cube is :"<<volume(3)<<endl;


    return 0;
}