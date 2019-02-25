int led = 13;

void setup()
{
pinMode(led, OUTPUT);
  
}
void flash(int a)
{
digitalWrite(led, HIGH);
delay(a);
digitalWrite(led, LOW);
delay(a);

}

void loop()
{
flash(150); flash(150); flash(150);
// S
delay(300);
flash(600); flash(600); flash(600);
//0
flash(150); flash(150); flash(150);
// S
delay(1000);
}
