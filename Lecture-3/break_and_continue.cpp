
#include <iostream>
using namespace std;

int main()
{   // Print numbers which are not divisible by 3
    for (int i = 1; i <= 100; i++)
    {

        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    // Check Prime numbers

    int i, n;
    cout << "Enter a number: " << endl;
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "it is not a prime " << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "it is a prime number " << endl;
    }

    // Find prime numbers between a to b

    int a,b,i,n;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    for(n=a; n<=b; n++) {
        for(i=2; i<n; i++) {
            if(n%i==0) {
                break;
            }
        }
        if(i==n) {
            cout<<n<<endl;
        }

    }
}
