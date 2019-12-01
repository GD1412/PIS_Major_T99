void setup() {//I declare whether I'm using the pins for input/output 
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
pinMode(9,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,INPUT);
  
  
}

#define C2 65
#define CS2 69
#define D2 73
#define DS2 78
#define E2 82
#define F2 87
#define FS2 93
#define G2 98
#define GS2 104
#define A2 110
#define AS2 117
#define B2 123
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

int asp =9;  //2nd speaker
int atp= 4;  //2nd Triger
int aep=2;   //2nd Echo Pin
void loop() {     //This is the main loop, that keeps repeating
  long duration, distance,duration2,distance2; //Variables to store the values of time and length
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
      tone(sp,C3,140);
      delay(140);
      tone(sp,G3,140);
      delay(140);
      tone(sp,DS3,140);
      delay(140);
      tone(sp,C4,140);
      delay(140);
      tone(sp,DS4,140);
      delay(140);
      tone(sp,C4,140);
      delay(140);
      tone(sp,DS3,140);
      delay(140);
      tone(sp,G3,140);
      delay(140);
    }
      
    else 
      if(distance>6&&distance<10) {
        tone(sp,D3,140);
        delay(140);
        tone(sp,A3,140);
        delay(140);
        tone(sp,F3,140);
        delay(140);
        tone(sp,D4,140);
        delay(140);
        tone(sp,F4,140);
        delay(140);
        tone(sp,D4,140);
        delay(140);
        tone(sp,F3,140);
        delay(140);
        tone(sp,A3,140);
        delay(140);
      }
    else
      if(distance>10&&distance<14)  {
        tone(sp,E3,140);
        delay(140);
        tone(sp,B3,140);
        delay(140);
        tone(sp,G3,140);
        delay(140);
        tone(sp,E4,140);
        delay(140);
        tone(sp,G4,140);
        delay(140);
        tone(sp,E4,140);
        delay(140);
        tone(sp,G3,140);
        delay(140);
        tone(sp,B3,140);
        delay(140);
      }
    else
      if(distance>14&&distance<18)  {
        tone(sp,F3,140);
        delay(140);
        tone(sp,C3,140);
        delay(140);
        tone(sp,GS3,140);
        delay(140);
        tone(sp,F4,140);
        delay(140);
        tone(sp,GS4,140);
        delay(140);
        tone(sp,F4,140);
        delay(140);
        tone(sp,GS3,140);
        delay(140);
        tone(sp,C3,140);
        delay(140);
      }
    else
      if(distance>18&&distance<22)  {
        tone(sp,G3,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
        tone(sp,AS3,140);
        delay(140);
        tone(sp,G4,140);
        delay(140);
        tone(sp,AS4,140);
        delay(140);
        tone(sp,G4,140);
        delay(140);
        tone(sp,AS3,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
      }
    else
      if(distance>22&&distance<26)  {
        tone(sp,A3,140);
        delay(140);
        tone(sp,E3,140);
        delay(140);
        tone(sp,C3,140);
        delay(140);
        tone(sp,A4,140);
        delay(140);
        tone(sp,C4,140);
        delay(140);
        tone(sp,A4,140);
        delay(140);
        tone(sp,C3,140);
        delay(140);
        tone(sp,E3,140);
        delay(140);
      }
    else
      if(distance>26&&distance<30)  {
        tone(sp,B3,140);
        delay(140);
        tone(sp,FS3,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
        tone(sp,B4,140);
        delay(140);
        tone(sp,D4,140);
        delay(140);
        tone(sp,B4,140);
        delay(140);
        tone(sp,D3,140);
        delay(140);
        tone(sp,FS3,140);
        delay(140);
      }
    else
      if(distance>30&&distance<34)  {
        tone(sp,C4,140);
        delay(140);
        tone(sp,G4,140);
        delay(140);
        tone(sp,DS4,140);
        delay(140);
        tone(sp,C5,140);
        delay(140);
        tone(sp,DS5,140);
        delay(140);
        tone(sp,C5,140);
        delay(140);
        tone(sp,DS4,140);
        delay(140);
        tone(sp,G4,140);
        delay(140);
      }
  }

digitalWrite(atp,LOW);
  delayMicroseconds(2);         
  digitalWrite(atp,HIGH);      //This area sends out a pulse from the trigger
  delayMicroseconds(5);
  digitalWrite(atp,LOW);                 
  duration2 = pulseIn(aep, HIGH); //The echo is recieved, and saved as the duration
  distance2 = (duration2/2)/29.1; // We convert the time into distance in centimeters, using the speed of sound and other factors.
  
if(distance2>1&&distance2<35)
  {
    if(distance2>2&&distance2<6)  {      //For a distance2 between 4 and 7, it plays C for 140 milliseconds
      tone(asp,C3,140);
      delay(140);
      tone(asp,G3,140);
      delay(140);
      tone(asp,E3,140);
      delay(140);
      tone(asp,C4,140);
      delay(140);
      tone(asp,E4,140);
      delay(140);
      tone(asp,C4,140);
      delay(140);
      tone(asp,E3,140);
      delay(140);
      tone(asp,G3,140);
      delay(140);
    }
      
    else 
      if(distance2>6&&distance2<10) {
        tone(asp,D3,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
        tone(asp,D4,140);
        delay(140);
        tone(asp,FS4,140);
        delay(140);
        tone(asp,D4,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
      }
    else
      if(distance2>10&&distance2<14)  {
        tone(asp,E3,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
        tone(asp,GS3,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,GS4,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,GS3,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
      }
    else
      if(distance2>14&&distance2<18)  {
        tone(asp,F3,140);
        delay(140);
        tone(asp,C3,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
        tone(asp,F4,140);
        delay(140);
        tone(asp,A4,140);
        delay(140);
        tone(asp,F4,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
        tone(asp,C3,140);
        delay(140);
      }
    else
      if(distance2>18&&distance2<22)  {
        tone(asp,G3,140);
        delay(140);
        tone(asp,D3,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
        tone(asp,B4,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
        tone(asp,D3,140);
        delay(140);
      }
    else
      if(distance2>22&&distance2<26)  {
        tone(asp,A3,140);
        delay(140);
        tone(asp,E3,140);
        delay(140);
        tone(asp,CS3,140);
        delay(140);
        tone(asp,A4,140);
        delay(140);
        tone(asp,CS4,140);
        delay(140);
        tone(asp,A4,140);
        delay(140);
        tone(asp,CS3,140);
        delay(140);
        tone(asp,E3,140);
        delay(140);
      }
    else
      if(distance2>26&&distance2<30)  {
        tone(asp,B3,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
        tone(asp,DS3,140);
        delay(140);
        tone(asp,B4,140);
        delay(140);
        tone(asp,DS4,140);
        delay(140);
        tone(asp,B4,140);
        delay(140);
        tone(asp,DS3,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
      }
    else
      if(distance2>30&&distance2<34)  {
        tone(asp,C4,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,C5,140);
        delay(140);
        tone(asp,E5,140);
        delay(140);
        tone(asp,C5,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
      }
  }


if(distance2>1&&distance2<35)
  {
    if(distance2>2&&distance2<6)  {      //For a distance2 between 4 and 7, it plays C for 140 milliseconds
      tone(asp,C3,140);
      delay(140);
      tone(asp,G3,140);
      delay(140);
      tone(asp,E3,140);
      delay(140);
      tone(asp,C4,140);
      delay(140);
      tone(asp,E4,140);
      delay(140);
      tone(asp,C4,140);
      delay(140);
      tone(asp,E3,140);
      delay(140);
      tone(asp,G3,140);
      delay(140);
    }
      
    else 
      if(distance2>6&&distance2<10) {
        tone(asp,D3,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
        tone(asp,D4,140);
        delay(140);
        tone(asp,FS4,140);
        delay(140);
        tone(asp,D4,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
      }
    else
      if(distance2>10&&distance2<14)  {
        tone(asp,E3,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
        tone(asp,GS3,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,GS4,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,GS3,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
      }
    else
      if(distance2>14&&distance2<18)  {
        tone(asp,F3,140);
        delay(140);
        tone(asp,C3,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
        tone(asp,F4,140);
        delay(140);
        tone(asp,A4,140);
        delay(140);
        tone(asp,F4,140);
        delay(140);
        tone(asp,A3,140);
        delay(140);
        tone(asp,C3,140);
        delay(140);
      }
    else
      if(distance2>18&&distance2<22)  {
        tone(asp,G3,140);
        delay(140);
        tone(asp,D3,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
        tone(asp,B4,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
        tone(asp,B3,140);
        delay(140);
        tone(asp,D3,140);
        delay(140);
      }
    else
      if(distance2>22&&distance2<26)  {
        tone(asp,A3,140);
        delay(140);
        tone(asp,E3,140);
        delay(140);
        tone(asp,CS3,140);
        delay(140);
        tone(asp,A4,140);
        delay(140);
        tone(asp,CS4,140);
        delay(140);
        tone(asp,A4,140);
        delay(140);
        tone(asp,CS3,140);
        delay(140);
        tone(asp,E3,140);
        delay(140);
      }
    else
      if(distance2>26&&distance2<30)  {
        tone(asp,B3,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
        tone(asp,DS3,140);
        delay(140);
        tone(asp,B4,140);
        delay(140);
        tone(asp,DS4,140);
        delay(140);
        tone(asp,B4,140);
        delay(140);
        tone(asp,DS3,140);
        delay(140);
        tone(asp,FS3,140);
        delay(140);
      }
    else
      if(distance2>30&&distance2<34)  {
        tone(asp,C4,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,C5,140);
        delay(140);
        tone(asp,E5,140);
        delay(140);
        tone(asp,C5,140);
        delay(140);
        tone(asp,E4,140);
        delay(140);
        tone(asp,G4,140);
        delay(140);
      }
  }
}
