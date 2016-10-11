# cd5220vfd
Library for cd5220 compatible VFD POS displays.


Really simple thing, done just for simplicity, i have a lot of stuff to fix (the warnings in compile) and some to add, like pixel control, hardware scrolling control and other thinks like that, but for now is working.



Example of usage.

#include <cd5220vfd.h>

vfd vfd;

void setup() {

}

void loop() {
  vfd.ClearVFD(); //Clears VFD
  vfd.CursorBlink(1); //Blinks cursor, 0 to disable.
    vfd.print("1234567890");
    delay(400);
    vfd.Cursor(1, 2); //locate cursor on first character of the second line.
    vfd.print("0987654321");
    
    
   

}
