#define g_ledpin 13
#define y_ledpin 12
#define r_ledpin 11

void setup() {
  // Set GPIO pins as OUTPUT
  pinMode(g_ledpin, OUTPUT);
  pinMode(y_ledpin, OUTPUT);
  pinMode(r_ledpin, OUTPUT);
}

void loop() {
  // 1. GREEN LED ON for 5 seconds
  digitalWrite(g_ledpin, HIGH);
  digitalWrite(y_ledpin, LOW);
  digitalWrite(r_ledpin, LOW);
  delay(5000);

  // 2. YELLOW LED ON for 2 seconds
  digitalWrite(g_ledpin, LOW);
  digitalWrite(y_ledpin, HIGH);
  digitalWrite(r_ledpin, LOW);
  delay(2000);

  // 3. RED LED ON for 5 seconds
  digitalWrite(g_ledpin, LOW);
  digitalWrite(y_ledpin, LOW);
  digitalWrite(r_ledpin, HIGH);
  delay(5000);
}