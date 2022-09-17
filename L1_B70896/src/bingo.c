//Trabajo realizado por: Gabriel Barahona Otoya B70896
//Laboratorio de Microcontroladores IE-0624
//Laboratorio #1

#include <pic14/pic12f675.h>
 
void delay (unsigned int tiempo);

typedef unsigned int word;
word __at 0x2007 __CONFIG = (_WDT_OFF & _MCLRE_OFF);

int n;
int count;
int num1;
int num2;

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
			num1 = 0x00;
			num2 = 0x20;
			break;
		case 1:
			num1 = 0x00;
			num2 = 0x21;
			break;
		case 2:
			num1 = 0x00;
			num2 = 0x22;
			break;
		case 3:
			num1 = 0x00;
			num2 = 0x23;
			break;
		case 4:
			num1 = 0x00;
			num2 = 0x24;
			break;
		case 5:
			num1 = 0x00;
			num2 = 0x25;
			break;
		case 6:
			num1 = 0x00;
			num2 = 0x26;
			break;
		case 7:
			num1 = 0x00;
			num2 = 0x27;
			break;
		case 8:
			num1 = 0x00;
			num2 = 0x30;
			break;
		case 9:
			num1 = 0x00;
			num2 = 0x31;
			break;
		case 10:
			num1 = 0x01;
			num2 = 0x20;
			break;
		case 11:
			num1 = 0x01;
			num2 = 0x21;
			break;
		case 12:
			num1 = 0x01;
			num2 = 0x22;
			break;
		case 13:
			num1 = 0x01;
			num2 = 0x23;
			break;
		case 14:
			num1 = 0x01;
			num2 = 0x24;
			break;
		case 15:
			num1 = 0x01;
			num2 = 0x25;
			break;
		case 16:
			num1 = 0x01;
			num2 = 0x26;
			break;
		case 17:
			num1 = 0x01;
			num2 = 0x27;
			break;
		case 18:
			num1 = 0x01;
			num2 = 0x30;
			break;
		case 19:
			num1 = 0x01;
			num2 = 0x31;
			break;
		case 20:
			num1 = 0x02;
			num2 = 0x20;
			break;
		case 21:
			num1 = 0x02;
			num2 = 0x21;
			break;
		case 22:
			num1 = 0x02;
			num2 = 0x22;
			break;
		case 23:
			num1 = 0x02;
			num2 = 0x23;
			break;
		case 24:
			num1 = 0x02;
			num2 = 0x24;
			break;
		case 25:
			num1 = 0x02;
			num2 = 0x25;
			break;
		case 26:
			num1 = 0x02;
			num2 = 0x26;
			break;
		case 27:
			num1 = 0x02;
			num2 = 0x27;
			break;
		case 28:
			num1 = 0x02;
			num2 = 0x30;
			break;
		case 29:
			num1 = 0x02;
			num2 = 0x31;
			break;
		case 30:
			num1 = 0x03;
			num2 = 0x20;
			break;
		case 31:
			num1 = 0x03;
			num2 = 0x21;
			break;
		case 32:
			num1 = 0x03;
			num2 = 0x22;
			break;
		case 33:
			num1 = 0x03;
			num2 = 0x23;
			break;
		case 34:
			num1 = 0x03;
			num2 = 0x24;
			break;
		case 35:
			num1 = 0x03;
			num2 = 0x25;
			break;
		case 36:
			num1 = 0x03;
			num2 = 0x26;
			break;
		case 37:
			num1 = 0x03;
			num2 = 0x27;
			break;
		case 38:
			num1 = 0x03;
			num2 = 0x30;
			break;
		case 39:
			num1 = 0x03;
			num2 = 0x31;
			break;
		case 40:
			num1 = 0x04;
			num2 = 0x20;
			break;
		case 41:
			num1 = 0x04;
			num2 = 0x21;
			break;
		case 42:
			num1 = 0x04;
			num2 = 0x22;
			break;
		case 43:
			num1 = 0x04;
			num2 = 0x23;
			break;
		case 44:
			num1 = 0x04;
			num2 = 0x24;
			break;
		case 45:
			num1 = 0x04;
			num2 = 0x25;
			break;
		case 46:
			num1 = 0x04;
			num2 = 0x26;
			break;
		case 47:
			num1 = 0x04;
			num2 = 0x27;
			break;
		case 48:
			num1 = 0x04;
			num2 = 0x30;
			break;
		case 49:
			num1 = 0x04;
			num2 = 0x31;
			break;
		case 50:
			num1 = 0x05;
			num2 = 0x20;
			break;
		case 51:
			num1 = 0x05;
			num2 = 0x21;
			break;
		case 52:
			num1 = 0x05;
			num2 = 0x22;
			break;
		case 53:
			num1 = 0x05;
			num2 = 0x23;
			break;
		case 54:
			num1 = 0x05;
			num2 = 0x24;
			break;
		case 55:
			num1 = 0x05;
			num2 = 0x25;
			break;
		case 56:
			num1 = 0x05;
			num2 = 0x26;
			break;
		case 57:
			num1 = 0x05;
			num2 = 0x27;
			break;
		case 58:
			num1 = 0x05;
			num2 = 0x30;
			break;
		case 59:
			num1 = 0x05;
			num2 = 0x31;
			break;
		case 60:
			num1 = 0x06;
			num2 = 0x20;
			break;
		case 61:
			num1 = 0x06;
			num2 = 0x21;
			break;
		case 62:
			num1 = 0x06;
			num2 = 0x22;
			break;
		case 63:
			num1 = 0x06;
			num2 = 0x23;
			break;
		case 64:
			num1 = 0x06;
			num2 = 0x24;
			break;
		case 65:
			num1 = 0x06;
			num2 = 0x25;
			break;
		case 66:
			num1 = 0x06;
			num2 = 0x26;
			break;
		case 67:
			num1 = 0x06;
			num2 = 0x27;
			break;
		case 68:
			num1 = 0x06;
			num2 = 0x30;
			break;
		case 69:
			num1 = 0x06;
			num2 = 0x31;
			break;
		case 70:
			num1 = 0x07;
			num2 = 0x20;
			break;
		case 71:
			num1 = 0x07;
			num2 = 0x21;
			break;
		case 72:
			num1 = 0x07;
			num2 = 0x22;
			break;
		case 73:
			num1 = 0x07;
			num2 = 0x23;
			break;
		case 74:
			num1 = 0x07;
			num2 = 0x24;
			break;
		case 75:
			num1 = 0x07;
			num2 = 0x25;
			break;
		case 76:
			num1 = 0x07;
			num2 = 0x26;
			break;
		case 77:
			num1 = 0x07;
			num2 = 0x27;
			break;
		case 78:
			num1 = 0x07;
			num2 = 0x30;
			break;
		case 79:
			num1 = 0x07;
			num2 = 0x31;
			break;
		case 80:
			num1 = 0x10;
			num2 = 0x20;
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
			GPIO = num1;
			delay(time);
			GPIO = num2;
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
