#include <stdio.h>
#include <stdlib.h>

  void toplam( int *);
int main()
{
    int arr[100]={};
    int sz;
    printf("Enter  size of the array=");
    scanf("%d",&sz);
    for(int i=0;i<sz;i++){
        printf("Enter the %d. element of the array",i+1);
        scanf("%d",&arr[i]);
    }

   toplam(arr);

    return 0;
}
        int sum=0;
      void toplam(int *pnt){
      while(*pnt != NULL){
        sum += *pnt;
        pnt++;

      }
      printf("Sum of the elements of the Array = %d",sum);
      }
