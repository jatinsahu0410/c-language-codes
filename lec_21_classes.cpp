#include<iostream> // classes in C++
using namespace std;
class employee
{
    private:
    int a, b, c;
    public:
    int d, e;
    void setdata(int a1, int b1, int c1);  //declaration
    void getdata(int d, int e){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
    }
};
void employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    employee jatin;
    jatin.d=45;// ---> public class 
    // jatin.a=122; ---> this will through an error because it is private.
    jatin.setdata(1,2,4);
    // jatin.getdata();
    return 0;
}