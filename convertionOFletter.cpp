#include <iostream>
#include <string>
using namespace std;

int main(){
      
   string s ;
getline(cin,s);
   for(int i=0;  i<s.size(); i++){

    if(s[i]<='z' && s[i]>='a'){
    s[i] -=32;}
    else{
        s[i]-= 0;
    }

   }
cout<<s;
    return 0;
} 