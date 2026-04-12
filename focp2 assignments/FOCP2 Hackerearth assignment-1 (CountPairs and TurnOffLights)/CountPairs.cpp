#include <iostream>

using namespace std;

int smallest_factor[10000001];

void compute_sieve()
{
    for (int i = 2; i <= 10000000; i++)
    {
        smallest_factor[i] = i;
    }
    for (int i = 2; i * i <= 10000000; i++)
    {
        if (smallest_factor[i] == i)
        {
            for (int j = i * i; j <= 10000000; j += i)
            {
                if (smallest_factor[j] == j)
                    smallest_factor[j] = i;
            }
        }
    }
}

int main()
{
    compute_sieve();
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        int num;
        cin >> num;

        if (num == 1)
        {
            cout << 1 << endl;
            continue;
        }

        int count = 0;
        int current = num;
        while (current > 1)
        {
            int p = smallest_factor[current];
            count++;
            while (current % p == 0)
                current /= p;
        }

        int result = 1;
        for (int j = 0; j < count; j++)
        {
            result = result * 2;
        }
        cout << result << endl;
    }
    return 0;
}