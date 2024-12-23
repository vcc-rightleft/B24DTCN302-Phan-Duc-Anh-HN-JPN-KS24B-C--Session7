#include<stdio.h>
int main(){
int n=5,a[100];
for(int i=0;i<5;i++){
	printf("moi nhap vao a[%d]: ",i);
	scanf("%d",&a[i]);
}
printf("phan tu chan trong mang vua nhap la: ");
for(int i=0;i<n;i++){
	if (a[i]%2==0){
	printf("%d ",a[i]);
	}
}

return 0;
}

