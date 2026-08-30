#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;

    // Taking user input for array element
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter element " << i + 1 << " th" << endl;
        cin >> arr[i];
    }

    // Displaying the element of array
    cout << "Original Element list: ";
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }

    // Taking user input for index
    int index;
    cout << endl
         << "Enter the index that you want to update: (0 to " << arr.size() - 1 << " )";
    cin >> index;

    // checking index is valid ?
    if (index >= 0 && index <= arr.size() - 1)
    {
        int num;
        cout << endl
             << "Enter new number for that index: ";
        cin >> num;
        arr[index] = num;
        cout << endl
             << "Updated Element list: ";
        for (int l = 0; l < arr.size(); l++)
        {
            cout << arr[l] << " ";
        }
    }
    else
    {
        cout << "You had entered the invalid index. Enter between 0 to " << arr.size() - 1 << endl;
        cout << "Original Element list Remain as it is: ";
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[j] << " ";
        }
    }
    return 0;
}
