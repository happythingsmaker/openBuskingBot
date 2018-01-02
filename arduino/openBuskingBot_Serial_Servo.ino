/*********************************************************
    Open BuskingBot
    Written by Eunchan Park (박은찬)
    BSD license, all text above must be included in any redistribution
**********************************************************/
#include <Servo.h>
Servo myservo1; // 첫 번째 서보모터
Servo myservo2; // 두 번째 서보모터

void LeftHit() {
    myservo1.write(90); // 서보 1번에게 90도로 이동하라고 명령 (왼쪽 모터) (팔을 내린다)
    delay(200); // 200ms (0.2초 동안 여기서 대기)
    myservo1.write(00); // 서보 1번에게 0도로 이동하라고 명령 (왼쪽 모터) (팔을 든다)
}

void RightHit() {
    myservo2.write(0); // 서보 2번에게 90도로 이동하라고 명령 (오른쪽 모터) (팔을 내린다)
    delay(200); // 200ms (0.2초 동안 여기서 대기)
    myservo2.write(90); // 서보 2번에게 0도로 이동하라고 명령 (오른쪽 모터) (팔을 든다)
}

void setup() {
    myservo1.attach(9); // 9번 핀을 서보1번이라는 이름으로 컨트롤 하겠음 (왼쪽 모터)
    myservo2.attach(10); // 9번 핀을 서보2번이라는 이름으로 컨트롤 하겠음 (오른쪽 모터)

    // 시리얼 통신을 시작하겠음. 38400 이라는 속도로 하겠음
    // 38400  이라는 숫자는 미리 정해진 여러가지 속도 중 하나임
    Serial.begin(38400);
}

// 임시로 데이터를 저장할 공간을 마련함
char tempData = 0;

void loop() {
    // 통신을 통해 데이터를 받았다면
    if (Serial.available()) {
        // 임시 공간에 데이터 하나를 읽어서 저장하세요
        char tempData = Serial.read();
        // 만약 그 데이터가 'b' 라면
        if (tempData == 'b') {
            //왼팔을 움직이세요
            LeftHit();
        } else if (tempData == 's') {
            // s 라면 오른팔을 치세요
            RightHit();
        }
    }
}

