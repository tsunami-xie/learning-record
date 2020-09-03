#include <iostream>
#include "complex.h"


using namespace std;


int main(){
    complex c1(2,4);
    complex c2(2,4);
    
    cout << (c1+=c2).real() << endl;

    cout<<"test"<<endl;

}