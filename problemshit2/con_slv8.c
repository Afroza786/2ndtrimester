#include<stdio.h>

int main(){

char catagory;
int exp,fmem;
float finc;
scanf("%c",&catagory);
scanf("%d%d",&exp,&fmem);
scanf("%f",&finc);
if(exp>=12 && fmem>5){
    printf("will receive the bonus\n");
}
else if(finc<1000.50){

    printf("will receive the bonus\n");
}
else if((catagory=='Y' || catagory=='Z')&&fmem>8 &&finc<1100.78){
        printf("will receive the bonus\n");
        }
else if(catagory=='X' && fmem>5){
    printf("will receive bonus\n");
}
else{
    printf("Do not receive bonus\n");
}

return 0;
}
