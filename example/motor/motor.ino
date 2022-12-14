#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <MOTOR.h>
LiquidCrystal_I2C lcd(0x27,20,4); 

MOTOR motor;

char t;

void setup() {
  lcd.init();             //LCD
  lcd.backlight();
  lcd.setCursor(7,0);
  lcd.print("DKP");
  lcd.setCursor(1,1);
  lcd.print("Mikrokontroller");
  Serial.begin(9600);

}

void loop() {
  
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }

  if (t == 'F') {          //Maju
    motor.maju();
  }

  else if (t == 'B') {    //Mundur
    motor.mundur();
  }

  else if (t == 'L') {    //Belok kiri
    motor.kiri();
  }

  else if (t == 'R') {    //Belok kanan
    motor.kanan();
  }

  else if (t == 'S') {    //STOP
    motor.stop();
  }

  else if (t == 'V') {    //Klakson
    motor.klakson();
  }
  else if (t == 'v') {
    motor.klaksonStop;
  }

  else if (t == 'W') {    //Lampu depan
    motor.lampuDepan(1);
  }
  else if (t == 'w') {
    motor.lampuDepan(0);
  }

  else if (t == 'U') {    //Lampu belakang
    motor.lampuBelakang(1);
  }
  else if (t == 'u') {
    motor.lampuBelakang(0);
  }

  else if (t == 'X') {    //Lampu hazard berhenti
    motor.lampuBelakang(1);
    delay (500);
    motor.lampuBelakang(0);
    delay (500);
  }
  else if (t == 'x') {
    lampuBelakang(0);
  }

    else if (t == 'q') {    //Lampu hazard wiuwiu
    motor.lampuBelakang(1);
    motor.lampuDepan(1)
    delay (300);
    motor.lampuBelakang(0);
    motor.lampuDepan(0)
    delay (300);
  }

  delay(100);
}