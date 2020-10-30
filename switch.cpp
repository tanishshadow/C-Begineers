#include <iostream>
using namespace std;
int main(){

    char i;
    cout << "Enter a character:\n";
    cin>>i;

    // if(i=='a'){
    //     cout << "One";

    // }
    // else if(i=='b'){
    //     cout << "Two";
    // }
    // else if(i=='c'){
    //     cout << "Three";
    // }
    // else{
    //     cout << "I am still learning robot";
    // }
    switch (i)
    {

        case 'a':
            cout << "One";
            break;
        case 'b':
            cout << "Two";
            break;
        case 'c':
            cout << "Three";
            break;
        case 'd':
            cout << "Four";
            break;


        default:
            cout << "Oops!";
            break;
    }



    return 0;
}
