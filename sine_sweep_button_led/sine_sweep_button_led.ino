//declerations 
float nas = 0; // counter
long biggie = 0; //timer
int nwa = 1; // interval
float wave;

int buttonOne = 2;
boolean buttonOnestate = false;
boolean down1 = false;
int switcherState1 = 0;




void setup()
{
  Serial.begin(9600);
  pinMode(INPUT, buttonOne);
}


void loop()
{
  button1switcher();
  if(switcherState1 == 1)
  {
    solid();
  }
  else
  {
    sineFade();
  }
}

void sineFade()
{
  if (millis()-biggie >= nwa)
  {
    nas = nas + .01;
    biggie = millis();
    wave = ((sin(nas/PI)+1)/2)*255;
  }
  analogWrite(3, wave);
}


void solid()
{
  analogWrite(3, 255);
}
void button1switcher()
{  
  // so how this works is when the button is clicked, down 1 is true.
  //then once the button is released AND down is still true change the switcher state and make down reset to false
  //wow this sucks.
   buttonOnestate = digitalRead(buttonOne);
   if (buttonOnestate == HIGH)
    {
      down1 = true;
    }
    if ((buttonOnestate == LOW) && (down1))
    {
      down1 = false;
      if (switcherState1 == 0)
      {
        switcherState1 = 1;
      }
      else
      {
        switcherState1 = 0;
      }      
    }
}


