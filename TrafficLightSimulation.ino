 // LED Traffic Light Simulation
// This program simulates a traffic light system with a pedestrian crossing button.

const int redLightPin = 23;   // Red LED connected to GPIO 23
const int yellowLightPin = 22; // Yellow LED connected to GPIO 22
const int greenLightPin = 21;  // Green LED connected to GPIO 21
const int buttonPin = 19;      // Pedestrian crossing button connected to GPIO 19

void setup() {
  pinMode(redLightPin, OUTPUT);
  pinMode(yellowLightPin, OUTPUT);
  pinMode(greenLightPin,OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  }

void loop() {
  if(buttonPin == LOW){
    Pedestrian();
  }
  else{
    Go();
    delay(5000);
    Wait();
    delay(1000);
    Stop();
    delay(3000);    
  }
  // TODO: Implement pedestrian crossing logic
  // Change light sequence when button is pressed
}
void Stop(){
  digitalWrite(redLightPin, HIGH);
  digitalWrite(yellowLightPin, LOW);
  digitalWrite(greenLightPin, LOW);
}

void Wait(){  
  digitalWrite(redLightPin, LOW);
  digitalWrite(yellowLightPin, HIGH);
  digitalWrite(greenLightPin, LOW);
}

void Go(){  
  digitalWrite(redLightPin, LOW);
  digitalWrite(yellowLightPin, LOW);
  digitalWrite(greenLightPin, HIGH);
}

void Pedestrian(){ 
  for (int i = 0; i<15; i++){ 
  digitalWrite(greenLightPin, HIGH);
  delay(500);
  digitalWrite(greenLightPin, LOW);
  delay(500);
  }
}
