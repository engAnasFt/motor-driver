int in1 = 7;
int in2 = 6;
int in3 = 10;
int in4 = 11;
int ena = 8;
int enb = 9;

void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, INPUT);
  pinMode(enb, INPUT);
}

void loop() {
  digitalWrite(ena, HIGH); 
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  digitalWrite(in1, LOW);   
  
  
  digitalWrite(in1, LOW);   
  digitalWrite(in2, HIGH);
  
  digitalWrite(in2, LOW); 

                         
  digitalWrite(enb, HIGH); 
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
  
  digitalWrite(in3, LOW);  
  
  
  digitalWrite(in3, LOW);  
  digitalWrite(in4, HIGH);
  
  digitalWrite(in4, LOW); 
  
}