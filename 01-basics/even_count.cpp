#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the number of element(n): ";
cin>>n;
vector<int> arr(n);
for(int i =0; i<arr.size();i++)
{
cout<<"Enter "<<i+1<<"th element: ";
cin>>arr[i];

}
// Displaying elements
cout<<"Elements: ";
for(int j =0; j<arr.size();j++)
{
cout<<arr[j]<<" ";
}
cout<<endl;
// COUNT EVEN NO. OF ELEMENT
cout<<"List of even elements: ";
int counter=0; 
for(int k =0; k<arr.size();k++){
    if(arr[k]%2==0){
        cout<<arr[k]<<" ";
        counter++;
    }
    
}
cout<<endl<<"No. of even element: "<<counter;
    return 0;
}
