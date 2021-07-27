//void setup(){
//  pinMode(A0, INPUT);
//  pinMode(A1, INPUT);
//  pinMode(3, INPUT_PULLUP);
//  Serial.begin(9600);
//}

//void loop(){
//  delay(1000);
//  Serial.println("X: " + (String)analogRead(A0));
//  Serial.println("Y: " + (String)analogRead(A1));
//  Serial.println("Clique: " + (String)digitalRead(3));
//  Serial.println("");
//}

void setup(){
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(3, INPUT_PULLUP);
Serial.begin(9600);
}

void loop(){
  delay(1000);
  int x = analogRead(A0);
  int y = analogRead(A1);
  int clique = digitalRead(3);
  
  if(x == 0){Serial.println("Esquerda");}
  if(x == 1023){Serial.println("Direita");}
  if(y == 0){Serial.println("Para Cima");}
  if(y == 1023){Serial.println("Para Baixo");}
  if(clique == LOW){Serial.println("Clicou");}
  if(x == 0 && y == 0){Serial.println("Diagonal Esquerda Superior");}
  if(x == 0 && y == 1023){Serial.println("Diagonal Esquerda Inferior");}
  if(x == 1023 && y == 0){Serial.println("Diagonal Direita Superior");}
  if(x == 1023 && y == 1023){Serial.println("Diagonal Direita Inferior");}
}