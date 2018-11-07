#define countbuttonPin 49
#define startbuttonPin 48
#define starbuttonPin 47

int count = 0;
int mode = 0;
int colorrand;

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(22,OUTPUT);
pinMode(23,OUTPUT);
pinMode(24,OUTPUT);
pinMode(25,OUTPUT);
pinMode(26,OUTPUT);
pinMode(27,OUTPUT);
pinMode(28,OUTPUT);
pinMode(29,OUTPUT);
pinMode(30,OUTPUT);
pinMode(31,OUTPUT);
pinMode(32,OUTPUT);
pinMode(33,OUTPUT);
pinMode(34,OUTPUT);
pinMode(35,OUTPUT);
pinMode(36,OUTPUT);
pinMode(37,OUTPUT);
pinMode(38,OUTPUT);
pinMode(39,OUTPUT);

pinMode(starbuttonPin, INPUT);
pinMode(countbuttonPin,INPUT);
pinMode(startbuttonPin,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(countbuttonPin) == LOW){
    delay(10);
  count++;
  }
  
 switch(count%10){
  case 0:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 1:
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;

  case 2:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  break;
  
  case 3:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 4:
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;

  case 5:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 6:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 7:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;

  case 8:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 9:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;
}
if(digitalRead(startbuttonPin) == LOW){
  delay(50);
  count = count%10;
  
for(int i = count ; i >= 0 ; i--){
  if(count != 0){
  delay(59000);
  }
    count--;
  switch(count){
  case 0:
  while(digitalRead(countbuttonPin) == HIGH){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(500);
  }
  break;
  

  case 1:
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;

  case 2:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  break;
  
  case 3:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 4:
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;

  case 5:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 6:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 7:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;

  case 8:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  break;

  case 9:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  break;
      }
    }
  }

  if(digitalRead(starbuttonPin) == LOW){
    delay(50);
    mode++;
  }
  
  switch(mode % 5){
    case 0:
    setColor1(255, 0, 0);
    delay(500);
    setColor2(255, 0, 0);
    delay(500);
    setColor3(255, 0, 0);
    delay(500);
    setColor4(255, 0, 0);
    delay(500);
    setColor5(255, 0, 0);
    delay(500);
    break;
    
    case 1:
    setColor1(0,255,0);
    delay(500);
    setColor2(0,255,0);
    delay(500);
    setColor3(0,255,0);
    delay(500);
    setColor4(0,255,0);
    delay(500);
    setColor5(0,255,0);
    delay(500);
    break;

    case 2:
    setColor1(0,0,255);
    delay(500);
    setColor2(0,0,255);
    delay(500);
    setColor3(0,0,255);
    delay(500);
    setColor4(0,0,255);
    delay(500);
    setColor5(0,0,255);
    delay(500);
    break;

     case 3:
     colorrand = random(256);
      setColor1(colorrand, (colorrand+100)%255 , (colorrand+200)%255);
      delay(250);
      colorrand = random(256);
      setColor2(colorrand, (colorrand+100)%255 , (colorrand+200)%255);
      delay(250);
      colorrand = random(256);
      setColor3(colorrand, (colorrand+100)%255 , (colorrand+200)%255);
      delay(250);
      colorrand = random(256);
      setColor4(colorrand, (colorrand+100)%255 , (colorrand+200)%255);
      delay(250);
      colorrand = random(256);
      setColor5(colorrand, (colorrand+100)%255 , (colorrand+200)%255);
    break;

    case 4:
      setColor1(0,0,0);
    delay(500);
    setColor2(0,0,0);
    delay(500);
    setColor3(0,0,0);
    delay(500);
    setColor4(0,0,0);
    delay(500);
    setColor5(0,0,0);
    
  }
}

void setColor1(int red, int green, int blue)
{
  analogWrite(22, red);
  analogWrite(23, green);
  analogWrite(24, blue);
}

void setColor2(int red, int green, int blue)
{
  analogWrite(25, red);
  analogWrite(26, green);
  analogWrite(27, blue);
}

void setColor3(int red, int green, int blue)
{
  analogWrite(28, red);
  analogWrite(29, green);
  analogWrite(30, blue);
}

void setColor4(int red, int green, int blue)
{
  analogWrite(31, red);
  analogWrite(34, red);
  analogWrite(32, green);
  analogWrite(35, green);
  analogWrite(33, blue);
  analogWrite(36, blue);
}

void setColor5(int red, int green, int blue)
{
  analogWrite(37, red);
  analogWrite(38, green);
  analogWrite(39, blue);
}
