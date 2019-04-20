#include<stdio.h>
#include<string.h>
int main()
{
  char a[]={'A','s','D','D','D','F','*','6'};
  int flag=0,len=4;
  if(len<8)
  {
    flag=1;
    printf("Length is too short");
  }
  else if(flag!=1)
  {
    while(1)
    {
      for(int i=0;i<8;i++)
      {
        if(a[i]>=65&&a[i]<91)
        {
          flag=0;
          break;
        }
        else
        {
          flag=2;
        }
      }
      if(flag==2)
      {
        printf("No Uppercase Found");
        break;
      }
      for(int i=0;i<8;i++)
      {
        if(a[i]>=32&&a[i]<=47||a[i]>=58&&a[i]<=64)
        {
          flag=0;
          break;
        }
        else
        {
          flag=3;
        }
      }
      if(flag==3)
      {
        printf("No Special Character Found");
        break;
      }
      for(int i=0;i<8;i++)
      {
        if(a[i]>=48&&a[i]<=57)
        {
          flag=0;
          break;
        }
        else
        {
          flag=4;
        }
      }
      if(flag==4)
      {
        printf("No Numerical Found");
        break;
      }
      for(int i=0;i<8;i++)
      {
        if(a[i]>=97&&a[i]<=122)
        {
          flag=0;
          break;
        }
        else
        {
          flag=5;
        }
      }
      if(flag==5)
      {
        printf("No lower case found");
        break;
      }
      if(flag==0)
      {
        printf("Congrats password set succesfully");
        break;
      }
    }
  }
  else
  {
    printf("Invalid Input");
  }
return 0;
}
