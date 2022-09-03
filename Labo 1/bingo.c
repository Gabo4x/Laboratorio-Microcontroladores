#include <pic14/pic12f675.h>
 
void delay (unsigned int tiempo);

typedef unsigned int word;
word __at 0x2007 __CONFIG = (_WDT_OFF & _MCLRE_OFF);

int n;
int count;
int hex1;
int hex2;

void main(void)
{
	unsigned int time = 10;
	unsigned int time2 = 25;

    TRISIO = 0x08;

	if(GP3 == 0)
	{
		switch (n)
		{
		case 0:
			hex1 = 0x00;
			hex2 = 0x20;
			break;
		case 1:
			hex1 = 0x00;
			hex2 = 0x21;
			break;
		case 2:
			hex1 = 0x00;
			hex2 = 0x22;
			break;
		case 3:
			hex1 = 0x00;
			hex2 = 0x23;
			break;
		case 4:
			hex1 = 0x00;
			hex2 = 0x24;
			break;
		case 5:
			hex1 = 0x00;
			hex2 = 0x25;
			break;
		case 6:
			hex1 = 0x00;
			hex2 = 0x26;
			break;
		case 7:
			hex1 = 0x00;
			hex2 = 0x27;
			break;
		case 8:
			hex1 = 0x00;
			hex2 = 0x30;
			break;
		case 9:
			hex1 = 0x00;
			hex2 = 0x31;
			break;
		case 10:
			hex1 = 0x01;
			hex2 = 0x20;
			break;
		case 11:
			hex1 = 0x01;
			hex2 = 0x21;
			break;
		case 12:
			hex1 = 0x01;
			hex2 = 0x22;
			break;
		case 13:
			hex1 = 0x01;
			hex2 = 0x23;
			break;
		case 14:
			hex1 = 0x01;
			hex2 = 0x24;
			break;
		case 15:
			hex1 = 0x01;
			hex2 = 0x25;
			break;
		case 16:
			hex1 = 0x01;
			hex2 = 0x26;
			break;
		case 17:
			hex1 = 0x01;
			hex2 = 0x27;
			break;
		case 18:
			hex1 = 0x01;
			hex2 = 0x30;
			break;
		case 19:
			hex1 = 0x01;
			hex2 = 0x31;
			break;
		case 20:
			hex1 = 0x02;
			hex2 = 0x20;
			break;
		case 21:
			hex1 = 0x02;
			hex2 = 0x21;
			break;
		case 22:
			hex1 = 0x02;
			hex2 = 0x22;
			break;
		case 23:
			hex1 = 0x02;
			hex2 = 0x23;
			break;
		case 24:
			hex1 = 0x02;
			hex2 = 0x24;
			break;
		case 25:
			hex1 = 0x02;
			hex2 = 0x25;
			break;
		case 26:
			hex1 = 0x02;
			hex2 = 0x26;
			break;
		case 27:
			hex1 = 0x02;
			hex2 = 0x27;
			break;
		case 28:
			hex1 = 0x02;
			hex2 = 0x30;
			break;
		case 29:
			hex1 = 0x02;
			hex2 = 0x31;
			break;
		case 30:
			hex1 = 0x03;
			hex2 = 0x20;
			break;
		case 31:
			hex1 = 0x03;
			hex2 = 0x21;
			break;
		case 32:
			hex1 = 0x03;
			hex2 = 0x22;
			break;
		case 33:
			hex1 = 0x03;
			hex2 = 0x23;
			break;
		case 34:
			hex1 = 0x03;
			hex2 = 0x24;
			break;
		case 35:
			hex1 = 0x03;
			hex2 = 0x25;
			break;
		case 36:
			hex1 = 0x03;
			hex2 = 0x26;
			break;
		case 37:
			hex1 = 0x03;
			hex2 = 0x27;
			break;
		case 38:
			hex1 = 0x03;
			hex2 = 0x30;
			break;
		case 39:
			hex1 = 0x03;
			hex2 = 0x31;
			break;
		case 40:
			hex1 = 0x04;
			hex2 = 0x20;
			break;
		case 41:
			hex1 = 0x04;
			hex2 = 0x21;
			break;
		case 42:
			hex1 = 0x04;
			hex2 = 0x22;
			break;
		case 43:
			hex1 = 0x04;
			hex2 = 0x23;
			break;
		case 44:
			hex1 = 0x04;
			hex2 = 0x24;
			break;
		case 45:
			hex1 = 0x04;
			hex2 = 0x25;
			break;
		case 46:
			hex1 = 0x04;
			hex2 = 0x26;
			break;
		case 47:
			hex1 = 0x04;
			hex2 = 0x27;
			break;
		case 48:
			hex1 = 0x04;
			hex2 = 0x30;
			break;
		case 49:
			hex1 = 0x04;
			hex2 = 0x31;
			break;
		case 50:
			hex1 = 0x05;
			hex2 = 0x20;
			break;
		case 51:
			hex1 = 0x05;
			hex2 = 0x21;
			break;
		case 52:
			hex1 = 0x05;
			hex2 = 0x22;
			break;
		case 53:
			hex1 = 0x05;
			hex2 = 0x23;
			break;
		case 54:
			hex1 = 0x05;
			hex2 = 0x24;
			break;
		case 55:
			hex1 = 0x05;
			hex2 = 0x25;
			break;
		case 56:
			hex1 = 0x05;
			hex2 = 0x26;
			break;
		case 57:
			hex1 = 0x05;
			hex2 = 0x27;
			break;
		case 58:
			hex1 = 0x05;
			hex2 = 0x30;
			break;
		case 59:
			hex1 = 0x05;
			hex2 = 0x31;
			break;
		case 60:
			hex1 = 0x06;
			hex2 = 0x20;
			break;
		case 61:
			hex1 = 0x06;
			hex2 = 0x21;
			break;
		case 62:
			hex1 = 0x06;
			hex2 = 0x22;
			break;
		case 63:
			hex1 = 0x06;
			hex2 = 0x23;
			break;
		case 64:
			hex1 = 0x06;
			hex2 = 0x24;
			break;
		case 65:
			hex1 = 0x06;
			hex2 = 0x25;
			break;
		case 66:
			hex1 = 0x06;
			hex2 = 0x26;
			break;
		case 67:
			hex1 = 0x06;
			hex2 = 0x27;
			break;
		case 68:
			hex1 = 0x06;
			hex2 = 0x30;
			break;
		case 69:
			hex1 = 0x06;
			hex2 = 0x31;
			break;
		case 70:
			hex1 = 0x07;
			hex2 = 0x20;
			break;
		case 71:
			hex1 = 0x07;
			hex2 = 0x21;
			break;
		case 72:
			hex1 = 0x07;
			hex2 = 0x22;
			break;
		case 73:
			hex1 = 0x07;
			hex2 = 0x23;
			break;
		case 74:
			hex1 = 0x07;
			hex2 = 0x24;
			break;
		case 75:
			hex1 = 0x07;
			hex2 = 0x25;
			break;
		case 76:
			hex1 = 0x07;
			hex2 = 0x26;
			break;
		case 77:
			hex1 = 0x07;
			hex2 = 0x27;
			break;
		case 78:
			hex1 = 0x07;
			hex2 = 0x30;
			break;
		case 79:
			hex1 = 0x07;
			hex2 = 0x31;
			break;
		case 80:
			hex1 = 0x10;
			hex2 = 0x20;
			break;
		default:
			n = 0;
		}
		if(n>80)
		{
			n = 0;
			delay(time2);
		}else if(n<=80)
		{
			n = n+1;
			delay(time2);
		}
	}
	if(GP3 == 1)
	{
		if(count<=16)
		{
			GPIO = hex1;
			delay(time);
			GPIO = hex2;
			delay(time);
		}
		if(count>16)
		{
			GPIO = 0x11;
			delay(time);
			GPIO = 0x31;
			delay(time);
			count = 0;
		}
	}
	count = count++;
}

void delay(unsigned int tiempo)
{
	unsigned int i;
	unsigned int j;
	for(i=0;i<tiempo;i++)
	  for(j=0;j<1275;j++);
}
