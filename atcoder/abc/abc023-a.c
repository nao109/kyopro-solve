#include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int x; scanf("%d",&x);
  printf("%d\n",x%10+x/10);
  return 0;
}