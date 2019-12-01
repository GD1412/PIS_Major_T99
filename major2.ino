void setup() {//I declare whether I'm using the pins for input/output 
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
}

#define C3 131
#define CS3 139
#define D3 147
#define DS3 156
#define E3 165
#define F3 175
#define FS3 185
#define G3 196
#define GS3 208
#define A3 220
#define AS3 233
#define B3 247
#define C4 262
#define CS4 277
#define D4 294
#define DS4 311
#define E4 330
#define F4 349
#define FS4 370
#define G4 392
#define GS4 415
#define A4 440
#define AS4 466
#define B4 494
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 698
#define FS5 740
#define G5 784
#define GS5 831
#define A5 880
#define AS5 932
#define B5 988
#define C6 1047
#define CS6 1109
#define D6 1175
#define DS6 1245
#define E6 1319
#define F6 1397
#define FS6 1480
#define G6 1568
#define GS6 1661
#define A6 1760
#define AS6 1865
#define B6 1976

int sp = 10;      //Speaker Pin
int tp = 7;       //Trigger Pin
int ep = 8;       // Echo Pin

void loop() {     //This is the main loop, that keeps repeating
  long duration, distance; //Variables to store the values of time and length
  digitalWrite(tp,LOW);
  delayMicroseconds(2);         
  digitalWrite(tp,HIGH);      //This area sends out a pulse from the trigger
  delayMicroseconds(5);
  digitalWrite(tp,LOW);                 
  duration = pulseIn(ep, HIGH); //The echo is recieved, and saved as the duration
  distance = (duration/2)/29.1; // We convert the time into distance in centimeters, using the speed of sound and other factors.
  if(distance>1&&distance<35)
  {
    if(distance>2&&distance<6)  {      //For a distance between 4 and 7, it plays C for 140 milliseconds
      tone(sp,E3,140);
      delay(140);
      tone(sp,C3,140);
      delay(140);
      tone(sp,G3,140);
      delay(140);
      tone(sp,C3,140);
      delay(140);
    }
      
    else 
      if(distance>6&&distance<10) {
        tone(sp,FS3,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
        tone(sp,A3,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
      }
    else
      if(distance>10&&distance<14)  {
        tone(sp,GS3,140);
        delay(140);
        tone(sp,E3,140);
        delay(140);
        tone(sp,B3,140);
        delay(140);
        tone(sp,E3,140);
        delay(140);
      }
    else
      if(distance>14&&distance<18)  {
        tone(sp,A3,140);
        delay(140);
        tone(sp,F3,140);
        delay(140);
        tone(sp,C3,140);
        delay(140);
        tone(sp,F3,140);
        delay(140);
      }
    else
      if(distance>18&&distance<22)  {
        tone(sp,B3,140);
        delay(140);
        tone(sp,G3,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
        tone(sp,G3,140);
        delay(140);
      }
    else
      if(distance>22&&distance<26)  {
        tone(sp,CS3,140);
        delay(140);
        tone(sp,A3,140);
        delay(140);
        tone(sp,E3,140);
        delay(140);
        tone(sp,A3,140);
        delay(140);
      }
    else
      if(distance>26&&distance<30)  {
        tone(sp,DS3,140);
        delay(140);
        tone(sp,B3,140);
        delay(140);
        tone(sp,FS3,140);
        delay(140);
        tone(sp,B3,140);
        delay(140);
      }
    else
      if(distance>30&&distance<34)  {
        tone(sp,E4,140);
        delay(140);
        tone(sp,C4,140);
        delay(140);
        tone(sp,G4,140);
        delay(140);
        tone(sp,C4,140);
        delay(140);
      }
  }

}
