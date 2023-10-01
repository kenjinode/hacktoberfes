#include <iostream>
#include <vector>

using namespace std;

/**
 * * Hi this is a function that takes an integer as an input and prints all the prime number till the number
 * for example printing all the prime number from 1 to 5 that is 2,3
 */

void print(vector<bool> &arr)
{
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == true)
            cout << i << " ";
    }
    cout << endl;
}

void Sieve_of_Erotisms(int &n)
{
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 0; i * i <= n; i++)
    {
        if (prime[i] == true)
        {

            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    print(prime);
}

int main()
{
    int n = 10;
    Sieve_of_Erotisms(n);

    return 0;
}