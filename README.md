# # Electrical Tasks week 3
**Task 1: ON/OFF Switch using arduino simulation**  
(https://www.tinkercad.com/things/e5iy0LLD7KT)

**1. Make an account in TinkerCAD for Arduino simulations: https://www.tinkercad.com/**

  1) Click Sign Up on the Tinkercad homepage.
  2) Choose your country from the drop-down list.
  3) Enter your birthday. 
  4) Click the Next button.
  5) Add your email address and a password, accept the Tinkercad terms of service, and click Create Account.
  
  
**2. Building the Servo Motor:**

  1) Click on create new Circuit.
  2) From the search tool, get:
  
    i. Breadboard (small)
    
    ii. Arduino uno r3
    
    iii. DC Motor
    
    iv. npn transistor
    
    v. two resistors
    
    vi. push button
  
  3) Connect the circuit as shown below:
  
  ![image](https://user-images.githubusercontent.com/108147030/180041768-2116069e-2918-461d-822f-ad7c5efea9c5.png)
  
  4) use the following code to simulate the ON/OFF button circuit:
 
```ruby
int preState = 0;
int ledState = 0;
int pulsador = 7;
int motor = 3;
void setup()
{
  pinMode(pulsador,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int bState = digitalRead(pulsador);
  if((bState == 1) && (preState == 0)){
    
    if(ledState == 0){
      ledState = 1;
    }else if(ledState == 1){
      ledState = 0;
    }
  }
   digitalWrite(motor,ledState);
     Serial.print(preState);
     Serial.print(" ");
     Serial.println(bState);

     preState = bState;
      
}  
  ```
  
5) Click on start Simulation if you click on the push button the motor will start working and if you click on the push button again the motor will stop working.
