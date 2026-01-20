


volatile int st = 1;
volatile int fin = 1;
long totaltime = 0;

//#############################################################################################

void setup() {
  
  attachInterrupt(9, start, FALLING) ;
  attachInterrupt(10, finish, FALLING) ;
  pinMode(7,INPUT);
  pinMode(12,INPUT);
  
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
    b = Serial.read();
    if (b == 'b') {
      Serial.println(totaltime);
      timeprint();
  }
    if (b == 'a') {
      reset();
    
    }
}
  
if (st == 0)  {
  starttime = millis();
  while (fin == 1)  {
      finishtime = millis();
      totaltime = finishtime - starttime;
      timeprint();
      delay(10);
      if (Serial.available()) {
        b = Serial.read();
        if (b == 'b') {
          Serial.println(totaltime);
          
          
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
