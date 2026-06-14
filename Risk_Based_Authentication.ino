int trigPin = 18;
int echoPin = 19;

int redPin = 25;
int greenPin = 26;
int bluePin = 27;

int touchPin = 32;

long duration;
float distance;
int touchValue;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(touchPin, INPUT);
}

void loop() {

  // measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // read touch sensor
  touchValue = digitalRead(touchPin);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("  Touch: ");
  Serial.print(touchValue);

  // decision logic

  if (distance > 0 && distance < 20) {
    // close
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);

    Serial.println("  -> Low Risk (Access Granted)");
  }

  else if (distance >= 20 && distance < 40) {
    // medium
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);

    Serial.println("  -> Medium Risk");
  }

  else {
    // far

    if (touchValue == LOW) {
      // touched
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);

      Serial.println("  -> Step-Up Verified (Access Granted)");
    } 
    else {
      // not touched
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);

      Serial.println("  -> High Risk (Access Denied)");
    }
  }

  delay(500);
}