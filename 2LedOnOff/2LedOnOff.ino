int Red = 9 ;   //*Red  pin to 9
int Blue = 10 ; //*Blue pin to 10
int RedOn = 250 ; //* red led on time
int RedOff = 250 ; //* red led off time
int BlueOn = 250 ; //* Blue led on time
int BlueOff = 250 ; //* Blue led off time
int i = 0 ;


void setup() {
  pinMode (Red, OUTPUT);
  pinMode (Blue, OUTPUT);
}

void loop() {
  if (i < 10){
  digitalWrite(Red,HIGH); //RED LED ON
  delay (RedOn);
  digitalWrite (Red, LOW); //RED OFF
  delay (RedOff);
  i++ ;
  }
  else{
  digitalWrite(Blue,HIGH); //Blue LED ON
  delay (BlueOn);
  digitalWrite (Blue, LOW); //Blue OFF
  delay (BlueOff);
}
}
