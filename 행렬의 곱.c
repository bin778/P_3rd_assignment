#include <stdio.h>

int main(){
	int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k;

	printf("첫번째 행과 열을 입력: ");
	scanf("%d%d",&r1,&c1);

	printf("두번째 행과 열을 입력: ");
	scanf("%d%d",&r2,&c2);

	while(c1!=r2){
		printf("행렬의 곱셈이 불가능합니다.\n\n");
		printf("첫번째 행과 열을 입력: ");
		scanf("%d%d",&r1,&c1);

		printf("두번째 행과 열을 입력: ");
		scanf("%d%d",&r2,&c2);
	}

	printf("\n행렬 성분 입력 1: \n");
	for (i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			printf("성분 a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]); 
		}
	}

	printf("\n행렬 성분 입력 2: \n");
	for (i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			printf("성분 b%d%d: ",i+1,j+1);
			scanf("%d",&b[i][j]); 
		}
	}

	printf("\n");
	for (i=0; i<r1; i++){
		for(j=0; j<c2; j++){
			result[i][j]=0;
			for(k=0; k<c1; k++){				
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	printf("행렬의 곱 결과값\n");
	for (i=0; i<r1; i++){
		for(j=0; j<c2; j++){
			printf("%8d",result[i][j]);	
		}
		printf("\n");
	}
	return 0;
}