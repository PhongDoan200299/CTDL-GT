#include<stdio.h>
#include<stdlib.h>

int linearSearch (int a[],int k,int n){
	int i;
	for (i= 0; i < n; i++){
		if(a[i] ==k) {
			return i;
		}
	}
	return -1;
}

int main(){
	int a[100];
	int k,n;
	
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("input.txt", "r");
	if(f==NULL){
		printf("\ Loi tao hoac mo file!");
		exit(1);
	}
	//3 Doc du lieu
	fscanf(f, "%d", &n);
	fscanf(f, "%d", &k);
	int i;
	for(i = 0; i < n;i++){
		fscanf(f, "%d", &a[i]);
	}
		
	//4 Dong file
	fclose(f);
	
	printf("\n Vi tri cua n: %d", linearSearch(a,k,n));

}
