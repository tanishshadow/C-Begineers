#include<iostream>
using namespace std;
int main(){

    int a;
    float b;
    bool c;
    double p;
    a=1;
    b=2.2;
    c = true;
    p = 2.211;

    cout << "Size of variable 'a' :" << sizeof(a)<<endl;
    cout << "Size of variable 'b': " << sizeof(b)<<endl;
    cout << "Size of variable 'c' :" << sizeof(c) << endl;
    cout << "Size of variable 'p' :" << sizeof(p) << endl;

    // Changing the size of variables

    short int si;
    long int li;
    cout << "Size of variable 'si' :" << sizeof(si) << endl;
    cout << "Size of variable 'li' :" << sizeof(li) << endl;
    return 0;
}
