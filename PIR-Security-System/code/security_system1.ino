// ==============================================
// Security System with PIR Motion Sensor
// ==============================================
// When motion is detected:
//   - Red LED turns ON
//   - Buzzer sounds
//   - Message printed to Serial Monitor
// ==============================================

// ----- Pin Definitions -----
const int PIR_PIN = 2;      // PIR sensor output (digital input)
const int LED_PIN = 9;      // LED anode (through 220Ω resistor)
const int BUZZER_PIN = 8;   // Active buzzer (positive pin)

// ----- Variables -----
int motionState = LOW;      // Current motion status (HIGH = motion detected)
int lastMotionState = LOW;  // Previous motion status (to detect changes)

void setup() {
  // Set pin modes
  pinMode(PIR_PIN, INPUT);     // PIR sensor is an input
  pinMode(LED_PIN, OUTPUT);    // LED is an output
  pinMode(BUZZER_PIN, OUTPUT); // Buzzer is an output

  // Start serial communication (for debugging / monitoring)
  Serial.begin(9600);
  Serial.println("Security system activated. Waiting for motion...");
}

void loop() {
  // Step 1: Read the current state of the PIR sensor
  motionState = digitalRead(PIR_PIN);

  // Step 2: Check if the state has changed since the last loop
  if (motionState != lastMotionState) {

    // Step 3: If motion is NOW detected (state changed from LOW to HIGH)
    if (motionState == HIGH) {
      digitalWrite(LED_PIN, HIGH);    // Turn LED on
      tone(BUZZER_PIN, 800); // Activate buzzer (active buzzer)
      Serial.println("!!! ALARM! MOTION DETECTED !!!");
    } 
    // Step 4: If motion has stopped (state changed from HIGH to LOW)
    else {
      digitalWrite(LED_PIN, LOW);     // Turn LED off
    noTone(8);  // Deactivate buzzer
      Serial.println("System armed. No motion.");
    }

    // Remember the new state for the next comparison
    lastMotionState = motionState;
  }

  // Small delay to avoid bouncing and reduce CPU load
  delay(100);
}