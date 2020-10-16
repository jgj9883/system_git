void plus_value(int **m1, int **m2, int col, int row){
	int i,j;

	for(i=0; i<row; i++){
			for(j=0; j<col; j++)
					printf("%d ", m1[i][j]+ m2[i][j]);
	printf("\n");
	}
}
