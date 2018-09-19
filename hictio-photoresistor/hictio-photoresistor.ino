const int sensorA = A0;
const int sensorB = A1;
const int sensorC = A2;

int sensorA_value = 0;
int sensorB_value = 0;
int sensorC_value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial) {
    ;
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorA_value = analogRead(sensorA);
  if (sensorA_value < 300) {
    //Serial.write(0);
    Serial.print(0);
  }
  delay(5);
  sensorB_value = analogRead(sensorB);
  if (sensorB_value < 300) {
    //Serial.write(1);
    Serial.print(1);
  }
  delay(5);
  sensorC_value = analogRead(sensorC);
  if (sensorC_value < 300) {
    //Serial.write(2);
    Serial.print(2);
  }

  delay(5);


}
