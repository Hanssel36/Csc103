#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <getopt.h> // to parse long arguments.
#include <cstdlib>

void order(int n,int p1,int p2,int p3){
  if(n == 1){
    cout << p1 <<"\t"<< p3 << "\n";
      return;
    }else{
      order(n-1,p1,p3,p2);
      cout << p1 <<"\t"<< p3 << "\n";
      order(n-1,p2,p1,p3);


  }
}

int main(){
  int n = 2;
 int p1 = 3;
 int p2 = 2;
 int p3 = 1;
  order(n,p1,p2,p3);


}