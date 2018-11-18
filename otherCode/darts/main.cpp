#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    float start, pull, x1, y1;
    start=radius(4, 3);
    cout<<"Enter your coordinates\n";
    cin>>x1>>y1;
    pull=radius(x1,y1);
    score(pull, start);
    return 0;
}
