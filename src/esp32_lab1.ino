

// RED - D15
// Green - D4
// Blue - D22
// Yellow - D23

// button - D14
// light sensor - D33


int Green=4;
int Yellow =23;
int Blue =22;
int RED=15;
int btn=14;
int LIGHT =33;
#include <esp32-hal-gpio.h>
int state = LOW;
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
    pinMode(Green, OUTPUT);
}


void loop(void) {
    int btnValue=digitalRead(btn);
    if (btnValue==HIGH)
    {
        state=!state;
        digitalWrite(Green,state);
        delay(500);
        Serial.println("Green==1");
    }
    if (state == HIGH) {
      Serial.println("Green ON");
    } else {
      Serial.println("Green OFF");
    }

    delay(2000);
}*/



// /****************************************************/
//TASK3
/*void setup() {
  Serial.begin(115200); 
}

void loop() {
  int raw = analogRead(LIGHT); 
  Serial.println(raw);       
  delay(500); 
}*/

/****************************************************/


//TASK4


/*void setup() {
  Serial.begin(115200);
  pinMode(LIGHT, INPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  int value=analogRead(LIGHT); 
  digitalWrite(Blue,LOW);
  digitalWrite(Green,LOW);
  digitalWrite(Yellow,LOW);
  digitalWrite(RED,LOW);
  if(value<1024){
    digitalWrite(Blue,HIGH);
  } else if(value<2048) {
    digitalWrite(Green,HIGH);
  } else if (value<3072) {
    digitalWrite(Yellow,HIGH);
  } else{
    digitalWrite(RED, HIGH);
  }
  Serial.print(value);

  delay(5000);
}*/



//TASK5
// /****************************************************/
/*
void setup() {
  Serial.begin(115200);
  pinMode(LIGHT, INPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int button = digitalRead(btn);

  if (button == LOW) {
    int value = analogRead(LIGHT);
    Serial.print("snapshot=");
    Serial.println(value);
    digitalWrite(Yellow, HIGH);
    delay(100);
    digitalWrite(Yellow, LOW);
    delay(300); 
  }
}
*/

// TASK6
// /****************************************************/
void setup(void) {
    
}

void loop(void) {

}





