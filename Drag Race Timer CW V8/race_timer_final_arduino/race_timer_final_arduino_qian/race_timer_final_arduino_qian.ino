volatile int st = 1;
volatile int fin = 1;
long totaltime = 0;
int startInterruptPIN=9;
int startStatusPIN=7;
int finishInterruptPIN=10;
int finishStatusPIN=12;
int startStatus;
int finishStatus;
//#############################################################################################

void setup() {
  attachInterrupt(startInterruptPIN, start, FALLING) ;
  attachInterrupt(finishInterruptPIN, finish, FALLING) ;
  pinMode(startStatusPIN,INPUT);
  pinMode(finishStatusPIN,INPUT);
  Serial.begin(19200);    
}

//#############################################################################################

void loop() {

  timer();  
}

//#############################################################################################

void timer()   {
  
long starttime;
long finishtime;  
char a;
char b;

if (Serial.available()) {
    startStatus=digitalRead(startStatusPIN);
    finishStatus=digitalRead(finishStatusPIN);
    b = Serial.read();
    if (b == 'b') {
      Serial.print(startStatus);
      Serial.print('f');
      Serial.print(finishStatus);
      Serial.print('t');
      Serial.print(totaltime);
      Serial.println('n');
      timeprint();
    }
    if (b == 'a') {
      reset();
    
    }
}
  
if (st == 0)  {
  starttime = millis();
  while (fin == 1)  {
      startStatus=digitalRead(startStatusPIN);
      finishStatus=digitalRead(finishStatusPIN);
      finishtime = millis();
      totaltime = finishtime - starttime;
      timeprint();
      //delay(5);
      if (Serial.available()) {
        b = Serial.read();
        if (b == 'b') {
          Serial.print(startStatus);
          Serial.print('f');
          Serial.print(finishStatus);
          Serial.print('t');
          Serial.print(totaltime);
          Serial.println('c');
        }
        if (b == 'a') {
          reset();
        } 
      }
  }
}
}


//#############################################################################################


void timeprint()   {
  byte mins;
  byte sec10;
  byte sec1;
  byte thsec;
  byte ttsec;
  long rem;
  
  
  
  mins = totaltime/60000;
  rem = totaltime % 60000;
  sec10 = rem/10000;
  rem = rem % 10000;
  sec1 = rem/1000;
  rem = rem%1000;
  thsec = rem/100;
  rem = rem%100;
  ttsec = rem/10;
  
  
 
    
    
  
}


//#############################################################################################

void start()  {
  st = 0;
  fin = 1;
}

void finish()  {
  fin = 0;
  st = 1;
  
}
  
//#############################################################################################

void reset()  {
  totaltime = 0;
  st = 1;
  fin = 0;
}
