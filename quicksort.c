//program to quicksort whatever is passed in via argv
// for now we assume everything coming in is a char seperated by spaces.
#include<stdio.h>
#include<stdlib.h>

void swap (int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


void quicksort (int *  vals)
{
	 
	
}

 int main (int argc, char * argv[])
{

	 	//loop to grab vals on stdin and put them in an array
 	// would the vals b chars or ints? probably chars.
	// dynamic 
	if(argc -1 > 0) //make sure inputs are actually give{
		int * in = NULL;
		// in = malloc (argc - 1 * sizeof(int)); //make array to hold all the input vals

		for (int i = 1; i < argc-1; ++i){
			in[i] = atoi(argv[i]);
		}
	
	}
	else
		printf("no inputs given :(");
}
