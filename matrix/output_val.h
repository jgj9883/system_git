void output_value(int **m, int row, int col){
	int i,j;

	for(i=0; i<row; i++){
		for(j=0; j<col; j++)
			printf("%d ", m[i][j]);
	printf("\n");

	}

}
