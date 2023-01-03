#include<stdio.h>
#include<string.h>
#include<math.h>
void sieve(int n){
     char prime[n+1];
     memset(prime, '1', sizeof(prime));
     for(int p = 2 ; p * p <= n; p++){
          if(prime[p] == '1'){
               for(int i = p * p; i <= n ; i = i + p){
                      prime[i] = '0';
               }
          }
     }
     for(int p = 2 ; p <= n ; p++){
          if(prime[p] == '1'){
               printf("%d ",p);
          }
     }
}
int main(){
     int n;
     scanf("%d",&n);
     sieve(n);
     return 0;
}