//从下面的 6 张卡片中选出 4 张，组成两个两位数，使它们的差是35。你能想出几种选法？ 1  2  3  6  7  8
#include<stdio.h>
int ten(int x,int y)
{
	int sum=x*10+y;
	return sum;
}
int panduan(int x,int y,int a,int b)
{
	int sum1=ten(x,y);
	int sum2=ten(a,b);
	if(35==(sum1-sum2))
	{
		printf("%d-%d=35\n",sum1,sum2);
	}
}
int main()
{
	int a1,a2;
	int i1,i2,i3,i4;
	for(i1=1;i1<=8;i1++)
	{
		if(i1==4||i1==5) continue;
		for(i2=1;i2<=8;i2++)
	    {
		    if(i2==4||i2==5) continue;
		    if(i2==i1) continue;
		    a1=ten(i1,i2); 
            for(i3=1;i3<=8;i3++)
            {
        	    if(i3==4||i3==5||i3==i4) continue;
        	    if(i3==i1||i3==i2) continue;
        	    for(i4=1;i4<=8;i4++)
        	    {
        		if(i4==4||i4==5) continue;
        		if(i3==i4||i4==i2||i4==i1) continue;
        		a2=ten(i3,i4);
        		panduan(i1,i2,i3,i4);
			    }
		    }
	    }
	}
	return 0;
}