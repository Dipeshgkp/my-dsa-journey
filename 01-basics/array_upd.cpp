#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the number of element: ";
cin>>n;
vector<int> arr(n);
for(int i =0;i<arr.size();i++){
    cout<<"Enter element "<<i+1<<" th"<<endl;
    cin>>arr[i];
}

cout<<"Original Element list: ";
for(int j=0; j<arr.size();j++){
    cout<<arr[j]<<" ";

}

cout<<endl<<"Enter the index between 0 to "<<arr.size()-1;
int index;
cout<<endl<<"Enter the index that you want to update: ";
cin>>index;

int num;
cout<<endl<<"Enter new number for that index: ";
cin>>num;

if(index <= (arr.size()-1)){ 

    arr[index]=num;
}
else{
    cout<<"Oh no, the index you entered is invalid, so that array in not updated ";
}

cout<<endl<<"Updated Element list: ";
for(int l=0; l<arr.size();l++){
    cout<<arr[l]<<" ";
}
    return 0;
}