#include <vector>
using std::vector;
#include <iostream>
using std::cout;
#include <unistd.h>

vector<vector<bool> > world = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

vector<vector<bool> > OW = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

int function(int& count, int x, int y){
count = 0;
int row, colum;
	for(int r = -1; r <= 1; r++){
		for(int c = -1; c <= 1; c++){

			row = (x+r+10)%10;
			colum = (y+c+20)%20;



			if(world[row][colum] == true){

					count++;
			}

		}
		}

					if(world[x][y] == true){

					count--;
					}
return count;
}

int main(){
for(int k = 0; k < 10; k++){
		for(int j = 0; j < 20; j++){
			cout << world[k][j];
		}
		cout << "\n";
	}
while(true){
sleep(2);
	for(int k = 0; k < 10; k++){
		for(int j = 0; j < 20; j++){
			int a = 0;
 if(function(a, k, j) < 2 && world[k][j] == true){
	 OW[k][j] = false;
	 }
	if(function(a, k, j) == 2 && world[k][j] == true){
		OW[k][j] = true;
		}
	 if(function(a, k, j) > 3 && world[k][j] == true){
		 OW[k][j] = false;
		 }
		if(function(a, k, j) == 3 && world[k][j] == true){
			OW[k][j] = true;
			}
	if(function(a, k, j) == 3 && world[k][j] == false){

		OW[k][j] = true;
		}
			cout << OW[k][j];
			}
			cout << "\n";
		}
world = OW;
	}




	/* NOTE: the vector 'world' above corresponds to the contents
	 * of ../res/tests/0.  TODO: apply the rules to the vector,
	 * write the result to standard output, and compare with the
	 * contents of ../res/tests/1. */
	return 0;
}
