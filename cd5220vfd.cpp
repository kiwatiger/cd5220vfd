//Leoromo.net stuff, 10/0ct/2016 
//in english because pituco.
//This is my really simple library to use VFD POS displays with CD5220 Protocol
// The displays by default, and it seems to be a normal thing that the text scrolls when you tipe more than 20 characters.
// you can talk to the display using the Serial.write() but i made a vfd.print() to mimic the lcd library,
// as i did in other functions. like setCursor.
// Also important, serial1 is only for Leonardo and Mega i thing, 
//you will have to modify the "Serial1.bla" to "Serial.bla" on a arduino uno.

#include "Arduino.h"
#include "cd5220vfd.h"

void vfd::print(int texto) {
  int textoa;
  textoa = (texto);
 Serial1.print(textoa); 
} // This is only for like compatibility or something guataever.

vfd::vfd()
{
Serial1.begin(9600);

}

void vfd::ClearVFD(){
 Serial1.write(0x0C);  
}
//cleans screen


void vfd::Cursor(int xs, int ys) { 
  int xss;
  xss = ("0x0",xs);

  int yss;
  yss = ("0x0",ys);
    Serial1.write(0x1B); 
    Serial1.write(0x6C);
    Serial1.write(xss);
    Serial1.write(yss);
} // with this wea we define the cursor location, X can be anything from 1 to 20 and Y can be 1 or 2 duh.

void vfd::CursorBlink(int curbk) {
  int curbkk;
  curbkk = ("0x0",curbk);
  byte curs[] = {0x1B, 0x5F, curbkk};
 Serial1.write(curs, sizeof(curs));

} //flashing cursor, 1 enables, 0 disables it.


void vfd::SelfTest() {
  byte selftest[] = {0x1F, 0x40};
  Serial1.write(selftest, sizeof(selftest));
} //selftest? supuesteichonmente, it just shows lines and blocks on the screen, Still a valid test mode i think.



void vfd::Brightness(int brillo) {
  int brilloa;
  brilloa = ("0x0",brillo);
  byte brillomsg[] = {0x1B, 0x2A, brilloa };
    Serial1.write(brillomsg, sizeof(brillomsg)); 
} // and with this wea you can define brightness, 1 to 4 where 1 is the lowest and 4 is the default "Hi"
