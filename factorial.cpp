#include<iostream>
using namespace std;

int main()
{
    int j = 0;
    while(j < 1)
    {
        int num, factorial = 1;
        cout<< "Enter a number: ";
        cin>>num;

        for(int i = num; i>0; i--)
        {
            factorial = factorial * i;
        }
        cout<< "Factorial of " << num << " is: " <<factorial<<endl<<endl;
    }

    return 0;
}

