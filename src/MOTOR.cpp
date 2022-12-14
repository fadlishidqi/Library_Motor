#include "MOTOR.h"
const int in1 = 13,
          in2 = 12,
          in3 = 11,
          in4 = 10;
          lampuBK = 7;
          lampuBR = 6;
          lampuD  = 8;
          buzzer  = 9;

MOTOR::MOTOR(){
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(lampuBK, OUTPUT);
    pinMode(lampuBR, OUTPUT);
    pinMode(lampuD, OUTPUT);
    pinMode(buzzer, OUTPUT);
}

MOTOR::~MOTOR(){}

void MOTOR::maju(){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    motor.lampuBelakang(1);
}

void MOTOR::mundur(){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    MOTOR.lampuBelakang(1);
    MOTOR.klakson();
}

void MOTOR::kiri(){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(lampuBK, HIGH);
}

void MOTOR::kanan(){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(lampuBR, HIGH);
}

void MOTOR::stop(){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

void MOTOR::klakson(){
    tone(buzzer, 1000);
}

void MOTOR::klaksonStop(){
    noTone(buzzer);
}

void MOTOR::lampuDepan(int x){
    digitalWrite(lampuD, x);
}

void MOTOR::lampuBelakang(int x){
    digitalWrite(lampuBK, x);
    digitalWrite(lampuBR, x);
}

