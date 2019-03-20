#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;

int main(){
  string s,w,mid;
int count = 1;
  getline(cin,s);
  w = s;
  while(getline(cin,s)){
count = 1;
    if(w == s){
      count++;

      }
      if(count > 1 ){

          continue;

        }
        if(count == 1){
          cout << w << "\n";
          w = s;
          }
      }
}

