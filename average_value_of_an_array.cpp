#include<iostream>
using namespace std;

int main()
{
    int length;
    cout<< "Enter the size of the array: ";
    cin>>length;
    double array1[length], sum, avg;
    cout<< "Enter the elements of the array: "<< endl;
    for(int i = 0; i<length; i++)
    {
        cin>>array1[i];
    }

    for(int j = 0; j<length; j++)
    {
        sum = sum + array1[j];
    }
    avg = sum/length;

    cout<< "Average value of the array is = " <<avg;
    return 0;
}
