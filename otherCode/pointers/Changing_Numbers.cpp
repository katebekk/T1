#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"enter numbers\n";
    cin >> a>> b;
    int *p2,*p1=new int;
    *p1 = a;
    p2 = &b;
    a = *p2;
    b = *p1;
    cout << "a: " << a << "\nb: " << b;
    return 0;
}