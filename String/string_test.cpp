#include"string.h"
#include<iostream>


using namespace std;


int main(){
    String s1("hello");
    
    String s2=s1;

    cout<<"test"<<endl;

    cout<<s1.get_c_str()<<endl;
    cout<<s2.get_c_str()<<endl;
    cout<<s2<<endl;

    String s3(s1);
    cout<<s3<<endl;




}