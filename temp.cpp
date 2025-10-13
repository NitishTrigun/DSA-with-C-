#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "True";
                break;
            }
        }
    }
    return 0;
}