#include <string.h>
#include <stdlib.h>
#include <search.h>
#include <stdio.h>
#include <string.h>

struct node {
	struct node *left;
	struct node *right;
	char name[10];
	int age;
	int m_score;
	int f_score;
};

struct node *root = NULL;


void main(){
	int num;
	printf("Student number input :");
	scanf("%d", &num);

	struct node *nodetable = malloc(sizeof(struct node) * num);
	struct node **ret;

	int i = 0;
	while(i < num){
		char name[10] = { 0 };
		int age = 0;
		int m_score = 0;
		int f_score = 0;
		
		printf("%d Student name, age: ", i);
		scanf("%s %d %d %d", name, &age, &m_score, &f_score);
		
		int j = 0;
		for (j = 0; j < num; j++)
			if (nodetable[j].name == name && nodetable[j].age == age && nodetable[j].m_score== m_score && nodetable[j].f_score == f_score )
				break;
		if (j == num) {
			strcpy(nodetable[j].name, name);
			nodetable[j].age = age;
			nodetable[j].m_score = m_score;
			nodetable[j].f_score = f_score;
		}
		printf("name = %s age = %d m_score = %d f_score = %d\n", name, age, m_score, f_score);
		i++;
		/*
		ret = (struct node **) tsearch((void *) nodetable, (void **) &root, compare);
		printf("\"%s\" Struct Tree input\n", (*ret)->name);
		if(*ret == nodetable)
			printf("add tree\n");
		else
			printf("already\n");
		nodetable++;
		*/
	}
}

