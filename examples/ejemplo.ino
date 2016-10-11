#include <cd5220vfd.h>

vfd vfd;

void setup() {
    vfd.ClearVFD(); //Clears VFD
    vfd.CursorBlink(1); //Blinks cursor, 0 to disable.
}

void loop() {
    vfd.print("1234567890");
    delay(400);
    vfd.Cursor(1, 2); //locate cursor on first character of the second line.
    vfd.print("0987654321");
    

}
