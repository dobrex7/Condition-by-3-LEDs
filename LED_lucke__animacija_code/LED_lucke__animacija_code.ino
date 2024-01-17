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
  // rdeca lucka
  digitalWrite(rdeca, HIGH);   // vklopimo lucko
  delay(1000);               // pocakamo 1 sekundo
  digitalWrite(rdeca, LOW);    // ugasnemo lucko
  delay(1000);               // pocakamo 1 sekundo

  // rumena lucka
  digitalWrite(rumena, HIGH);
  delay(1000);
  digitalWrite(rumena, LOW);
  delay(1000);

  // zelena lucka
  digitalWrite(zelena, HIGH);
  delay(1000);
  digitalWrite(zelena, LOW);
  delay(1000);
}

