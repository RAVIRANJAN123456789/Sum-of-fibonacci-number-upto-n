#include<stdio.h>
int fibbonaci(int n)
{
  int num;
  if(n==0)
  {

    return 0;
  }
  else if(n==1)
  {
      return 1;
  }
  else if(n>1)
  {
      return fibbonaci(n-1)+fibbonaci(n-2);
  }


}
int main(int argc,char* argv)
{
    int n;int sum=0;int i;
    printf("\n enter the no \n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum=sum+fibbonaci(i);
    }


    printf("%d is the fibbonaci no",sum);



    return 0;
  }
