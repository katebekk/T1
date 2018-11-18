#include <iostream>
using namespace std;
int main()
{
   int num, sum=0;
   cout<<"How many numbers do you want to enter?\n";
   cin>>num;
   cout<<"please enter your numbers\n";
    int *Array=new int[num];
   //Entrance
    for (int i = 0; i < num; i++)
    {   int a;
        cin >> a;
        Array[i] = a;
        cout << "enter your next number" << endl;
    }
    //Which numbers have we
    for (int i = 0; i < num; i++)
    {
        cout<<Array[i];
        if (i+1==num)
        {
            cout<<".";
        }
        else
        {
            cout<<",";
        }
    }
    cout<<endl;
    //Summation
    for (int i = 0; i < num; i++)
    {
        sum+=Array[i];
    }
    cout<<"Summation of all numbers is: "<<sum;
    //Erasing memory
    delete [] Array;
    return 0;
}
