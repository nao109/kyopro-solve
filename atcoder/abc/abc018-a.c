#include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a<b&&b<c) printf("3\n2\n1\n");
  else if(a<c&&c<b) printf("3\n1\n2\n");
  else if(b<a&&a<c) printf("2\n3\n1\n");
  else if(b<c&&c<a) printf("1\n3\n2\n");
  else if(c<a&&a<b) printf("2\n1\n3\n");
  else if(c<b&&b<a) printf("1\n2\n3\n");
  return 0;
}