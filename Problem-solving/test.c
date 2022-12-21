#include<stdio.h>
#include<math.h>
int main(){

double base,expo,power = 1 ;

double i;

printf("Enter Base : ");
scanf("%lf",&base);

printf("Enter Expo : ");
scanf("%lf",&expo);

for(i = 1;i <= expo ; i++){

    power = power * base ;

}
printf("Power is %lf",power);
return 0;
}