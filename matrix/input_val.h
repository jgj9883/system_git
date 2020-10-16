void input_value(int **m, int row, int col, int num){
	int i,j;
	srand((unsigned)num);

	for(i=0; i<row; i++)
			for(j=0; j<col; j++)
					m[i][j]= rand()%99;
}
