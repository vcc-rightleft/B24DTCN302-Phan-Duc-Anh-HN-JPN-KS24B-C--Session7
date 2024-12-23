#include<stdio.h>
int main(){
int arr[10]={1,2,5,4};
int n=sizeof(arr[10]);
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\ndo  dai cua mang la: %d",n);
return 0;
} 
