//Leoromo.net stuff, 10/0ct/2016 
//in english because pituco.
//This is my really simple library to use VFD POS displays with CD5220 Protocol
// The displays by default, and it seems to be a normal thing that the text scrolls when you tipe more than 20 characters.
// you can talk to the display using the Serial.write() but i made a vfd.print() to mimic the lcd library,
// as i did in other functions. like setCursor.
// Also important, serial1 is only for Leonardo and Mega i thing, 
//you will have to modify the "Serial1.bla" to "Serial.bla" on a arduino uno.

#ifndef cd5220vfd_h
#define cd5220vfd_h

#include "Arduino.h"

class vfd
{
public:
	vfd();
	void ClearVFD();
	void print(String texto);
	void printchar(int texchar);
	void Cursor(int xs, int ys);
	void CursorBlink(int curbk);
	void SelfTest();
	void Brightness(int brillo);
	
	
private:
	
	};
	
	

#endif
