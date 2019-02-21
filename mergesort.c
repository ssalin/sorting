#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int l, int m, int r)
{/*merges two subarrays of arr[]
 //first subarray is arr[l..m]
 //second subarray is arr[m+1..r]
 //they should be in order already?
 */
	//need 2 temp arrays
 	int l[m-l+1]; //m-l+1 == num elms left of mid
	int r[r-m];  //r-m == num elms right of mid
	
	int j = 0; //index for left side
	int k = 0; //index for right side
	
	for(int i = 0; i < m+1;i++_{ //m+1 to make sure arr[m] gets handled correctly.
		l[i] = arr[l+i];
		r[i] = arr[l+m+i+1];
	}
	
	for(int i = l; i < r; i++){//all items in arr
		if((l[j] < r[k]) && (j != sizeof(l))){
			arr[i] = l[j];
			j++;
		}	
		else{
			arr[i]=r[k];
			k++;
		}
	}

}

void mergesort(int arr[],int l, int r)
{ //recursively calls itself
 	if(l<r){
		int m = ((l+(r-l)/2);
		//do the thing for the two sides
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		//
		merge(arr,l,m,r)
	}

}

int main(int argc, char * argc[])
{
 //read input from cli
 //show unsorted list 

 //sort the list
 //show sorted list
}
