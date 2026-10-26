#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int x)	//@11.0592MHz
{
	unsigned char data i, j;
	while(x)
	{
	_nop_();
	_nop_();
	_nop_();
	i = 11;
	j = 190;
	do
	{
		while (--j);
	} while (--i);
		x--;
	}
}


void main()
{
	unsigned int num = 0,mid = 0,i = 0;
	while(1)
	{
			if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0)
			{}
			Delay(20);
			mid++;
			P2=~mid;
		}
	}

}