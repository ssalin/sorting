// program to quicksort whatever is passed in via argv
// for now we assume everything coming in is a char seperated by spaces.
// single thread quicksort code copied from geeksforgeeks
// planning to add option for multithreading

#include<stdio.h>
#include<stdlib.h>

void swap (int * a, int * b)
{ // function to swap index locations
	int t = *a;
	*a = *b;
	*b = t;
}


int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low-1);

	for (int j = low; j <= high -1 ; j++){
	
		if(arr[j] <= pivot){
			i++;
			printf("swapping %d and %d \n", arr[i], arr[j]);
			swap (&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
}

void quicksort (int arr[], int low, int high)
{ //recursively do a quicksort. neat.
	if (low < high){
	
		int pi = partition (arr, low, high);
		
		quicksort(arr, low, pi-1);
		quicksort(arr,pi + 1, high);
	}	 
	
}

int main (int argc, char * argv[])
{

	//loop to grab vals on stdin and put them in an array
 	// would the vals b chars or ints? probably chars.
	// dynamic 
	int * in = NULL;//id rather do the alloc inside the if statement but compiler didn't like it
	printf("argc is %d\n",argc);
	int n = (argc-1);//how many things

	if(argc -1 > 0){ //make sure inputs are actually given
		in = calloc ((argc - 1), sizeof(int)); //make array to hold all the input vals
		
		for (int i = 0; i < argc-1; ++i){
			in[i] = atoi(argv[i+1]);
			printf("%d \n", in[i]);
		}
	
	}
	else{
		printf("no inputs given :'(");
		return 1;
	}
	
	printf("n is %d\n",n);
	
//	quicksort(arr, 0, n-1);
	
	for (int i = 0; i < n; i++){
		printf("%d \n",in[i]);
	}

	free(in);
}

