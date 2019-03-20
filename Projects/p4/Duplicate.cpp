#include <cstdio>
#include <getopt.h> // to parse long arguments.
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;


int main(){

  string s,w;
  int count;
  getline(cin,s);
  w=s;
  while(getline(cin,s)){
    if(w == s){
      count++;
      w = s;
      }
    if(count > 1){
      continue;
      }
    if(count == 1){
      cout << w << "\n";
      w = s;
      }

    }

}