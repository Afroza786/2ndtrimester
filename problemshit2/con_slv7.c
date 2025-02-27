#include<stdio.h>
#include<math.h>
int main(){

int a,b,c,d;
float x1,x2,e;
scanf("%d%d%d",&a,&b,&c);

d=b*b-4*a*c;

if(d>0){

    x1=(-b + sqrt(d))/(2*a);
    printf("x1=%f",x1);
    x2=(-b - sqrt(d))/(2*a);
    printf("x2=%f",x2);
}
else if(d==0){
    e=(-b)/(2*a);
    printf("x=%f",e);
}
else{
    printf("invalid input");
}


return 0;
}
