/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){

int n,k = 2;


while(cin >> n){
while(true){
if(n == 1 || n == 0){

 cout << 0 << endl;
 k = 2;
 break;
 }

if(n == k){

cout << 1 << endl;
k = 2;
break;

}
if(n%k == 0){

cout << 1 << endl;
 k = 2;
break;
  }
k++;

}
}

	return 0;
}
