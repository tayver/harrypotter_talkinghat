#include <Servo.h>


#define IR_PIN 6
#define M1_PWM 5 // DC모터1 PWM 핀
#define M1_DIR1 7 // DC모터1 DIR1 핀
#define M1_DIR2 8 
Servo servo1;
Servo servo2;

int servoPin1 = 9; 
int servoPin2=10;
int servoVal1;
int servoVal2; 
int readValue; 
float voltage;
float temp;  


/***********************************************/

void setup() {
   /***********************************************/
    servo1.attach(servoPin1);
    servo2.attach(servoPin2);
    pinMode(M1_PWM, OUTPUT);
    pinMode(M1_DIR1, OUTPUT); 
    pinMode(M1_DIR2, OUTPUT);
    pinMode(IR_PIN, INPUT);
    Serial.begin(115200);
    //Serial.begin(9600);
    servo1.write(0);
    servo2.write(90);
    
  
}

 void loop() {
     
        readValue=analogRead(A3);
        voltage=readValue*5.0/1024.0;
        temp= voltage*100-50;
        delay(2000);


        int value = digitalRead(IR_PIN);
        delay(100);

if(value==1){
  if(temp>=36){

          Serial.print("4");
          delay(10);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(40);
          servo2.write(150);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(500);
          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(5000);

          digitalWrite(M1_DIR1, HIGH);
          digitalWrite(M1_DIR2, LOW);
          analogWrite(M1_PWM, 255);
          delay(5000);
        }
        
        if(temp>=35&&temp<36){
  
          Serial.print("3");
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(500);
          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(5000);


        }
        if(temp>=33&&temp<34){
        
          Serial.print("2");
          delay(10);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(500);
          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(5000);


        }
        if(temp<33){
          Serial.print("1");
          delay(10);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(100);
          servo1.write(0);
          servo2.write(90);
          delay(100);
          servo1.write(30);
          servo2.write(130);
          delay(1500);

          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(500);
          servo1.write(0);
          servo2.write(90);
          delay(500);
          servo1.write(30);
          servo2.write(130);
          delay(5000);

        }
        digitalWrite(M1_DIR1, LOW);
        digitalWrite(M1_DIR2, LOW);
        delay(5000);
}



        
  
        
}
