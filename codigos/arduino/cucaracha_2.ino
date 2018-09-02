char nombre[10] = "Garrapata";
char password[10] = "1234";
char baud = '4';
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 10;


void setup()
{
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
}

void loop() {
  if (Serial.available() >= 1)
  {
    char entrada = Serial.read();
    if (entrada == 'O'){
      digitalWrite(e,LOW);
    }
    else if (entrada == 'A')
    {
      digitalWrite(e, HIGH);
    }  
    else if (entrada == 'F')
    {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      Serial.println("Adelante");
    }
    else if (entrada == 'B')
    {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      Serial.println("Atras");
    }
    else if (entrada == 'R')
    {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      Serial.println("Derecha");
    }
    else if (entrada == 'L')
    {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      Serial.println("Izquierda");
    }
     else if (entrada == 'S')
    {
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      Serial.println("Parar");
    }
  }
}
