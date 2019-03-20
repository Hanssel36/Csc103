#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;

int main(){
string s,w;
  int count = 1;
getline(cin,s);
  w =s;

while(getline(cin,s)){

  if(w == s){
    count++;
  w = s;
    }else{
      cout << count << w << "\n";
        count = 1;
      w = s;
      }
}
cout << count << w << "\n";
}