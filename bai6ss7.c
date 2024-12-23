#include<stdio.h>
int main(){
int a[]={1,2,3,4,5};
int b,c;
for(int i=0;i<5;i++){
	if(a[i]%2==0){
		c=a[i]+3;
}else{
		c=a[i]+2;
}
	printf("%d ",c);
}
return 0;
}

