

// RED - D15
// Green - D4
// Blue - D22
// Yellow - D23

// button - D14
// light sensor - D33


#define RED     15
#define GREEN   4
#define BLUE    22
#define YELLOW  23
#define BUTTON  14
#define LIGHT   33
#include <esp32-hal-gpio.h>
//TASK1

#include "Arduino.h"
/*
void setup() {
  pinMode(RED, OUTPUT);
}
void loop() {
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  delay(500);
}
*/


//TASK2
/*void setup(void) {
    pinMode(GREEN, OUTPUT);
}


void loop(void) {
    static int state=LOW;
    static int prevBtn=LOW;
    int btnValue=digitalRead(BUTTON);
    
    if (btnValue==HIGH && prevBtn==LOW){
        state=!state;
        digitalWrite(GREEN,state);
        delay(500);
          if (state == HIGH) {
            Serial.println("Green==1");
          } 
          else {
            Serial.println("Green==0");
          }
          delay(200);
    }
}*/ 



// /****************************************************/
//TASK3
/*void setup() {
  Serial.begin(115200); 
}

void loop() {
  int raw = analogRead(LIGHT); 
  Serial.print("raw="); 
  Serial.print(raw);       
  delay(400); 
}*/

/****************************************************/


//TASK4


/*void setup() {
  Serial.begin(115200);
  pinMode(LIGHT, INPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  int value=analogRead(LIGHT); 
  digitalWrite(BLUE,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,LOW);
  if(value<1024){
    digitalWrite(BLUE,HIGH);
  } else if(value<2048) {
    digitalWrite(GREEN,HIGH);
  } else if (value<3072) {
    digitalWrite(YELLOW,HIGH);
  } else{
    digitalWrite(RED, HIGH);
  }
  Serial.print("band=");
  Serial.println(value);

  delay(50);
}*/



//TASK5
// /****************************************************/

/*void setup() {
  Serial.begin(115200);
  pinMode(LIGHT, INPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  int button = digitalRead(BUTTON);

  if (button == LOW) {
    int value = analogRead(LIGHT);
    Serial.print("snapshot=");
    Serial.println(value);
    digitalWrite(YELLOW, HIGH);
    delay(100);
    digitalWrite(YELLOW, LOW);
    delay(300); 
  }
}*/


// TASK6
// /****************************************************/
void setup(void) {
    pinMode(BLUE, OUTPUT);
    Serial.begin(115200);
}

void loop(void) {
   if (Serial.available()) {
    char c = Serial.read();
    if (c == 'B') {
      digitalWrite(BLUE, HIGH);
    } else if (c == 'b') {
      digitalWrite(BLUE, LOW);
    }
  }
}





