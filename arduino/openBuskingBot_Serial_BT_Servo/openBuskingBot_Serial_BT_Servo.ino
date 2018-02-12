/*********************************************************
    Open BuskingBot
    Written by Eunchan Park
**********************************************************/
//서보모터 라이브러리 사용하겠음
#include <Servo.h>

//소프트웨어시리얼 라이브러리 사용하겠음
#include <SoftwareSerial.h>

// "PIN_NUMBER_SW_SERIAL_TX" 이란 단어를 "2"라고 사용하겠음
// "PIN_NUMBER_SW_SERIAL_RX" 이란 단어를 "3"라고 사용하겠음
#define PIN_NUMBER_SW_SERIAL_TX     (2)
#define PIN_NUMBER_SW_SERIAL_RX     (3)
#define PIN_NUMBER_LEFT_MOTOR   (9)
#define PIN_NUMBER_RIGHT_MOTOR  (10)

#define LEFT_HIT_POSITON    140
#define RIGHT_HIT_POSITON    40
#define CENTER 90

Servo myservo1; // 첫 번째 서보모터선언
Servo myservo2; // 두 번째 서보모터 선언

//소프트웨어시리얼 선언, TX핀은 2번, RX핀은 3번임
SoftwareSerial BTSerial(PIN_NUMBER_SW_SERIAL_RX, PIN_NUMBER_SW_SERIAL_TX);
long lastHitTime = 0;

//왼쪽 팔을 이용해서 드럼을 치는 함수
void LeftHit() {
  myservo1.attach(PIN_NUMBER_LEFT_MOTOR);//서보모터에 힘을 부여함
  myservo1.write(LEFT_HIT_POSITON); // 서보 1번에게 90도로 이동하라고 명령 (왼쪽 모터) (팔을 내린다)
  delay(200); // 200ms (0.2초 동안 여기서 대기)
  myservo1.write(CENTER); // 서보 1번에게 0도로 이동하라고 명령 (왼쪽 모터) (팔을 든다)
}

//오른쪽 팔을 이용해서 드럼을 치는 함수
void RightHit() {
  myservo2.attach(PIN_NUMBER_RIGHT_MOTOR);//서보모터에 힘을 부여함
  myservo2.write(RIGHT_HIT_POSITON); // 서보 2번에게 90도로 이동하라고 명령 (오른쪽 모터) (팔을 내린다)
  delay(200); // 200ms (0.2초 동안 여기서 대기)
  myservo2.write(CENTER); // 서보 2번에게 0도로 이동하라고 명령 (오른쪽 모터) (팔을 든다)
}

// 데이터에 따라서 왼손 또는 오른손으로 드럼을 치는 함수
void hitDrum(char data) {
  // 만약 데이터가 'b' 라면
  if (data == 'b') {
    //왼팔을 움직이세요
    LeftHit();
  } else if (data == 's' || data == 'r' || data == 'C' ) {
    // s 라면 오른팔을 치세요
    RightHit();
  }
  else if (data == 'f') {
    // f 라면 드럼을 치는 위치로 가서 기다리세요.
    myservo1.attach(PIN_NUMBER_LEFT_MOTOR);//서보모터에 힘을 부여함
    myservo2.attach(PIN_NUMBER_RIGHT_MOTOR);//서보모터에 힘을 부여함
    myservo1.write(LEFT_HIT_POSITON);
    myservo2.write(RIGHT_HIT_POSITON);
    delay(60000);

  }

}

//아두이노 셋업 함수 (1회만 실행됨)
void setup() {
  myservo1.attach(PIN_NUMBER_LEFT_MOTOR); // 9번 핀을 서보1번이라는 이름으로 컨트롤 하겠음 (왼쪽 모터)
  myservo2.attach(PIN_NUMBER_RIGHT_MOTOR); // 9번 핀을 서보2번이라는 이름으로 컨트롤 하겠음 (오른쪽 모터)

  // 시리얼 통신을 시작하겠음. 38400 이라는 속도로 하겠음
  // 38400 이라는 숫자는 미리 정해진 여러가지 속도 중 하나임
  // 이번 강좌에서 사용된 블루투스는 38400 속도로 셋팅이 되어 있기 때문에 이 속도를 사용함
  long baudrate = 38400;
  Serial.begin(baudrate);
  BTSerial.begin(baudrate);
  LeftHit();
  RightHit();
}

// 임시로 데이터를 저장할 공간을 마련함
char tempData = 0;

//아두이노 루프 함수 (무제한 실행됨)
void loop() {
  // 통신을 통해 데이터를 받았다면 (컴퓨터로부터)
  if (Serial.available()) {
    // 임시 공간에 데이터 하나를 읽어서 저장하세요
    char tempData = Serial.read();
    hitDrum(tempData);
    lastHitTime = millis();
  }

  // 통신을 통해 데이터를 받았다면 (블루투스로부터)
  if (BTSerial.available()) {
    char tempData = BTSerial.read();
    hitDrum(tempData);
    lastHitTime = millis();
  }

  // 1000ms (1초) 이상 아무런 통신이 오지 않았다면 모터의 힘을 풀겠습니다.
  if (millis() > lastHitTime + 1000) {
    myservo1.detach();
    myservo2.detach();
  }
}

