// Program to find the sum of N natural numbers using recursion

#include <iostream>
using namespace std;

void printsum(int i, int n, int sum)
{
    if (i == n)
    {
        sum += i;
        cout << sum;
        return;
    }

    sum = sum + i;

    printsum(i + 1, n, sum);
}

int main()
{
    int num;
    cout << "Enter the number to where do you want to print sum : " << endl;
    cin >> num;

    printsum(1, num, 0);

    return 0;
}