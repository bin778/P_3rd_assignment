#include <stdio.h>

int main(){
	int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k;

	printf("ù��° ��� ���� �Է�: ");
	scanf("%d%d",&r1,&c1);

	printf("�ι�° ��� ���� �Է�: ");
	scanf("%d%d",&r2,&c2);

	while(c1!=r2){
		printf("����� ������ �Ұ����մϴ�.\n\n");
		printf("ù��° ��� ���� �Է�: ");
		scanf("%d%d",&r1,&c1);

		printf("�ι�° ��� ���� �Է�: ");
		scanf("%d%d",&r2,&c2);
	}

	printf("\n��� ���� �Է� 1: \n");
	for (i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			printf("���� a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]); 
		}
	}

	printf("\n��� ���� �Է� 2: \n");
	for (i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			printf("���� b%d%d: ",i+1,j+1);
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

	printf("����� �� �����\n");
	for (i=0; i<r1; i++){
		for(j=0; j<c2; j++){
			printf("%8d",result[i][j]);	
		}
		printf("\n");
	}
	return 0;
}