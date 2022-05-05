int Vpin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int PPGval = analogRead(Vpin);                     //reads values from Vpin.
  float PPGval_f = PPGval*(5.0/1023.0);              //maps the extreme ends analog values from (0 - 1023) to (0 - 5V) for our understanding.
  Serial.print(PPFval_f);                            //print out the value we read.
}
