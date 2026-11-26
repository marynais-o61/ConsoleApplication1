#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    for (int i = 5; i <= 20; i++)
    {
        if (i != 10)
            sum = sum + i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}