#include<stdio.h>
int main(){
  int x; scanf("%d",&x);
  double sum=0;
  for(int i=1; i<=x; ++i) sum+=i;
  sum=sum*10000/x;
  printf("%.7f\n",sum);
  return 0;
}