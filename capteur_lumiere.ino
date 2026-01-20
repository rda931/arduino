#define LDR_PIN A0

void setup() {
Serial.begin(9600);
}

void loop() {
int lightValue = analogRead(LDR_PIN); // Read the analog value from the LDR
Serial.print("Light Intensity: ");
Serial.println(lightValue); // Print the value to the Serial Monitor
delay(500); // Wait
}