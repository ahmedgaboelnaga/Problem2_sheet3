#include <iostream>

using namespace std;

int main() {

    int sum = 0, count = 0;

    for (int i = 1; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            count += 1;
            sum += i;
        }
    }
    cout << "The sum is: " << sum << endl << "The count is: " << count;


    return 0;
}