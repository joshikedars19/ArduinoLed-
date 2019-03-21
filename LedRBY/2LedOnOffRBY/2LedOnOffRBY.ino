int Red = 9 ;   //*Red  pin to 9
int Blue = 10 ; //*Blue pin to 10
int Yellow = 11 ; // * Yellow pin to 11
int RedOn = 100 ; //* red led on time
int RedOff = 100 ; //* red led off time
int BlueOn = 200 ; //* Blue led on time
int BlueOff = 200 ; //* Blue led off time
int YellowOn = 300 ; //* Yellow led on time
int YellowOff = 300 ; //* Yellow led off time
int i = 0 ;


void setup() {
  pinMode (Red, OUTPUT);
  pinMode (Yellow , OUTPUT);
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
  else if ( i > 10 )
  {
    digitalWrite(Blue,HIGH); //Blue LED ON
    delay (BlueOn);
    digitalWrite (Blue, LOW); //Blue OFF
    delay (BlueOff);
  }
  else {
    digitalWrite(Yellow , HIGH ); //Yellow LED On
    delay (YellowOn);
    digitalWrite (Yellow , LOW ); //Yellow LED off
    delay (YellowOff);
    }
}
