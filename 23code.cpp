#include <iostream>

using namespace std;

int main () {
   int num1,num2;
   string N;
   string P;
   cout << "Input your First number ";

   cin >> num1;
   cout << "Input your Second number ";
   cin >> num2;
   N = (num1%2==0)?"even":"odd";
   P = (num2%2==0)?"even":"odd";
   cout << num1 ;
   
   cout << " is " +N << endl;
   cout << num2 ;
   cout << " is " +P << endl;


//    cout << P;

   return 0;


}












// #include <iostream>

// using namespace std;

// int main () {
// //    int num1,num2;
// double po1,po2;

//    string N;
//    string P;
//    cout << "Input your First number ";

//    cin >> po1;
//    cout << "Input your Second number ";
//    cin >> po2;
//    N = fmod(po1 , 0) ?"even":"odd";
//    P = fmod(po2 , 0)?"even":"odd";
//    cout << po1 ;
   
//    cout << " is " +N << endl;
//    cout << po2 ;
//    cout << " is " +P << endl;


// //    cout << P;

//    return 0;


// }