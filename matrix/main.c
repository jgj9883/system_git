#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input_val.h"
#include "output_val.h"
#include "plus_val.h"


int row = 0, col = 0;
void main(){
	int i,j, num1 = 16556541, num2 = 4556115;
	int **matrix1, **matrix2;
	printf("input row : ");
	scanf("%d", &row);
	printf("input col : ");
	scanf("%d", &col);

	matrix1 = malloc(sizeof(int) * row);
	matrix2 = malloc(sizeof(int) * row);

	for(i=0; i< row; i++){
		matrix1[i] = malloc(sizeof(int) * col);
		matrix2[i] = malloc(sizeof(int) * col);
	}

	printf(" -------------\n");
	printf("matrix 1\n");
	input_value(matrix1, row, col, num1);
	output_value(matrix1, row, col);

	printf(" -------------\n");
	printf("matrix 2\n");
	input_value(matrix2, row, col, num2);
	output_value(matrix2, row, col);
	printf(" -------------\n");

	printf("matrix 1+2 add ! \n");
	plus_value(matrix1, matrix2, col, row);
	for(i=0; i<row; i++){
		free(matrix1[i]);
		free(matrix2[i]);
	}

	free(matrix1);
	free(matrix2);

	return 0;
}
