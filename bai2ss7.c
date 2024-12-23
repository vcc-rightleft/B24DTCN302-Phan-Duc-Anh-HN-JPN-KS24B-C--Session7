#include<stdio.h>
int main(){
int a[100],n;
printf("Nhap vao mang: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("nhap vao b[%d]: ",i);
	scanf("%d",&a[i]);
}
printf("mang vua nhap la: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}

