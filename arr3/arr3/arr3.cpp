#include <iostream>
#include <string>
#include <vector>

using namespace std;

string revers(string line)
{
    string nline;
    for (int i = 1; i < line.length() + 1; i++)
        nline = nline + line[line.length() - i];
    return nline;
}

int main()
{
    int n, a, b, summ1 = 0;
    cout << "size array= ";
    cin >> n;
    vector <int> arr(n);
    string darr, narr, p;

    for (int i = 0; i < n; i++)
    {
        cout << "number" << " " << i + 1 << " " << "=";
        cin >> arr[i];
    }

    cout << "first system= ";
    cin >> a;
    cout << "final system= ";
    cin >> b;

    for (int i = 0; i < n; i++)
    {
        summ1 += arr[arr.size() - 1 - i] * pow(a, i);
    }

    if (b == 10)
        cout << summ1;
    else
    {
        while (summ1 > 0)
        {
            narr += to_string(summ1 % b);
            summ1 = summ1 / b;
        }

        cout << revers(narr);
    }
}