#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> arr{50,20,30,80,60};
int i;
for(i =0; i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int temp =50; // arr[0]
for(i =1; i<arr.size();i++)
{
    if( temp>arr[i]){

        temp = arr[i];
    }

}
cout<<temp;
cout<<endl<<arr.size();

    return 0;
}