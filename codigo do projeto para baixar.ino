// C++ code
//

int pinled[9] = {12,11,10,9,8,7,6,5,4};
int nled;
void setup()
{
  int x;
  for(x=0;x<=9;x++){
  pinMode(pinled[x],OUTPUT);
  }  
}

void loop()
{
  for(nled=0;nled<=8;nled++){
    digitalWrite(pinled[nled], HIGH);
    delay(500);
  }
  for(nled=8;nled>=0;nled--){
    digitalWrite(pinled[nled], LOW);
    delay(500);
  }
}
  
  