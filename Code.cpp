#include <SoftwareSerial.h>     

#define limit_s A0   
#define relayliftup 10 
#define relayliftdown 9 
#define relayfront 8 

void setup() 
{
Serial.begin(9600);
        pinMode(limit_s,INPUT_PULLUP);
        pinMode(relayliftup,OUTPUT);
        pinMode(relayliftdown,OUTPUT);
        pinMode(relayfront,OUTPUT); 

}

void loop() 

      {
       limit();
      }

void limit()
         {
          
          int limit_state=digitalRead(limit_s);
          
          Serial.print(limit_state);
          
          if(limit_state==0)
                      {
                        digitalWrite(relayliftup,HIGH);
                        Serial.println("UP");
                        delay(5000);
                        digitalWrite(relayliftup,LOW);
                        delay(3000);
                        
                        digitalWrite(relayliftdown,HIGH);
                        Serial.println("DOWN");
                        delay(5000);
                        digitalWrite(relayliftdown,LOW);
                        delay(3000);
                        digitalWrite(relayfront,HIGH);
                         Serial.println("FRONT");
                        delay(2000);
                        digitalWrite(relayfront,LOW);
                        delay(3000);
 
                        digitalWrite(relayliftup,HIGH);
                         Serial.println("2 UP");
                        delay(5000);
                        digitalWrite(relayliftup,LOW);
                        delay(3000);
                        digitalWrite(relayliftdown,HIGH);
                        Serial.println("2 DOWN");
                        delay(5000);
                        digitalWrite(relayliftdown,LOW);
                        delay(3000);
                        digitalWrite(relayfront,HIGH);
                         Serial.println("2 FRONT");
                        delay(3000);
                        digitalWrite(relayfront,LOW);
                        delay(3000);
                      }
              else
                  {
                      Serial.println("PRESS BUTTON");
                    digitalWrite(relayliftup,LOW);
                    digitalWrite(relayliftdown,LOW);
                    digitalWrite(relayfront,LOW);
                  }
        }