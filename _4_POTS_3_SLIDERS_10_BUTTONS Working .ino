
#include <MIDI.h>


// VALUES FOR ROTARY POTS

int val = 0; 
int lastVal = 0;
int val2 = 0;
int lastVal2 = 0;
int val3 = 0;
int lastVal3 = 0;
int val4 = 0;
int lastVal4 = 0;

//VALUES FOR SLIDER POTS

int sliderval = 0;
int sliderlastVal = 0;
int sliderval2 = 0;
int sliderlastVal2 = 0;
int sliderval3 = 0;
int sliderlastVal3 = 0;


MIDI_CREATE_INSTANCE(HardwareSerial, Serial, midiOut);


void setup() {

// DEFINE DIGITAL PIN AND ADD RESITANCE PULLUP
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);

// DEFINE ANALOG PIN

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  
  
  Serial.begin(115200); 

}

void loop() {


// ROTARY POT DECK 1 PITCH

  val = analogRead(A0) /8;
  if (val != lastVal)
  {
    midiOut.sendControlChange(54, val, 1);
  }
  lastVal = val;



// ROTARY POT DECK 2 PITCH

   val2 = analogRead(A1) / 8;
  if (val2 != lastVal2)
  {
    midiOut.sendControlChange(55, val2, 1);
  }
  lastVal2 = val2;



// ROTARY POT DECK 1 FREQUENCY TABLE

   val3 = analogRead(A2) / 8;
   if (val3 != lastVal3)
   {
    midiOut.sendControlChange(56, val3, 1);
   }
   lastVal3 = val3;
  


// ROTARY POT DECK 2 FREQUENCY TABLE

   val4 = analogRead(A3) / 8;
   if (val4 != lastVal4)
   {
    midiOut.sendControlChange(57, val4, 1);
   }
   lastVal4 = val4;








// SLIDER POT DECK 1 VOLUME

 sliderval = analogRead(A5) / 8;
   if (sliderval != sliderlastVal)
   {
    midiOut.sendControlChange(58, sliderval, 1);
   }
   sliderlastVal = sliderval;



// SLIDER POT DECK 2 VOLUME

 sliderval2 = analogRead(A6) / 8;
   if (sliderval2 != sliderlastVal2)
   {
    midiOut.sendControlChange(59, sliderval2, 1);
   }
   sliderlastVal2 = sliderval2;



// SLIDER POT CROSSFADER

 sliderval3 = analogRead(A7) / 64;
   if (sliderval3 != sliderlastVal3)
   {
    midiOut.sendControlChange(60, sliderval3, 1);
   }
   sliderlastVal3 = sliderval3;


  


// BUTTON 1
  
    if (digitalRead(2) == LOW) { 
      midiOut.sendControlChange(61, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
// BUTTON 2
    if (digitalRead(3) == LOW) { 
      midiOut.sendControlChange(62, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
// BUTTON 3
    if (digitalRead(4) == LOW) { 
      midiOut.sendControlChange(63, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
// BUTTON 4
    if (digitalRead(5) == LOW) { 
      midiOut.sendControlChange(64, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
// BUTTON 5
    if (digitalRead(6) == LOW) { 
      midiOut.sendControlChange(65, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
// BUTTON 6
    if (digitalRead(7) == LOW) { 
      midiOut.sendControlChange(66, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
// BUTTON 7
    if (digitalRead(8) == LOW) { 
      midiOut.sendControlChange(67, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
//BUTTON 8
    if (digitalRead(9) == LOW) { 
      midiOut.sendControlChange(68, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
//BUTTON 8
    if (digitalRead(10) == LOW) { 
      midiOut.sendControlChange(69, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
//BUTTON 9
    if (digitalRead(11) == LOW) { 
      midiOut.sendControlChange(70, 127, 1); // send a MIDI CC -- 56 = note, 127 = velocity, 1 = channel
      delay(100);
    }
}

