#include "mraa.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	mraa_gpio_context pin = mraa_gpio_init(13);
	mraa_gpio_dir(pin, MRAA_GPIO_OUT);
	for (;;) {
		mraa_gpio_write(pin, 0);
		sleep(1);
		mraa_gpio_write(pin, 1);
		sleep(1);
	}
	return MRAA_SUCCESS;
}