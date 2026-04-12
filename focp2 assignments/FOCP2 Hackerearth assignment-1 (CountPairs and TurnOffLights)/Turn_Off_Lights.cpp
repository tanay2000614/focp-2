#include <iostream>

using namespace std;

char lights_array[1000005];
int bulb_count, limit_ops;

int check_validity(int current_l)
{
    int moves = 0;
    for (int i = 0; i < bulb_count;)
    {
        if (lights_array[i] == '1')
        {
            moves++;
            i += current_l;
        }
        else
            i++;
    }
    return moves <= limit_ops;
}

int main()
{
    if (!(cin >> bulb_count >> limit_ops))
        return 0;
    cin >> lights_array;

    int start_val = 1;
    int end_val = bulb_count;
    int final_answer = bulb_count;

    while (start_val <= end_val)
    {
        int middle = (start_val + end_val) / 2;
        if (middle == 0)
        {
            start_val = 1;
            continue;
        }

        if (check_validity(middle))
        {
            final_answer = middle;
            end_val = middle - 1;
        }
        else
            start_val = middle + 1;
    }

    cout << final_answer << endl;

    return 0;
}