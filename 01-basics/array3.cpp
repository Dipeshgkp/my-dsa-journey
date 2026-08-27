#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of element" << i + 1 << endl;
        cin >> arr[i];
    }
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        
        cout << arr[j];
        if (j < n-1)
            cout <<",";
    }

    return 0;
}
