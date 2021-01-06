#include <stdio.h>
int main()
{
    int rs2000,rs500,rs100,rs50,rs20,rs10,rs5,rs2,rs1; 
    rs2000=rs500=rs100=rs50=rs20=rs10=rs5=rs2=rs1=0;
    int amount;
    scanf("%d",&amount);
    if(amount>=2000)
    {
       rs2000 = amount/2000;
       amount = amount - rs2000*2000;
    }
   if(amount>=500)
    {
       rs500 = amount/500;
       amount = amount - rs500*500;
    }
   if(amount>=100)
    {
       rs100 = amount/100;
       amount = amount - rs100*100;
    }
    if(amount>=50)
    {
       rs50 = amount/50;
       amount = amount - rs50*50;
    }
     if(amount>=20)
    {
       rs20 = amount/20;
       amount = amount - rs20*20;
    }
     if(amount>=10)
    {
       rs10 = amount/10;
       amount = amount - rs10*10;
    }
      if(amount>=5)
    {
       rs5 = amount/5;
       amount = amount - rs5*5;
    }
  if(amount>=2)
    {
       rs2 = amount/2;
       amount = amount - rs2*2;
    }
     if(amount>=1)
    {
       rs1 = amount;
    }
    printf("%d %d %d %d %d %d %d %d %d",rs2000,rs500,rs100,rs50,rs20,rs10,rs5,rs2,rs1);
    return 0;
}