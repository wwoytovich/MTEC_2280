/*
 * leds on pins 5 and 6
 * buttons on 2 and 3
 * 
 * 
 * 
*/


////////////////////////////////////////////////////////
//////____declarations___///////////////////////////////
///////////////////////////////////////////////////////
//int numarray[20]; // strange. strange way to do it.
int ledarray[2] = {5,6};
int buttonarray[5] = {45,3600,1,1,1};

// used later


void setup() 
{
 Serial.begin(9600);
}

void loop() 
{
  int tmp = lenRAY(buttonarray);
  //Serial.println(tmp);



}


int lenRAY(int varGoesHere[])
{
  int firstval = varGoesHere[0];
  Serial.print("full size of array: ");
  Serial.println(sizeof(varGoesHere));
  int lengthOF = (sizeof(varGoesHere)/sizeof(firstval));
  //Serial.println (lengthOF);
  return lengthOF;
}

