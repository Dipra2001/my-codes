
/*ccccccc
  cccccc 
  ccccc  
  cccc   
  ccc    
  cc     
  c
  cc
  ccc
  cccc
  ccccc
  cccccc
  ccccccc  
    #include<stdio.h>
    int main(){
    for(int i=1;i<=13;i++){
        if(i == 1 || i == 13){
            for(int j=1;j<=7;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 2 || i == 12){
            for(int j=1;j<=6;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 3 || i == 11){
            for(int j=1;j<=5;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 4 || i == 10){
            for(int j=1;j<=4;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 5 || i == 9){
            for(int j=1;j<=3;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 6 || i == 8){
            for(int j=1;j<=2;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 7){
            printf("c");
            printf("\n");
        }
    }
}
*/
/*
ccccccc
 cccccc
  ccccc
   cccc
    ccc
     cc
      c
     cc
    ccc
   cccc
  ccccc
 cccccc
ccccccc

#include<stdio.h>
    int main(){
    for(int i=1;i<=13;i++){
        if(i == 1 || i == 13){
            
            for(int j=1;j<=7;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 2 || i == 12){
            printf(" ");
            for(int j=1;j<=6;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 3 || i == 11){
            for(int k=1;k<=2;k++){
                printf(" ");
            }
            for(int j=1;j<=5;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 4 || i == 10){
            for(int k=1;k<=3;k++){
                printf(" ");
            }
            for(int j=1;j<=4;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 5 || i == 9){
            for(int k=1;k<=4;k++){
                printf(" ");
            }
            for(int j=1;j<=3;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 6 || i == 8){
            for(int k=1;k<=5;k++){
                printf(" ");
            }
            for(int j=1;j<=2;j++){
                printf("c");
            }
            printf("\n");
        }
        if(i == 7){
            for(int k=1;k<=6;k++){
                printf(" ");
            }
            printf("c");
            printf("\n");
        }
    }
}
*/
/*
ccccccccccc
 ccccccccc
  ccccccc
   ccccc
    ccc
     c
    ccc
   ccccc
  ccccccc
 ccccccccc
ccccccccccc

#include<stdio.h>
int main(){
    for(int i=1;i<=11;i++){
        if(i == 1 || i == 11){
            for(int j=1;j<=11;j++){
                printf("c");

            }
            printf("\n");
        }
        if(i == 2 || i == 10){
            printf(" ");
            for(int j=1;j<=9;j++){
                printf("c");

            }
            printf(" ");
            printf("\n");
        }
        if(i == 3 || i == 9){
            for(int k=1;k<=2;k++){
                printf(" ");
            }
            for(int j=1;j<=7;j++){
                printf("c");

            }
            for(int k=1;k<=2;k++){
                printf(" ");
            }
            printf("\n");
        }
        if(i == 4 || i == 8){
            for(int k=1;k<=3;k++){
                printf(" ");
            }
            for(int j=1;j<=5;j++){
                printf("c");

            }
            for(int k=1;k<=3;k++){
                printf(" ");
            }
            printf("\n");
        }
        if(i == 5 || i == 7){
            for(int k=1;k<=4;k++){
                printf(" ");
            }
            for(int j=1;j<=3;j++){
                printf("c");

            }
            for(int k=1;k<=4;k++){
                printf(" ");
            }
            printf("\n");
        }
        if(i == 6){
            for(int k=1;k<=5;k++){
                printf(" ");
            }
            printf("c");
            for(int k=1;k<=5;k++){
                printf(" ");
            }
            printf("\n");
        }
    }
}
*/
#include<stdio.h>
int main(){
    int l = 0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=i;j++){
           printf("c");
        }
        for(int k = 1;k<=18-l;k++){
            printf(" ");
        }
        l += 2;
        for(int m=1;m<=i;m++){
            printf("c");
        }
        printf("\n");
    }
}