#include<stdio.h>
#include<stdlib.h>
#define HASHSIZE 10

struct person{
	char name[10];
	int age;
};


int dohash(int val)
{
  return val % HASHSIZE;
}

int main(int argc, char * argv[])
{	
	struct person * tmp;
	struct person * people[HASHSIZE];
	int success;
	for(int i = 0; i < HASHSIZE; i++){
		people[i] = 0;
	}
	int dex = 0;
	
	int more = 1;
	int c = 0;
	//get user data
	while(more){
		tmp = malloc(sizeof(struct person)); 
		printf("enter a name: ");
		fgets(tmp->name,10,stdin);
		printf("enter age: ");
		scanf("%d",&tmp->age);
		dex = dohash(tmp->age);
				
		if(!people[dex]){
			people[dex] = tmp;
			printf("stored at index %d\n",dex);

		}
		else{
			success = 0;
			for(int i = dex+1; i < HASHSIZE; i++){
				if(!people[i]){
					people[i] = tmp;
					printf("stored at index %d\n",i);
					success = 1;
					break;
				}
			}
			if(!success)
				printf("INSERTATION FAILURE\n");
		
		}

		printf("more?" );
		scanf("%d",&more);	
		while((c = getchar()) != '\n' && c != EOF);
	}	
	
	 
	//print hash datai
	for(int i = 0; i<HASHSIZE; i++){
		if(people[i]){
			printf("%s is %d and located at %d\n",people[i]->name,people[i]->age,i);
		}
	}

	//clean up dynamic mem
	for(int i = 0; i < HASHSIZE; i++){
		if(people[i])
			free(people[i]);
	}

		
}
