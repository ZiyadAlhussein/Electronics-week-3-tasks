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
