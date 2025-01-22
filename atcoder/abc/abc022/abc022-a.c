#include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n,s,t,w; scanf("%d %d %d %d",&n,&s,&t,&w);
  int ans=0;
  if(s<=w&&w<=t) ++ans;
  rep(i,n-1){
    int a;
    scanf("%d",&a);
    w+=a;
    if(s<=w&&w<=t) ++ans;
  }
  printf("%d\n",ans);
  return 0;
}