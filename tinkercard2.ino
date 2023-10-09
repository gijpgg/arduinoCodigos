// C++ code
//
int tempo = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  tempo = 1000;
}

void loop()
{
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("hello world");
}