/*
    Write a Object Oriented Program to find out the maximum and minimum element from the array.
*/
#include<iostream>
using namespace std;

class Max_Min
{
    private:
        int *array;
        int N;
    public:
        void Accept_Array();
        void Display_Array();
        void Find_Max();
        void Find_Min();
        void Find_Max_Min();
};

void Max_Min::Accept_Array()
{
    int i;

    cout << "\nEnter Number of Array Element/s: ";
    cin  >> this->N;

    this->array = new int[N];

    cout << "\nEnter Array Element/s...\n";
    for( i=0; i<N; i++ )
    {
        cin >> this->array[i];
    }
}

void Max_Min::Display_Array()
{
    int i;
    cout << "\nEntered Array Element/s are...\n";
    for( i=0; i<this->N; i++ )
        cout << this->array[i] << " ";
    cout << endl;
}

void Max_Min::Find_Max()
{
    int max = this->array[0]; // assigning the first element is the maximum.
    int i;

    for( i=1; i<this->N; i++ )
    {
        if( this->array[i]>max )
        {
            max = this->array[i];
        }
    }

    cout << "\nMaximum Element is: " << max << endl;
}

void Max_Min::Find_Min()
{
    int min = this->array[0]; // assigning the first element is the maximum.
    int i;

    for( i=1; i<this->N; i++ )
    {
        if( this->array[i]<min )
        {
            min = this->array[i];
        }
    }

    cout << "\nMinimum Element is: " << min << endl;
}

void Max_Min::Find_Max_Min()
{
    int min = this->array[0];
    int max = this->array[0];
    int i;

    for( i=1; i<this->N; i++ )
    {
        if( this->array[i]<min )
        {
            min = this->array[i];
        }

        if( this->array[i]>max )
        {
            max = this->array[i];
        }
    }

    cout << "\n[Optimised Algorithm] Maximum Element: " << max << endl;
    cout << "\n[Optimised Algorithm] Minimum Element: " << min << endl;
}

int main()
{
    Max_Min obj;
    obj.Accept_Array();
    obj.Display_Array();
    obj.Find_Max();
    obj.Find_Min();
    obj.Find_Max_Min();
    return 0;
}