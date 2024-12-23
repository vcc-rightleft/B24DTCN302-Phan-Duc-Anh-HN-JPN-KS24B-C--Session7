#include<stdio.h>
int main(){
int n,a[100];
printf("moi nhap vao so phan tu: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("moi nhap vao a[%d]: ",i);
	scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
	printf(" %d",a[i]);
}
return 0;
}

