#include<stdio.h>
int main(){
int a[100];
int max;
int min;
for(int i=0;i<5;i++){
	printf("nhap vao a[%d]: ",i);
	scanf("%d",&a[i]);
	if(a[i]>max){
		max=a[i];
	}
	if(a[i]<min){
		min=a[i];
	}
}
	printf("phan tu lon nhat trong mang la: %d\n",max);
	printf("phan tu nho nhat trong mang la: %d",min);
return 0;
}

