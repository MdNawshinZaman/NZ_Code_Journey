#include <stdio.h>
#include <conio.h>

int main(){
int i,n,rows;

printf("Enter the number of rows :");
scanf("%d",&rows);

for(i=rows;i>0;i--){

    for(n=i;n>0;n--)
        printf("*");
    printf("\n");

}
return 0;
}