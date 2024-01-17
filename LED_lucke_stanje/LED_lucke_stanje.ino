//definiramo vhode led luck
int rdeca = 5;
int rumena = 6;
int zelena = 7;

void setup() {               
  // inicializiramo lucke kot output
  pinMode(rdeca, OUTPUT);
  pinMode(rumena, OUTPUT);
  pinMode(zelena, OUTPUT); 
}

void loop() {
  // vse lucke prizgemo za sekundo
  digitalWrite(rdeca, HIGH); 
  digitalWrite(rumena, HIGH)
  digitalWrite(zelena, HIGH);
  delay(1000);
   
  // vse lucke ugasnemo za sekundo
  digitalWrite(rdeca, LOW); 
  digitalWrite(rumena, LOW);
  digitalWrite(zelena, LOW);
  delay(1000);
}

