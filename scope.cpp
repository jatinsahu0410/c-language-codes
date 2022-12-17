#include <iostream>
using namespace std;
int sum(int num[], int size)
{
    int a=0;
    for(int i=0; i<size; i++){
        a+=num[i];

    }
    return a;

}
int main(){
     int size;
    cout << "the size is: " << endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout<<"The sum is : "<<sum(num,size)<<endl;
    
}
