#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int x)	
{
	unsigned char data i, j;
		while(x)
		{
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
		while(1)
		{
			if(P3_1==0)
			{
				Delay(20);
				while(P3_1==0)
				Delay(20);
				P2_0=~P2_0;
			}
		
		}
	
}