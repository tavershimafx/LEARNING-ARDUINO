
int dataPin = 8;
int latchPin = 9;
int clockPin = 10;
byte table[]= 
    {   0x5F,  // = 0
        0x44,  // = 1
        0x9D,  // = 2
        0xD5,  // = 3
        0xC6,  // = 4
        0xD3,  // = 5
        0xDB,  // = 6
        0x45,  // = 7
        0xDF,  // = 8
        0xC7,  // = 9
        0xCF,  // = A
        0xDA,  // = b
        0x1B,  // = C
        0xDC,  // = d
        0x9B,  // = E
        0x8B,  // = F
        0x00   // blank
    };
    
void setup()
{
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void Display(unsigned char num)
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, table[num]);
  digitalWrite(latchPin, HIGH);
}

void loop()
{
  for (int i = 0; i < 9; i++)
  {
    Display(i);
    delay(500);
  }
}
