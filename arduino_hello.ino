


// HIGH: 1
// LOW: 0

/*
 * Sketch uses 1490 bytes (0%) of program storage space. Maximum is 253952 bytes.
 * Global variables use 9 bytes (0%) of dynamic memory, leaving 8183 bytes for local variables. Maximum is 8192 bytes.
 */

short WHITE_LED_PIN=13;
unsigned long long LED_INTERVAL=300;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(WHITE_LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(WHITE_LED_PIN, HIGH); // LED on
  delay(LED_INTERVAL);
  digitalWrite(WHITE_LED_PIN, LOW);  // LED off
  delay(LED_INTERVAL);

}
