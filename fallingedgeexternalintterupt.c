#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>

ISR(INT0_vect)
{
	//toggle led when pressed
	PORTB ^= (1 << PORTB5);
}

void external_interrupt_INT0_init()
{
    //step 1: configuring/ Enabling INT0 as Interrupt
    EIMSK |= (1 << INT0);

    //step 2: configuring PD2 as input for external interrupt
    DDRD &= ~(1 << DDD2);

    //step 3: configuring interrupt trigger: falling edge
    EICRA |= (1 << ISC01);
    EICRA &= ~(1 << ISC00);

    //step 5: enabling global interrupt
    sei();
}

void gpio_init()
{
	//configuring PB5 as output
	DDRB |= (1 << DDB5);
}

int main(void)
{
	gpio_init();
	external_interrupt_INT0_init();

	while (1)
	{
	}
}
