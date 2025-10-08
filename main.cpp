// main.cpp - C++ 학습 프로젝트 메인 프로그램
// 입문자를 위한 C++ 문법 학습

#include <iostream>
#include <string>
using namespace std;

// 각 학습 모듈의 함수 선언
void learnBasics();
void learnControlFlow();
void learnFunctions();

int main() {
    int choice;
    
    cout << "\n╔═══════════════════════════════════════╗" << endl;
    cout << "║   C++ 입문자를 위한 학습 프로젝트    ║" << endl;
    cout << "╚═══════════════════════════════════════╝" << endl;
    
    while (true) {
        cout << "\n┌─────────────────────────────────────┐" << endl;
        cout << "│         학습 메뉴 선택              │" << endl;
        cout << "├─────────────────────────────────────┤" << endl;
        cout << "│ 1. 기본 문법 (변수, 데이터 타입, 연산자) │" << endl;
        cout << "│ 2. 조건문과 반복문                  │" << endl;
        cout << "│ 3. 함수 작성 및 활용                │" << endl;
        cout << "│ 0. 종료                             │" << endl;
        cout << "└─────────────────────────────────────┘" << endl;
        cout << "\n선택: ";
        
        cin >> choice;
        
        // 입력 오류 처리
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\n⚠️  올바른 숫자를 입력해주세요!" << endl;
            continue;
        }
        
        switch (choice) {
            case 1:
                learnBasics();
                break;
            case 2:
                learnControlFlow();
                break;
            case 3:
                learnFunctions();
                break;
            case 0:
                cout << "\n프로그램을 종료합니다. 수고하셨습니다! 👋" << endl;
                return 0;
            default:
                cout << "\n⚠️  잘못된 선택입니다. 0~3 사이의 숫자를 입력해주세요." << endl;
        }
        
        cout << "\n" << endl;
    }
    
    return 0;
}

// === src/01_basics.cpp 내용 포함 ===
void learnBasics() {
    cout << "\n=== 1. 변수와 데이터 타입 ===" << endl;
    
    int age = 25;
    cout << "나이(int): " << age << endl;
    
    float height = 175.5f;
    double weight = 68.5;
    cout << "키(float): " << height << "cm" << endl;
    cout << "몸무게(double): " << weight << "kg" << endl;
    
    char grade = 'A';
    cout << "학점(char): " << grade << endl;
    
    string name = "홍길동";
    cout << "이름(string): " << name << endl;
    
    bool isStudent = true;
    cout << "학생 여부(bool): " << (isStudent ? "예" : "아니오") << endl;
    
    cout << "\n=== 2. 산술 연산자 ===" << endl;
    
    int a = 10;
    int b = 3;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "덧셈(a + b): " << (a + b) << endl;
    cout << "뺄셈(a - b): " << (a - b) << endl;
    cout << "곱셈(a * b): " << (a * b) << endl;
    cout << "나눗셈(a / b): " << (a / b) << " (정수 나눗셈)" << endl;
    cout << "나머지(a % b): " << (a % b) << endl;
    
    double c = 10.0;
    double d = 3.0;
    cout << "실수 나눗셈(c / d): " << (c / d) << endl;
    
    cout << "\n=== 3. 증감 연산자 ===" << endl;
    
    int count = 5;
    cout << "초기값: " << count << endl;
    cout << "count++: " << count++ << " (출력 후 증가)" << endl;
    cout << "현재값: " << count << endl;
    cout << "++count: " << ++count << " (증가 후 출력)" << endl;
    cout << "현재값: " << count << endl;
    
    cout << "\n=== 4. 비교 연산자 ===" << endl;
    
    int x = 10;
    int y = 20;
    
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x == y (같다): " << (x == y) << endl;
    cout << "x != y (다르다): " << (x != y) << endl;
    cout << "x > y (크다): " << (x > y) << endl;
    cout << "x < y (작다): " << (x < y) << endl;
    cout << "x >= y (크거나 같다): " << (x >= y) << endl;
    cout << "x <= y (작거나 같다): " << (x <= y) << endl;
    
    cout << "\n=== 5. 논리 연산자 ===" << endl;
    
    bool isSunny = true;
    bool isWarm = true;
    bool isRaining = false;
    
    cout << "날씨가 맑다: " << isSunny << endl;
    cout << "날씨가 따뜻하다: " << isWarm << endl;
    cout << "비가 온다: " << isRaining << endl;
    
    cout << "맑고 따뜻하다(isSunny && isWarm): " << (isSunny && isWarm) << endl;
    cout << "맑거나 따뜻하다(isSunny || isWarm): " << (isSunny || isWarm) << endl;
    cout << "비가 안 온다(!isRaining): " << (!isRaining) << endl;
    
    cout << "\n=== 6. 복합 대입 연산자 ===" << endl;
    
    int num = 10;
    cout << "초기값: " << num << endl;
    
    num += 5;
    cout << "num += 5: " << num << endl;
    
    num -= 3;
    cout << "num -= 3: " << num << endl;
    
    num *= 2;
    cout << "num *= 2: " << num << endl;
    
    num /= 4;
    cout << "num /= 4: " << num << endl;
}

