const int ledPin =  LED_BUILTIN;

// globale variabelen
int ledState = LOW;               // status van de LED
unsigned long millisVorigeVerandering = 0; // bewaard tijd van laatste LED-verandering
const int pingPin = 7;
const int ledPin = 13;
int wachttijd = 500; //tijd in ms

// infraroodsensoren
const int sensorPin1 4
const int sensorPin2 5
const int sensorPin3 6

int sensorStatus_1 = LOW;      // de MEEST RECENTE waarde van de sensor1
int sensorVorigeStatus_1 = LOW;      // de VORIGE waarde van de sensor1
int sensorStatus_2 = LOW;      // de MEEST RECENTE waarde van de sensor2
int sensorVorigeStatus_2 = LOW;      // de VORIGE waarde van de sensor2
int sensorStatus_3 = LOW;      // de MEEST RECENTE waarde van de sensor3
int sensorVorigeStatus_3 = LOW;      // de VORIGE waarde van de sensor3


// andere constanten
const long interval = 1000;           // interval in milliseconden

void setup() {
  Serial.begin(9600);
  // stel ledpin in als output:
  pinMode(ledPin, OUTPUT);

  // stel de sensorPin in als INPUT
  pinMode(sensorPin1, INPUT);
  digitalWrite(sensorPin1, HIGH);

  pinMode(sensorPin2, INPUT);
  digitalWrite(sensorPin2, HIGH);

  pinMode(sensorPin3, INPUT);
  digitalWrite(sensorPin3, HIGH);
}

void loop() {
  // tijd van nu
  unsigned long millisNu = millis();

  // is de verstreken tijd sinds de laatste verandering langer dan de interval?
  if (millisNu - millisVorigeVerandering >= interval) {    
    // bewaar tijdstip van de verandering die we hierna gaan doen...
    millisVorigeVerandering = millisNu;

    //resultaat in cm
  long duration, cm;
  }

   sensorStatus_1 = digitalRead(sensorPin1);
   sensorStatus_2 = digitalRead(sensorPin2);
   sensorStatus_3 = digitalRead(sensorPin3);

  // als de straal onderbroken is: LEDje aan
  // anders uit

  
  if (sensorStatus_1  == LOW) {
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }

  if (sensorStatus_1 == HIGH && vorigeStatus_1 == LOW) {
    Serial.println("Er komt een knikker door bij het begin!");
  } 
  if (sensorStatus_1 == LOW && vorigeStatus_1 == HIGH) {
    Serial.println("Er is geeen actie te zien bij het begin");
  }

  vorigeStatus = sensorStatus;

  

/*
// object te detecteren
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

 // zet de duur om naar afstand in cm
  cm = microsecondsToCentimeters(duration);

  // geef in seriealmonitor aan wat de afstand is
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

 // doe de led aan als cm < 10
  if(cm < 50) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
 
    if(cm < 60 && cm > 50) {
  digitalWrite(ledPin, HIGH);  // Zet de LED aan door het voltage hoog te maken
  delay(wachttijd);            // wachttijd
  digitalWrite(ledPin, LOW);   // Zet de LED uit door het voltage laag te maken
  delay(wachttijd);            // wachttijd
}

  delay(100); */
}

/*
long microsecondsToCentimeters(long microseconds) {
  // De geluidssnelheid is 340 m/s of 29 microsecondes per centimeter.
  // De ping gaat heen en weer, dus afstand delen door 2.
  return microseconds / 29 / 2;
}*/
