#include<stdio.h>
#include<string.h>
int main(){
  char a[50],b[50];
  scanf("%s",a);
  scanf("%s",b);
  if(strlen(a)<strlen(b)) printf("%s\n",b);
  else printf("%s\n",a);
  return 0;
}