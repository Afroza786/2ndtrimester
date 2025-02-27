#include<stdio.h>

int main(){

int n;
scanf("%d",&n);

if(n>=90 && n<=100){

    printf("Grade:A\n");
}
else if(n>=86 && n<=89){

    printf("Grade:A-\n");
}
else if(n>=82 && n<=85){

    printf("Grade:B+\n");
}
else if(n>=78 && n<=81){

    printf("Grade:B\n");
}
else if(n>=74 && n<=77){

    printf("Grade:B-\n");
}
else if(n>=70 && n<=73){

    printf("Grade:C+\n");
}
else if(n>=66 && n<=69){

    printf("Grade:C-\n");
}
else if(n>=58 && n<=61){

    printf("Grade:D+\n");
}
else if(n>=55 && n<=57){

    printf("Grade:D\n");
}
else{
    printf("Grade:F\n");
}
return 0;
}

