#include<iostream>
using namespace std;

class Stack
{
    private:
        int top;
        double array1[1000];

    public:
        Stack()
        {
            top = 0;
        }

        void push(double v)
        {
            if(top<1000)
            {
                array1[top] = v;
                top++;
            }
            else
            {
                cout<< "Stack overflow" <<endl;
                cout<< "Top element: "<<getTop()<<endl;
            }
        }

        void pop()
        {
            if(top>0)
            {
                top--;
            }
            else
            {
                cout<< "Stack underflow" <<endl;
            }
        }

        double getTop()
        {
            if(top>0)
            {
                return array1[top-1];
            }
            else
            {
                cout <<"Stack empty"<<endl;
                return -9999;
            }
        }
};

int main()
{
    double sum = 0;
    int len;
    cout<< "Enter length of the stack: " <<endl;
    cin>>len;
    Stack s1;
    cout<< "Enter elements of the stack: " <<endl;
    int i=0, Count = 0;
    while(i==0)
    {
        if(Count < len)
        {
            double element;
            cin>>element;
            s1.push(element);
            Count++;
            sum = sum + element;
        }
        else
        {
           break;
        }
    }

    double avg = sum/Count;
    cout <<"Average of the elements = "<< avg<<endl;
}

