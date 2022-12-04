#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, min, summ;
    cout << "size array= ";
    cin >> n;
    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "number " << i + 1 << "=" << " ";
        cin >> arr[i];

    }

    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min)
            min = arr[i];
    }

    for (auto i : arr)
        for (auto j : arr)
        {
            if (i != j)
            {
                summ = i + j;
                for (int x = 0; x < n; x++)
                {
                    if (arr[x] != summ && arr[x] < min)
                        min = arr[x];
                }
            }

        }
    cout << min;
}
