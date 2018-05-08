void setup() {
  // put your setup code here, to run once:
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
         int x;

 for( x = 0 ; x < 154 ; x++ ) {

     analogWrite( 11 , x );
    delay(100);
 }

 analogWrite( 11 , 0 );

 delay(1000);
}
