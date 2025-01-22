#include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int sum=0;
  rep(i,3){
    int s,e;
    scanf("%d %d",&s,&e);
    sum+=s*e/10;
  }
  printf("%d\n",sum);
  return 0;
}