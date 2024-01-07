#include<stdio.h>
int and(int a[],int b[])
{
    int c[4];
    for(int i=0;i<4;i++)
    {
        c[i]=(a[i]&&b[i]);
    }
printf("Truth Table of AND:\n");
printf("Ain\t Bin\t Cout\n");
    for(int i =0;i<4;i++)
    {
      printf("%d\t %d\t %d\n",a[i],b[i],c[i]);
    }
    printf("\n");
    return 0;
}

int or(int a[],int b[])
{
    int c[4];
    for(int i=0;i<4;i++)
    {
        c[i]=a[i]||b[i];
    }
  printf("Truth Table of OR:\n");
printf("Ain\t Bin\t Cout\n");
    for(int i =0;i<4;i++)
    {
      printf("%d\t %d\t %d\n",a[i],b[i],c[i]);
    }
    printf("\n");
    return 0;
}

int xor(int a[],int b[])
{
    int c[4];
    for(int i=0;i<4;i++)
    {
        c[i]=a[i]^b[i];
    }
  printf("Truth Table of XOR:\n");
printf("Ain\t Bin\t Cout\n");
    for(int i =0;i<4;i++)
    {
      printf("%d\t %d\t %d\n",a[i],b[i],c[i]);
    }
    printf("\n");
    return 0;
}
int xnor(int a[],int b[])
{
    int c[4];
    for(int i=0;i<4;i++)
    {
        c[i]=!(a[i]^b[i]);
    }
   printf("Truth Table of XNOR:\n");
printf("Ain\t Bin\t Cout\n");
    for(int i =0;i<4;i++)
    {
      printf("%d\t %d\t %d\n",a[i],b[i],c[i]);
    }
    printf("\n");
    return 0;
}
int nand(int a[],int b[])
{
    int c[4];
    for(int i=0;i<4;i++)
    {
        c[i]=!(a[i]&&b[i]);
    }
  printf("Truth Table of NAND:\n");
printf("Ain\t Bin\t Cout\n");
    for(int i =0;i<4;i++)
    {
      printf("%d\t %d\t %d\n",a[i],b[i],c[i]);
    }
    printf("\n");
    return 0;
}
int nor(int a[],int b[])
{
    int c[4];
    for(int i=0;i<4;i++)
    {
        c[i]=!(a[i]||b[i]);
    }
  printf("Truth Table of NAND:\n");
printf("Ain\t Bin\t Cout\n");
    for(int i =0;i<4;i++)
    {
      printf("%d\t %d\t %d\n",a[i],b[i],c[i]);
    }
    printf("\n");
    return 0;
}
int not()
{
    int c[4]={0,1};
      printf("Truth Table of NOT:\n");
printf("Ain\t  Cout\n");
    for(int i =0;i<2;i++)
    {
      printf("%d\t %d\n",c[i],!c[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
     int a[4]={0,0,1,1};
    int b[4]={0,1,0,1};
    int ch;
  do{
     printf("Enter choice\n");
     printf("1 for and \n2 for or \n3 for xor\n");    
     printf("4 for xnor \n5 for nand \n6 for nor\n7 for Not\n8 for exit\n");    
   
    scanf("%d",&ch);
 
   switch(ch)
   {
    case 1:
     and(a,b);
    break;

    case 2:
    or(a,b);
    break;

    case 3:
    xor(a,b);
    break;
    case 4:
    xnor(a,b);
    break;
    case 5:
    nand(a,b);
    break;
    case 6:
    nor(a,b);
    break;
    case 7:
    not();
    break;

  case 8:
  printf("exit");
  break;

    default:
    printf("Invalid");
    break;
   }
  }while(ch!=8);
 return 0;
}
