#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i + 1 << "element: ";
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {

        cout << arr[j];
        if ((j) < n - 1)
        {
            cout << ",";
        }
    }

    return 0;
}