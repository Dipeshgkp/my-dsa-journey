#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    vector<int> arr(n);

// Taking user input for array 
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i + 1 << "element: ";
        cin >> arr[i];
    }
// Printing the elements 
    for (int j = 0; j < n; j++)
    {

        cout << arr[j];
        if ((j) < n - 1)
        {
            cout << ",";
        }
    }

// SUM OF ARRAY 
cout<<endl;
float temp = 0;
for( int j =0; j<n; j++){     
    temp = temp+arr[j];
}
cout<<"Sum of array: "<<temp<<endl;
cout<<"Average of array: "<<(temp/arr.size()) ;


    return 0;
}