#include <stdio.h>
void expression()
{
int p[4] = {1, 1, 0, 0};
int q[4] = {1, 0, 1, 0};
int a3[4], a4[4], a5[4], aa1[4], aa2[4], aa3[4], aaa1[4], aaa2[4], aaa3[4], ch, i;
do (1)
{
printf("Enter your choice for 1) Tautology 2) Contradiction 3) Contingency 4)EXit \n");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("(pvq) v (pv~q)\n");
printf("Truth Table for expression is \n ");
for (int i = 0; i < 4; i++)
{
a3[i] = (p[i] | q[i]);
}
for (int i = 0; i < 4; i++)
{
a4[i] = (p[i] | !q[i]);
}
for (int i = 0; i < 4; i++)
{
a5[i] = (a3[i] | a4[i]);
}
printf("P\t |Q\t |(PvQ)\t |(Pv~Q)\t|(PvQ)v(Pv~Q)\n");
for (int i = 0; i < 4; i++)
{
printf("%d\t | %d\t | %d\t | %d\t | %d\t \n", p[i], q[i], a3[i], a4[i], a5[i]);
}
printf("Givefn expression is Tautology\n");
break;
case 2:
printf("(pvq) ^ (~p ^ ~q)\n");
printf("Truth Table for expression is \n ");
for (int i = 0; i < 4; i++)
{
aa1[i] = p[i] | q[i];
}
for (int i = 0; i < 4; i++)
{
aa2[i] = (!p[i] & !q[i]);
}
for (int i = 0; i < 4; i++)
{
aa3[i] = aa1[i] & aa2[i];
}
printf("P\t |Q\t |(PvQ)\t |(~P^~Q)\t|(PvQ)^(~P^~Q)\n");
for (int i = 0; i < 4; i++)
{
printf("%d\t | %d\t | %d\t | %d\t | %d\t \n", p[i], q[i], aa1[i], aa2[i], aa3[i]);
}
printf("Given expression is Contradiction \n");
break;
case 3:
printf("(p^q) v (pvq)\n");
printf("Truth Table for expression is \n ");
for (int i = 0; i < 4; i++)
{
aaa1[i] = p[i] | q[i];
}
for (int i = 0; i < 4; i++)
{
aaa2[i] = p[i] & q[i];
}
for (int i = 0; i < 4; i++)
{
aaa3[i] = aaa1[i] & aaa2[i];
}
printf("P\t |Q\t |(P^Q)\t |(PvQ)\t | (pvq) ^ (p^q)\n");
for (int i = 0; i < 4; i++)
{
printf("%d\t | %d\t | %d\t | %d\t | %d\t \n", p[i], q[i], aaa1[i], aaa2[i],
aaa3[i]);
}
printf("Given expression is Continency\n");
break;
}
}while(ch!=4)
}
int main()
{
expression();
return 0;
}
