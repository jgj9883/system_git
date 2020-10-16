#include <string.h>
#include <search.h>
#include <stdio.h>
#include <stdlib.h>


struct node {
	
	char *name;
	int age;
	int m_score;
	int f_score;
};


struct node *root = NULL;


int compare(const void *cp1, const void *cp2){
	return strcmp(((struct node *) cp1) ->name, ((struct node *) cp2) ->name);
}

void print_node(const void *nodeptr, VISIT order, int level){
	if(order == preorder || order == leaf)
		printf("name = %-5s, age = %-5d, m_score = %-5d, f_score = %-5d\n",
		(*(struct node **) nodeptr)->name,
		(*(struct node **) nodeptr)->age,
		(*(struct node **) nodeptr)->m_score,
		(*(struct node **) nodeptr)->f_score);
}

int main(){
	int num;
	printf("Student number : ");
	scanf("%d", &num);
	char nametable[num*20];
	char *nameptr = nametable;
	struct node *nodetable = malloc(sizeof(struct node) * num);
	struct node *nodeptr = nodetable;
	struct node **ret;

	int i = 0;
	printf("name, age , m_score, f_score \n");
	while(scanf("%s%d%d%d", nameptr, &nodeptr ->age, &nodeptr ->m_score, &nodeptr ->f_score) != EOF&& i < num){
		nodeptr ->name = nameptr;
		
		ret = (struct node **) tsearch((void *) nodeptr, (void **) &root, compare);
		printf("\"%s\" Struct Tree input\n", (*ret)->name);
		if(*ret == nodeptr)
			printf("add tree\n");
		else
			printf("already\n");
		nameptr += strlen(nameptr) +1;
		nodeptr++;
	i++;
	}
	printf("--------------Tree Show !!-----------------\n");
	twalk((void*) root, print_node);
}


		
