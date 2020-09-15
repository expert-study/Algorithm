/* Reference: https://na982.tistory.com */
int strcmp(char *a, char *b){
	int i = 0, j = 0;
	while(a[i]){
		if(a[i++] != b[j++]){
			--i, --j;
			break;
		}
	}
    
	return a[i] - b[j];
} 