//linear search
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;

        }
        
    }
    return 0;
}

int main(){
   int arr[10]= {5, -7, 98, 9, 92, 83, -77, 98};
    cout<<"Enter the element to search for:  "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10, key);
    if(found){
        cout<<"the key is present."<<endl;

    }
    else{
        cout<<"not found";
    }

}