#include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int a,b,c,k,s,t; scanf("%d %d %d %d %d %d",&a,&b,&c,&k,&s,&t);
  int sum=a*s+b*t;
  if(s+t>=k) sum-=c*(s+t);
  printf("%d\n",sum);
  return 0;
}