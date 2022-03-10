#include <mega32a.h>
#include <alcd.h>
#include <delay.h>
#include <stdio.h>
void scan_key ()
{
PORTA=0b110;
if (PINC.0==0) lcd_putsf("1");
else if (PINC.1==0) lcd_putsf("4");
else if (PINC.2==0) lcd_putsf("7") ;
else if (PINC.3==0) lcd_putsf("*");
PORTA=0b101;
if (PINC.0==0) lcd_putsf("2");
else if (PINC.1==0) lcd_putsf("5");
else if (PINC.2==0) lcd_putsf("8");
else if (PINC.3==0) lcd_putsf("0");
PORTA=0b011;
if (PINC.0==0) lcd_putsf("3");
else if (PINC.1==0) lcd_putsf("6");
else if (PINC.2==0) lcd_putsf("9");
else if (PINC.3==0) lcd_putsf("#");
}
void main(void)
{
DDRA=0XFF;
DDRB=0XFF;
DDRC=0X00;
PORTC=0XFF;
lcd_init(16);
while (1)
    {
    // lcd_gotoxy(0,0);
    scan_key();
    delay_ms(300);

    }
}
