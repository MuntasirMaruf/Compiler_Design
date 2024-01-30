#include<iostream>
using namespace std;

int main()
{
    string str1, str2, full;
    cout<< "First Name: ";
    cin>> str1;
    cout<< "Last Name: ";
    cin>> str2;

    full = str1 + " " + str2;

    cout<< "Full Name: " << full;
    return 0;
}

