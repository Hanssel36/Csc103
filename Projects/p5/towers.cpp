/*
 * CSc103 Project 7: Towers of Hanoi
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *https://www.khanacademy.org/computing/computer-science/algorithms/towers-of-hanoi/a/towers-of-hanoi
 *
 * Finally, please indicate approximately how many hours you spent on this:
 * #hours: 4
 */

// TODO: write the program.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <getopt.h> // to parse long arguments.
#include <cstdlib> // for atoi function
void order(int n,int p1,int p2,int p3);
/* Here's a skeleton main function for processing the arguments. */
int main(int argc, char *argv[]) {
	// define long options
	static struct option long_opts[] = {
		{"start",        required_argument, 0, 's'},
		{"end",          required_argument, 0, 'e'},
		{"num-disks",    required_argument, 0, 'n'},
		{0,0,0,0} // this denotes the end of our options.
	};
	// now process the options:
	char c; // to hold the option
	int opt_index = 0;
	short n=0,start=0,end=0; /* to store inputs to the towers function. */
	while ((c = getopt_long(argc, argv, "s:e:n:", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 's': // process option s
				start = atoi(optarg);
				break;
			case 'e': // process option e
				end = atoi(optarg);
				break;
			case 'n': // process option n
				n = atoi(optarg);
				break;
			case '?': // this will catch unknown options.
				// here is where you would yell at the user.
				// although, getopt will already print an error message.
				return 1;
		}
	}

	/* TODO: now that you have the options and arguments,
	 * solve the puzzle. */
  int p1 = start;
  int p2 = 2;
  int p3 = end;
  int Numdisk = n;
  if(start == 1  && end == 2|| start == 2 && end == 1){
    p2 = 3;
    }
  if(start == 2  && end == 3|| start == 3 && end == 2){
    p2 = 1;
    }
order(Numdisk,p1,p2,p3);

}

void order(int n,int p1,int p2,int p3){
  if(n == 1){
      cout << p1 <<"\t"<< p3 << "\n";
      return;
    }else{
      order(n-1,p1,p3,p2);
      cout << p1 <<"\t" << p3 <<"\n";
      order(n-1,p2,p1,p3);
      }

}