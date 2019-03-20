#include <vector>
using std::vector;
#include <iostream>
using std::cout;

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

int Neigborchecker(int& count, int x, int y);


int main()
{
int a = 5;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 20; j++){

			Neigborchecker(a, i, j);

			cout << world[i][j];
			}
			cout << "\n";
		}
	/* NOTE: the vector 'world' above corresponds to the contents
	 * of ../res/tests/0.  TODO: apply the rules to the vector,
	 * write the result to standard output, and compare with the
	 * contents of ../res/tests/1. */
cout << a << "\n";
	return 0;
}

int Neigborchecker(int& count, int x, int y){
count = 0;
int i = 10;
int j = 20;
int row, colum;
	for(int r = -1; r <= +1; r++){
		for(int c = -1; c <= +1; c++){

			row = (x+r+10)%10;
			colum = (y+c+20)%20;

			if(world[row][colum] == true){
				cout << "h";
					count++;

				}
				if(world[row][colum] && true){
					count--;
					}
		}
		}

return count;
	}