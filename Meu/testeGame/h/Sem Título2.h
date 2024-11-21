int ordena(int n, int m){
    int i , j;
    for(i = 0; i < n; i++) {
        int menor = i;
		for(j = 0; j < m; j++) {
		    menor = i;
		    int troca = A[j][i];
		    A[j][i] = A[j][menor];
		    A[j][menor] = troca;
		    
		}
	}
	for(i = 0; i < n; i++){
	    printf("\n");
	    for(j = 0; j < m; j++){
	        printf(" %d ", A[i][j]);
	    }
	}
}
