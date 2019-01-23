
#include <LedControl.h>

LedControl matrix(12,11,10,1);


void setup() {
  // 

  
 Serial.begin(9600);
 
 pinMode(7,INPUT);
 pinMode(4,INPUT);
 pinMode(2,INPUT);


 matrix.shutdown(0, false);
 

}

void loop() {
  // 

  int buttonLeft = digitalRead(7);
  int buttonRight = digitalRead(4);
  int buttonWarning = digitalRead(2);
  
  Serial.println(buttonLeft);
  

  matrix.clearDisplay(0);
  
  if(buttonLeft == 1) { 
    
    matrix.setLed(0, 0, 3, true);
    matrix.setLed(0, 1, 2, true);
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 2, 1, true);
    matrix.setLed(0, 2, 2, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 3, 0, true);
    matrix.setLed(0, 3, 1, true);
    matrix.setLed(0, 3, 2, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 3, 5, true);
    matrix.setLed(0, 3, 6, true);
    matrix.setLed(0, 4, 0, true);
    matrix.setLed(0, 4, 1, true);
    matrix.setLed(0, 4, 2, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 4, 5, true);
    matrix.setLed(0, 4, 6, true);
    matrix.setLed(0, 5, 1, true);
    matrix.setLed(0, 5, 2, true);
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 6, 2, true);
    matrix.setLed(0, 6, 3, true);
    matrix.setLed(0, 7, 3, true);

    delay(500);

    matrix.clearDisplay(0);
    

    delay(500);
}

 if(buttonRight == 1) { 
    
    matrix.setLed(0, 0, 3, true);
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 1, 4, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 2, 4, true);
    matrix.setLed(0, 2, 5, true);
    matrix.setLed(0, 3, 0, true);
    matrix.setLed(0, 3, 1, true);
    matrix.setLed(0, 3, 2, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 3, 5, true);
    matrix.setLed(0, 3, 6, true); 
    matrix.setLed(0, 4, 0, true);
    matrix.setLed(0, 4, 1, true);
    matrix.setLed(0, 4, 2, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 4, 5, true);
    matrix.setLed(0, 4, 6, true);   
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 5, 4, true);
    matrix.setLed(0, 5, 5, true);
    matrix.setLed(0, 6, 3, true);
    matrix.setLed(0, 6, 4, true);
    matrix.setLed(0, 7, 3, true);

    delay(500);

    matrix.clearDisplay(0);
    

    delay(500);
   
}

   if(buttonWarning == 1) { 
    
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 1, 4, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 2, 4, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 5, 4, true);    
   
    matrix.setLed(0, 7, 3, true);
    matrix.setLed(0, 7, 4, true);

    delay(1000);

    matrix.clearDisplay(0);
    

    delay(500);
   
}

 
 
  
 
  
  
}
