#include "main.h"
/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer
 *		, starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int hours;
	int minute;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
