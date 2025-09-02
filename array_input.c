
#include<stdio.h>
int main(){
    int size;
    printf("Enter your array :-" );
    scanf("%d",&size);

    int marks[size];
    for (int i = 0 ; i < size;i++){
        printf("Enter array %d element :-",i + 1);
        scanf("%d",&marks[i]);
    }
    printf("The array elements are :\n");
    for(int i = 0;i < size; i++){
      printf("%d\n",marks[i]);
    }
}