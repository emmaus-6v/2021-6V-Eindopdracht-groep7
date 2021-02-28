const int ledPin =  LED_BUILTIN;

// globale variabelen
int ledState = LOW;               // status van de LED
unsigned long millisVorigeVerandering = 0; // bewaard tijd van laatste LED-verandering
const int pingPin = 7;
const int ledPin = 13;
int wachttijd = 500; //tijd in ms


// andere constanten
const long interval = 1000;           // interval in milliseconden

void setup() {
  Serial.begin(9600);
  // stel ledpin in als output:
  pinMode(ledPin, OUTPUT);
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

  delay(100); 
}


long microsecondsToCentimeters(long microseconds) {
  // De geluidssnelheid is 340 m/s of 29 microsecondes per centimeter.
  // De ping gaat heen en weer, dus afstand delen door 2.
  return microseconds / 29 / 2;
}
  }
}
