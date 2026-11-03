#include<iostream> 
using namespace std; 
template <typename T> 
T square(T a){ 
return a*a; 
} 
int main(){ 
cout<<"Square of integer:"<<square(5)<<endl; 
cout<<"Square of float:"<<square(3.8f)<<endl; 
cout<<"Square of double:"<<square(7.89)<<endl; 
return 0; 
} 
