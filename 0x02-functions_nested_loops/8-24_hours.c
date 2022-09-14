#include "main.h"

/**
 * jack_bauer - time counter
 *
 * description: prints every minute from 00
 * :00 to 23:59
 * Return:0
 */

void jack_bauer(void)
{
	int hr;
	int min;
	int h_rem;
	int m_rem;

	while (hr <= 23)
	{
		while (min <= 59)
		{
			m_rem = min % 10;
			h_rem = hr % 10;
			_putchar(hr / 10 + '0');
			_putchar(h_rem + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(m_rem + '0');
			min++;
			_putchar('\n');
		}
		hr++;
		min = 0;
	}
}


