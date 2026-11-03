#include<iostream> 
#include<cstring> 
#include<cctype> 
using namespace std; 
class MyString{ 
private: 
char *str; 
public: 
MyString(const char *s){ 
str = new char[strlen(s)+1]; 
strcpy(str,s); 
} 
MyString(const MyString& s){ 
str = new char[strlen(s.str)+1]; 
strcpy(str,s.str); 
} 
MyString operator+(const MyString& s){ 
char *temp = new char[strlen(str)+strlen(s.str)+1]; 
strcpy(temp,str); 
strcat(temp,s.str); 
MyString result(temp); 
        delete[] temp; 
        return result; 
    } 
    MyString& operator=(const MyString& s){ 
        delete[] str; 
        str = new char[strlen(s.str)+1]; 
        strcpy(str,s.str); 
        return *this; 
    } 
    bool operator<=(const MyString& s){ 
        return strcmp(str,s.str)<=0; 
    } 
    void length(){ 
        cout<<"Length of string:"<<strlen(str)<<endl; 
    } 
    void toLower(){ 
        for(int i=0;str[i]!='\0';i++) 
            str[i]=tolower(str[i]); 
    } 
    void toUpper(){ 
        for(int i=0;str[i]!='\0';i++) 
            str[i]=toupper(str[i]); 
    } 
    void display(){ 
        cout<<str<<endl; 
    } 
    ~MyString(){ 
        delete[] str; 
    } 
}; 
int main(){ 
MyString s1("Hello"); 
MyString s2("World!"); 
MyString s3=s1+s2; 
s3.display(); 
MyString s4=s1; 
s4.display(); 
s1.length(); 
cout<<(s1<=s2)<<endl; 
cout<<(s2<=s4)<<endl; 
s1.toLower(); 
s1.display(); 
s2.toUpper(); 
s2.display(); 
return 0; 
}
