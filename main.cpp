#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 5}};
    int n = 3;

    bool is_symmetric = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == b[i][j])
            {
                continue;
            }
            else
            {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric)
        {
            break;
        }
    }
    if (is_symmetric)
    {
        cout << "symmetric";
    }
    else
    {
        cout << "not symmetric";
    }
    return 0;
}
