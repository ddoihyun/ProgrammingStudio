# J072. 간단한 채팅 프로그램 분석 및 실행하기
다음과 같이 채팅 프로그램을 분석한 후, 실행하라.

ChatServer.java
채팅서버 – 채팅클라이언트로부터 들어오는 메시지를 다른 클라이언트에 전송한다.


ChatClient.java
채팅클라이언트 – 사용자가 입력한 메시지를 채팅서버로 전송하고,
채팅서버로부터 전송된 메시지를 화면에 출력한다.


🔗 소스코드 링크:
https://github.com/kkim-hgu/PStudio/tree/master/Java%20Labs/SimpleChat

---
## SimpleChat Java
Simple Chatting Program (java version)


## Client Compile
```
javac ChatClient.java
```

## Server Compile
```
javac ChatServer.java
```

## Test
## Terminal #1
```
java ChatServer
```

### Terminal #2
```
java ChatClient <username1> <server ip address> 
``` 
*예시*
```
java ChatClient Kim localhost
```

### Terminal #3
```
java ChatClient <username2> <server ip address>  
```
*예시*  
```
java ChatClient Jang localhost
```