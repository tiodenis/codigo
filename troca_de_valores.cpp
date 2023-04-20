#include<stdio.h>
main(){
	int i,x=0,p,v[10];
	printf("escreva os valores do vetor" "\n");
	for (i=0;i<10;i=i+1){
		scanf("%i", &v[i]);
	}
	printf("\n");
	for (i=0;i<10;i=i+1){
		printf("%i ", v[i]);
	} 
	for (i=0;i<6;i=i+1){
		if (v[i]>x)
		x=v[i];
		p=i;
	}
	v[p]=v[10];
	v[10]=x;
	printf("\n");
	for (i=0;i<10;i=i+1){
		printf("%i ", v[i]);
	}
}

