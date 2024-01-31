#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
string food = "Pizza";  
string food2 = "Pizza2";  
string* ptr = &food;    
string *ptr2 = &food2;   

// cout << food << "\n";

cout << &food << "\n";
cout << *ptr2 << "\n";

int res = ptr-ptr2;

cout << res << "\n";
    return 0;
}