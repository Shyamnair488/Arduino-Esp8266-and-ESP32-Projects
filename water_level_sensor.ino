// TECHATRONIC.COM  
 int val = 0 ;  
 void setup()  
 {  
   Serial.begin(9600); // sensor buart rate  
   pinMode(14,HIGH);  // Red led Pin Connected To D5 Pin   
   pinMode(13,HIGH);  // Green Led Pin Connected To D7 Pin   
   pinMode(12,HIGH);  // Yellow Led Connected To D6 Pin    
 }  
 void loop()   
 {  
  int s1=analogRead(A0); // Water Level Sensor output pin connected A0  
  Serial.println(s1);  // See the Value In Serial Monitor     
  delay(100);      // for timer  
  if(s1> 400 )  
   {   
    digitalWrite(14,HIGH);   // Red led ON   
   }   
  else   
   {   
   digitalWrite(14,LOW);    // Red led OFF  
   }   
  if(s1>540 )   
   {   
   digitalWrite(12,HIGH);   // Green led ON   
   }  
   else   
   {   
   digitalWrite(12,LOW);   // Green led OFF   
   }   
   if(s1>580 )   
   {  
   digitalWrite(13,HIGH);  // Yellow led ON   
   }  
   else  
   {  
   digitalWrite(13,LOW);  // Yellow led OFF   
   }  
  }  
