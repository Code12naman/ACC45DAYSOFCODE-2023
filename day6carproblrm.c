#include<stdio.h>
int main (){

int n;
printf ("enter the number of friends");
scanf("%d",&n);

if (n<=4)
{
    printf ("cars required :1");

}else{
    printf("cars required :%d",(n+3)/4); 
}








    return 0;
}