// === src/02_control_flow.cpp 내용 포함 ===
void learnControlFlow() {
    cout << "\n=== 1. if 조건문 ===" << endl;
    
    int score = 85;
    cout << "점수: " << score << endl;
    
    if (score >= 90) {
        cout << "학점: A" << endl;
    } else if (score >= 80) {
        cout << "학점: B" << endl;
    } else if (score >= 70) {
        cout << "학점: C" << endl;
    } else if (score >= 60) {
        cout << "학점: D" << endl;
    } else {
        cout << "학점: F" << endl;
    }
    
    cout << "\n=== 2. 삼항 연산자 (조건 연산자) ===" << endl;
    
    int age = 20;
    string ageGroup = (age >= 19) ? "성인" : "미성년자";
    cout << "나이: " << age << " -> " << ageGroup << endl;
    
    cout << "\n=== 3. switch 문 ===" << endl;
    
    int day = 3;
    cout << "요일 번호: " << day << " -> ";
    
    switch (day) {
        case 1:
            cout << "월요일" << endl;
            break;
        case 2:
            cout << "화요일" << endl;
            break;
        case 3:
            cout << "수요일" << endl;
            break;
        case 4:
            cout << "목요일" << endl;
            break;
        case 5:
            cout << "금요일" << endl;
            break;
        case 6:
            cout << "토요일" << endl;
            break;
        case 7:
            cout << "일요일" << endl;
            break;
        default:
            cout << "잘못된 요일 번호" << endl;
    }
    
    cout << "\n=== 4. for 반복문 ===" << endl;
    
    cout << "1부터 5까지: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "5부터 1까지: ";
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "2씩 증가(0~10): ";
    for (int i = 0; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "\n=== 5. while 반복문 ===" << endl;
    
    int count = 1;
    cout << "while (1부터 5까지): ";
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    
    cout << "\n=== 6. do-while 반복문 ===" << endl;
    
    int num = 1;
    cout << "do-while (1부터 5까지): ";
    do {
        cout << num << " ";
        num++;
    } while (num <= 5);
    cout << endl;
    
    cout << "\n=== 7. break와 continue ===" << endl;
    
    cout << "break 예제 (5에서 멈춤): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    
    cout << "continue 예제 (짝수만 출력): ";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    
    cout << "\n=== 8. 중첩 반복문 (구구단 예제) ===" << endl;
    
    for (int dan = 2; dan <= 3; dan++) {
        cout << "\n[" << dan << "단]" << endl;
        for (int num = 1; num <= 9; num++) {
            cout << dan << " × " << num << " = " << (dan * num) << endl;
        }
    }
    
    cout << "\n=== 9. 별 찍기 패턴 ===" << endl;
    
    cout << "\n직각삼각형:" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\n역직각삼각형:" << endl;
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// === src/03_functions.cpp 내용 포함 ===
void sayHello() {
    cout << "안녕하세요!" << endl;
}

void greet(string name) {
    cout << name << "님, 환영합니다!" << endl;
}

int add(int a, int b) {
    return a + b;
}

double calculateAverage(int num1, int num2, int num3) {
    double sum = num1 + num2 + num3;
    return sum / 3.0;
}

bool isEven(int number) {
    return (number % 2 == 0);
}

string getGrade(int score) {
    if (score >= 90) return "A";
    else if (score >= 80) return "B";
    else if (score >= 70) return "C";
    else if (score >= 60) return "D";
    else return "F";
}

void doubleValue(int &num) {
    num = num * 2;
}

void printMessage(string message, int count = 1) {
    for (int i = 0; i < count; i++) {
        cout << message << endl;
    }
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

string repeatString(string str, int times) {
    string result = "";
    for (int i = 0; i < times; i++) {
        result += str;
    }
    return result;
}

void learnFunctions() {
    cout << "\n=== 1. 기본 함수 호출 ===" << endl;
    sayHello();
    
    cout << "\n=== 2. 매개변수가 있는 함수 ===" << endl;
    greet("홍길동");
    greet("김철수");
    
    cout << "\n=== 3. 반환값이 있는 함수 ===" << endl;
    int sum = add(10, 20);
    cout << "10 + 20 = " << sum << endl;
    cout << "5 + 7 = " << add(5, 7) << endl;
    
    cout << "\n=== 4. 평균 계산 함수 ===" << endl;
    double avg = calculateAverage(80, 90, 100);
    cout << "80, 90, 100의 평균: " << avg << endl;
    
    cout << "\n=== 5. 짝수 판별 함수 ===" << endl;
    int num = 8;
    if (isEven(num)) {
        cout << num << "은(는) 짝수입니다." << endl;
    } else {
        cout << num << "은(는) 홀수입니다." << endl;
    }
    
    cout << "\n=== 6. 학점 계산 함수 ===" << endl;
    cout << "85점의 학점: " << getGrade(85) << endl;
    cout << "92점의 학점: " << getGrade(92) << endl;
    
    cout << "\n=== 7. 참조자 사용 ===" << endl;
    int value = 10;
    cout << "원래 값: " << value << endl;
    doubleValue(value);
    cout << "2배 후: " << value << endl;
    
    cout << "\n=== 8. 기본 매개변수 ===" << endl;
    printMessage("안녕하세요");
    printMessage("반갑습니다", 3);
    
    cout << "\n=== 9. 함수 오버로딩 ===" << endl;
    cout << "정수 곱셈 multiply(3, 4): " << multiply(3, 4) << endl;
    cout << "실수 곱셈 multiply(2.5, 3.0): " << multiply(2.5, 3.0) << endl;
    cout << "3개 곱셈 multiply(2, 3, 4): " << multiply(2, 3, 4) << endl;
    
    cout << "\n=== 10. 재귀 함수 (팩토리얼) ===" << endl;
    cout << "5! = " << factorial(5) << endl;
    cout << "6! = " << factorial(6) << endl;
    
    cout << "\n=== 11. 실용적인 함수 예제 ===" << endl;
    
    cout << "10, 25, 15 중 최대값: " << findMax(10, 25, 15) << endl;
    
    int testNum = 17;
    if (isPrime(testNum)) {
        cout << testNum << "은(는) 소수입니다." << endl;
    } else {
        cout << testNum << "은(는) 소수가 아닙니다." << endl;
    }
    
    cout << "문자열 반복: " << repeatString("Hello ", 3) << endl;
}
