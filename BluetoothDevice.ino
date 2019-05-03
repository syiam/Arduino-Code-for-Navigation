//#include<SoftwareSerial.h>
String data ; //Variable for storing received data
//static int count=0;
const int ledPin1 =  12;
const int ledPin2 =  8;
const int ledPin3 =  9;
const int ledPin4 =  10;
int ledState;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
//unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
//const long interval = 1000;  
void straightDirection(String);
void leftDirection(String);
void rightDirection(String);
void uturnDirection(String);
void destination(String);

void setup()
{
   
   Serial.begin(9600);
   pinMode(12, OUTPUT); //Sets digital pin 12 as output pin
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   
   
   
}
void loop()
{ 
  ledState=HIGH;
  if(Serial.available() > 0)  // Send data only when you receive data:
   {
       Serial.print("new request");
      data = Serial.readString(); //Read the  incoming  data and store it into variable data
      if(data.charAt(0)=='s')
      straightDirection(data);
      if(data.charAt(0)=='l')
      leftDirection(data);
      if(data.charAt(0)=='r')
      rightDirection(data);
      if(data.charAt(0)=='u')
      uturnDirection(data);
      if(data.charAt(0)=='d')
      destination(data);
     }
     
     
}  

void straightDirection(String input){
       Serial.print("Straight");
            
         if(input.equals("s1")){ 
          for(int i=0;i<1;i++){                                                                                                                                                                                                                                                                   
          

    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=HIGH;
    delay(2000);
    }}

    if(input.equals("s2")){
           for(int i=0;i<2;i++)
           {
           

    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=HIGH;
    delay(2000);
           }}

          if(input.equals("s3")){
             for(int i=0;i<3;i++) {
          
    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=HIGH;
    delay(2000);
   
          }}
       
     }

     void leftDirection(String input){
         Serial.print("left");

         if(input.equals("l0")){
          digitalWrite(ledPin1, ledState);
     digitalWrite(ledPin2, ledState);
    
    
    ledState=LOW ;

    delay(4000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    
         }
         
         if(input.equals("l1")){
         for(int i=0;i<1;i++){ 
          

    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    ledState=HIGH;
    delay(2000);
   
          
           }}

          if(input.equals("l2")){
             for(int i=0;i<2;i++)
           {
          
    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    
    ledState=HIGH;
    delay(2000);
   
     
          
          }}

          if(input.equals("l3")){
             for(int i=0;i<3;i++) {
           //while(i<=3){
          
    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    ledState=HIGH;
    delay(2000);
    
     

        }}
       
     }

     void rightDirection(String input){

       if(input.equals("r0")){
          digitalWrite(ledPin1, ledState);
         digitalWrite(ledPin2, ledState);
    
         ledState=LOW ;

        delay(4000);
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState);
    digitalWrite(ledPin2, ledState);
    
    
         }
         Serial.print("right");
         if(input.equals("r1")){
            for(int i=0;i<1;i++){ 
          
    // set the LED with the ledState of the variable:
    
    
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=HIGH;
    delay(2000);
    
     
           }}

          if(input.equals("r2")){
             for(int i=0;i<2;i++)
           {
          
         
    // set the LED with the ledState of the variable:
    
    
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=HIGH;
    delay(2000);
    
          }}

          if(input.equals("r3")){
             for(int i=0;i<3;i++) {
         
    // set the LED with the ledState of the variable:
    
   
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=LOW ;

    delay(2000);
    
    // set the LED with the ledState of the variable:
    
    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin4, ledState);
    
    ledState=HIGH;
    delay(2000);
    
    
          }}
       
     }

     void uturnDirection(String input){

        if(input.equals("u0")){
         digitalWrite(ledPin1, ledState);
         digitalWrite(ledPin2, ledState);
         digitalWrite(ledPin3, ledState);
         digitalWrite(ledPin4, ledState);
    
    
         ledState=LOW ;

        delay(4000);
    
    // set the LED with the ledState of the variable:
         digitalWrite(ledPin1, ledState);
         digitalWrite(ledPin2, ledState);
         digitalWrite(ledPin3, ledState);
         digitalWrite(ledPin4, ledState);
        }
    
         if(input.equals("u1")){
          digitalWrite(12,HIGH);
          delay(100);
          digitalWrite(12,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(9,HIGH);
          delay(100);
          digitalWrite(9,LOW);
          delay(100);
          digitalWrite(10,HIGH);
          delay(100);
          digitalWrite(10,LOW);
          }

          if(input.equals("u2")){
             int i=1;
           while(i<=2){
          digitalWrite(12,HIGH);
          delay(100);
          digitalWrite(12,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(9,HIGH);
          delay(100);
          digitalWrite(9,LOW);
          delay(100);
          digitalWrite(10,HIGH);
          delay(100);
          digitalWrite(10,LOW);
          i++; 
          delay(100);}}

          if(input.equals("u3")){
             int i=1;
           while(i<=3){
          digitalWrite(12,HIGH);
          delay(1000);
          digitalWrite(12,LOW);
          delay(1000);
          digitalWrite(8,HIGH);
          delay(1000);
          digitalWrite(8,LOW);
          delay(1000);
          digitalWrite(9,HIGH);
          delay(1000);
          digitalWrite(9,LOW);
          delay(1000);
          digitalWrite(10,HIGH);
          delay(1000);
          digitalWrite(10,LOW);
          i++; 
          delay(1000);}}
       }

    void destination(String input){
      Serial.print("destination");
        if(input.equals("d0")){

          }}
        
     
