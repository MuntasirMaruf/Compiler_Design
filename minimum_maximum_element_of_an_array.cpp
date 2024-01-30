#include<iostream>
using namespace std;

int main()
{
    double array1[] = {45, 34, 22, 11, 234};
    int length = sizeof(array1)/sizeof(array1[0]);
    double maX = array1[0], miN = array1[0];

    for(int i = 0; i<length; i++)
    {
        if (array1[i] > maX)
        {
            maX = array1[i];
        }
        if (array1[i] < miN)
        {
            miN = array1[i];
        }
    }

    cout<< "Minimum value of the array is = " <<miN<<endl;
    cout<< "Maximum value of the array is = " <<maX;
    return 0;
}

