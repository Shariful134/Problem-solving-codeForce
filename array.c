#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int a[n+1];
  
   for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
   }
   int idx, value;
   scanf("%d %d", &idx, &value);

   for(int i=n; i >= idx+1; i--){
    a[i]= a[i-1];
   }
   a[idx]= value;
   for(int i=0; i<n; i++){
    printf("%d ",a[i]);
   }


   

return 0;
}