#include <pic14/pic12f675.h>
 
void delay (unsigned int tiempo);

typedef unsigned int word;
word __at 0x2007 __CONFIG = (_WDT_OFF & _MCLRE_OFF);
 
main()
{
	unsigned int time1 = 20;
	unsigned int time2 = 100;

    TRISIO = 0x08;

	int hexcount1 = 0x00;
	int hexcount2 = 0x20;

	int digitos1 = 8;
	int digitos2 = 8;
	unsigned int i;
	unsigned int j;

	while (1)
	{
		for(j=0;j<digitos1;j++)
		{ 
			for(i=0;i<digitos2;i++)
			{	
				hexcount2 = hexcount2 + 1;
				GPIO = hexcount2;
				delay(time1);
				if(GP3 == 1)
				{
					break;
				}
			}
			hexcount1 = hexcount1 + 1;
			GPIO = hexcount1;
			delay(time1);
			if(GP3 == 1)
				{
					break;
				}
			hexcount2 = 0x20;
		}
		if(GP3 == 1)
				{
					break;
				}
	}
	return 0;
}

void delay(unsigned int tiempo)
{
	unsigned int i;
	unsigned int j;
	for(i=0;i<tiempo;i++)
	  for(j=0;j<1275;j++);
}
