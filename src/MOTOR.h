#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>

class MOTOR {
    public:
        MOTOR();
        ~MOTOR();
        void maju();
        void mundur();
        void kiri();
        void kanan();
        void stop();
        void klakson();
        void klaksonStop();
        void lampuBelakang(int x);
        void lampuDepan(int x);
};
#endif