# 바이브코딩 기반 C++ 실무활용 시작하기

## Overview

C++ 입문자를 위한 학습 프로젝트입니다. 기본 문법부터 시작해서 단계별로 C++ 프로그래밍을 학습할 수 있도록 구성되어 있습니다. 
각 예제에는 상세한 한글 주석이 포함되어 있어 초보자도 쉽게 이해할 수 있습니다.
아래 코랩 노트북을 복사해서 가볍게 예제 코드를 둘러보며 학습을 시작하세요.
https://colab.research.google.com/drive/1Y4XyQQyvJBHT_pXA9IyRQsTQxzfTHNXl?usp=sharing

## User Preferences

Preferred communication style: Simple, everyday language (Korean).

## System Architecture

### Current State
- **Language**: C++ (C++17 standard)
- **Compiler**: Clang 14.0.6
- **Project Type**: Console-based interactive learning program
- **File Structure**: Single file architecture (main.cpp)

### Project Structure
```
.
├── main.cpp          # Main learning program with all examples
├── .gitignore        # Git ignore rules for C++ projects
└── replit.md         # Project documentation
```

### Implemented Features

#### 1. 기본 문법 예제 (Menu Option 1)
- 변수 선언과 초기화
- 데이터 타입 (int, float, double, char, string, bool)
- 산술 연산자 (+, -, *, /, %)
- 증감 연산자 (++, --)
- 비교 연산자 (==, !=, >, <, >=, <=)
- 논리 연산자 (&&, ||, !)
- 복합 대입 연산자 (+=, -=, *=, /=)

#### 2. 조건문과 반복문 예제 (Menu Option 2)
- if/else if/else 조건문
- 삼항 연산자
- switch 문
- for 반복문 (기본, 역순, 증가값 변경)
- while 반복문
- do-while 반복문
- break와 continue
- 중첩 반복문 (구구단)
- 패턴 출력 (별 찍기)

#### 3. 함수 예제 (Menu Option 3)
- 기본 함수 선언과 호출
- 매개변수가 있는 함수
- 반환값이 있는 함수
- 참조자(reference) 사용
- 기본 매개변수 (default parameter)
- 함수 오버로딩
- 재귀 함수 (팩토리얼)
- 실용적인 함수 예제 (최대값 찾기, 소수 판별, 문자열 반복)

### Technical Details

#### Build Configuration
- Compilation: `clang++ -std=c++17 -o main main.cpp`
- Execution: `./main`
- Workflow: Automatic compile and run on start

#### Code Conventions
- 모든 함수와 변수에 한글 주석 포함
- 입문자 친화적인 예제 구성
- 단계별 난이도 증가
- 실용적인 예제 중심

## External Dependencies

### Currently Installed
- C++ Clang 14 (cpp-clang14 module)
  - Clang compiler
  - GDB debugger
  - ccls language server

### Standard Libraries Used
- iostream: 입출력 처리
- string: 문자열 처리

## Recent Changes (October 8, 2025)

1. **프로젝트 초기 설정**
   - C++ Clang 14 컴파일러 설치
   - .gitignore 파일 생성 (빌드 파일 및 IDE 캐시 제외)

2. **학습 모듈 구현**
   - 기본 문법 예제 작성 (변수, 데이터 타입, 연산자)
   - 조건문과 반복문 실습 예제 작성
   - 함수 작성 및 활용 예제 작성

3. **메인 프로그램 개발**
   - 메뉴 기반 인터랙티브 학습 프로그램
   - 모든 예제를 main.cpp 단일 파일로 통합
   - 입력 오류 처리 추가

4. **워크플로우 설정**
   - 자동 컴파일 및 실행 워크플로우 구성
   - 콘솔 기반 출력 설정

5. **프로젝트 정리**
   - 중복 코드 제거 (src 디렉터리 삭제)
   - .gitignore에 .ccls-cache 추가
   - 프로젝트 구조 최적화
