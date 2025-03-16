#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

void setup()
{
    Serial.begin(9600);  // 시리얼 통신 시작
    if (!driver.init())
        Serial.println("init failed");
}

void loop()
{
    // 시리얼 창에 입력된 데이터가 있는지 확인
    if (Serial.available() > 0) {
        // 입력된 데이터를 읽어옴
        String input = Serial.readStringUntil('\n');
        
        // 입력된 문자열을 C 문자열로 변환
        const char *msg = input.c_str();
        
        // 메시지 송신
        driver.send((uint8_t *)msg, strlen(msg));
        driver.waitPacketSent();
        
        // 송신한 메시지를 시리얼 창에 출력
        Serial.print("Sent: ");
        Serial.println(msg);
    }
}
