#include <pic18.h>

// PIC18F4580 Configuration Bit Settings

#pragma config OSC = INTIO7   // Internal oscillator block
#pragma config WDT = OFF      // Watchdog Timer disabled
#pragma config PWRT = OFF     // Power-up Timer disabled
#pragma config PBADEN = OFF   // PORTB<5:0> pins are configured as digital I/O on Reset
#pragma config LVP = OFF      // Single-Supply ICSP disabled
#pragma config MCLRE = ON     // MCLR pin enabled; RE3 input pin disabled

#define LED_PORT PORTB
#define LED_PIN 0

void main() {
    TRISBbits.TRISB0 = 0;   // RB0 as output

    while (1) {
        LED_PORTbits.RB0 = !LED_PORTbits.RB0;   // toggle LED on RB0
        __delay_ms(500);    // wait for 500ms
    }
}
