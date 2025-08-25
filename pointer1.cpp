#include <iostream>
using namespace std;

int main() {
    int a = 45;
    int kk = 67;
    string u;
    u = "siam";
    int* b = &a;
    int**c = &b;
    // cout<< b ;
    cout<< "address of a = " << b << endl;
    cout<< "address of kk = " << &kk << endl;
    cout<< "address of string u = " << &u << endl;

    // pointer to pointer address save 
    cout << "address of b pointer = " << c ;


    return 0;
}