void setup()
{
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  
  pinMode(13, OUTPUT);   // on-board LED
  Serial.begin(115200);
}

void loop()
{
     unsigned long start_time;
     unsigned long stop_time;
     
     digitalWrite(13,0);   // Turn LED off
     while(digitalRead(4)==0) {}
     start_time=micros();
     digitalWrite(13,1);   // Turn LED on
     while (digitalRead(5)) {}
     stop_time=micros();
     digitalWrite(13,0);
     Serial.print("time hi->lo=");
     Serial.print(stop_time-start_time);
     Serial.println(" microsec");
     delay(500);
}