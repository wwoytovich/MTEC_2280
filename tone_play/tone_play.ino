//import pitches.h;

int tonePin = 11;
int switchPin =  2;
int switchpos = 0;
unsigned long lastmicros = 0;
boolean currentBool = false;
int tonea = 440;
int toneb = 523;
  void setup()
{

}

void loop()
{


  switchpos = digitalRead(switchPin);
  if (switchpos == 1)
  {
    toneFunc();

  }

}




void toneFunc()
{
  if (micros() - lastmicros >= 125)
  {
    lastmicros = micros();
    currentBool = toneAA() & toneBB();

    digitalWrite(11, currentBool);
   }
}

boolean toneAA()
{
  if ((((tonea * 1000 * 125) / lastmicros) % 2) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

boolean toneBB()
{
  if ((((toneb * 1000 * 125) / lastmicros) % 2) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}


