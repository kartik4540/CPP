#include <Servo.h>
Servo mysevo;

int pos = 20;
const int trigPin = 10;
const int trigpin2= 5;
const int echopin2= 6;
const int echoPin = 11;
const in led = 12;

//Serial begin (9600);
myservo.attach(9);
pinModef(rigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinModeftrigpin2, OUTPUT);
pinMode(echopin?, INPUT);
pinMode(led, OUTPUT),
pinMode(led2, OUTPUT);

float distance?
digitalWrite(trigpin2, LOW);
delayMicroseconds(2);
digitalWrite(trigpin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin2, LOW);
duration2=pulseln(echopin2 HIGH);
distance2=0.034*(duration2/2);

if(distance2<10)

{
digitalWrite(led2, HIGH);
digitalWrite(led3,LOW);
digitalWrite(led, LOW);

Tre pon
else if(distance2>=1088distance2<=25)
(
digitalWrite(led3 HIGH);
digitalWrite(led2,LOW);
long duration;
float distance;
int count=0;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
dightalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseln(echoPin, HIGH);
distance = 0.034+(duration/2);
timestep1:
if (distance < 20)
{count ++;
if(count>=3)(
digitalWrite(led HIGH);
myservo.write(pos+160);
count=0}
else{delay(750);
goto timestep1)
delay(3000);
}

else
{
digitalWrite(led LOW);
myservo.write(pos);
} delay(300):

}
else
{ digitalWrite(led2 LOW);
digitalWrite(led3,LOW);
long duration;
float distance;
nt count=0;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseln(echoPin, HIGH);
distance = 0.034*(duration/2);
timestep:
if (distance < 20)
{count ++;
if(count>=3)(
digitalWrite(led HIGH);
myservo.write(pos+160);
count=0}
else(
delay(750);
goto timestep)
delay(3000);
}
else
{
digitalWrite(led LOW);
myservo.write(pos);
} delay(300)}
}
