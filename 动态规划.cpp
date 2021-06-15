#include<stdio.h> 

const int M=5;
const int N=5;

int maxprofit(int a[M][N],int b[M][N],int reward,int number){
	for(int i=1;i<=number;i++){
		for(int j=0;j<money;j++){
			a[i][j]=0;
			for(int k=0;k<=j;k++){
				if(a[i][j]<b[i][j]+a[i-1][j-k]){
					a[i][j]=b[i][k]+a[i-1][j-k];
				} 
			} 
		}
	}
	return a[number][reward];
}

int main() {
	int a[M][N]={0};
	int i=0;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("最大利益为：%d\n",maxprofit(a,b,5,4));
}

