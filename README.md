## 운영체제와 컴퓨터 하드웨어

### CPU의 구성요소 ALU,CU 그리고 레지스터 각각의 역할을 간략하게 정리해보자

```
- ALU(Arithmetic and logical unit)
- 산술 및 논리 연산을 수행하는 CPU의 핵심 구성 요소.
- 주어진 입력에 대해 두 개 이상의 숫자를 취하여 산술 연산 (덧셈, 뺄셈, 곱셈 등) 및 논리 연산 (AND, OR, NOT 등)을 수행함.
- 데이터 처리 및 계산을 담당하여 CPU의 연산 기능을 구현함.

- CU(Control unit)
- CPU 내부에서 명령어를 해석하고 실행하기 위한 제어 장치.
- 명령어를 가져오고 해독하여 명령어의 실행 순서를 결정하고, 다른 구성 요소들을 제어하여 작업을 수행함.
- CPU의 동작을 조정하고 제어함으로써 프로그램의 실행을 가능하게 함.

- 레지스터(Registers)
- CPU 내부에 위치한 고속 데이터 저장소.
- 레지스터는 CPU가 현재 처리 중인 데이터나 주소를 일시적으로 저장함.
- 연산에 필요한 데이터나 명령어 주소 등을 저장하고, CPU가 작업을 수행하는 동안 데이터를 빠르게 접근할 수 있도록 지원함.
```

### 메인 메모리와 보조기억장치의 차이를 간략하게 서술해보자

```
- 메인 메모리(RAM)
- CPU가 직접 접근하여 데이터를 읽고 쓸 수 있는 주 기억장치.
- 빠른 읽기와 쓰기 속도를 제공하여 프로그램이 실행될 때 사용되는 데이터와 명령어를 저장함.
- 주로 전원이 꺼지면 데이터가 손실되는 휘발성 메모리이며, 주로 RAM(Random Access Memory)으로 구성됨.

- 보조기억장치(HDD,SSD)
- 대용량의 데이터를 영구적으로 저장하고 보관하는 데 사용되는 보조적인 저장장치.
- 주로 하드 디스크 드라이브(HDD), 솔리드 스테이트 드라이브(SSD), 광학 디스크 (CD, DVD), USB 플래시 드라이브 등이 포함됨.
- 느린 접근 속도를 가지고 있지만, 대용량의 데이터를 비교적 저렴하게 저장 가능하며 전원이 꺼져도 데이터가 유지되는 비휘발성 메모리로 구성됨.
```

### 3. 버스 시스템은 데이터를 주고받기위한 경로, 데이터의 종류에 따라 세가지로 구분되는데 그 세가지가 무엇인지 말해보자.

```
- 주소 버스 (Address Bus)
- CPU에서 메모리나 입출력 장치로 주소 정보를 전송하는 데 사용되는 버스입니다.
- CPU가 특정 메모리 위치나 입출력 장치에 데이터를 읽거나 쓸 때 사용됩니다.
- 주소 버스의 폭은 메모리 주소 공간의 크기를 결정하며, 이는 CPU가 직접 액세스할 수 있는 메모리의 양을 결정합니다.

- 데이터 버스 (Data Bus)
- CPU와 메모리, 입출력 장치 간에 실제 데이터를 전송하는 데 사용되는 버스입니다.
- CPU가 메모리에서 데이터를 읽거나 쓸 때 사용됩니다.
- 데이터 버스의 폭은 한 번에 전송할 수 있는 데이터의 비트 수를 결정하며, 이는 시스템의 데이터 전송 속도를 결정합니다.

- 제어 버스 (Control Bus)
- 데이터 및 주소 버스의 동작을 제어하기 위해 사용되는 버스입니다.
- 제어 신호는 CPU와 메모리, 입출력 장치 간의 데이터 전송을 조정하고 동기화하는 데 사용됩니다.
- 예를 들어, 읽기 및 쓰기 작업을 신호화하고, 버스의 상태를 제어하는 신호가 포함됩니다.
```

## 데드락(Deadlock)

```
데드락(Deadlock)은 컴퓨터 과학에서 다중 프로세스나 스레드 간에 자원을 할당하는 과정에서 발생하는 상태로, 각 프로세스나 스레드가 서로가 가진 자원을 기다리면서 무한 대기 상태에 빠지는 상황
```

### 데드락의 4가지 조건

```
- 상호 배제 (Mutual Exclusion): 하나의 자원은 한 번에 하나의 프로세스나 스레드만 사용할 수 있습니다.
- 점유 대기 (Hold and Wait): 프로세스나 스레드가 최소한 하나의 자원을 점유한 상태에서 다른 자원을 기다리고 있습니다.
- 비선점 (No Preemption): 자원을 다른 프로세스나 스레드로부터 강제로 빼앗을 수 없습니다. 자원을 점유한 프로세스나 스레드가 자발적으로 반납할 때까지 기다려야 합니다.
- 환형 대기 (Circular Wait): 프로세스나 스레드의 집합이 서로가 소유한 자원을 원형으로 기다리고 있습니다. 즉, 각 프로세스나 스레드는 다음에 필요한 자원을 이전에 있는 프로세스나 스레드가 점유하고 있습니다.
```

### 식사하는 철학자 문제

```
다섯 명의 철학자가 하나의 원탁에 앉아 식사를 한다. 각각의 철학자들 사이에는 포크가 하나씩 있고, 앞에는 접시가 있다. 접시 안에 든 요리는 포크를 두개 사용하여 먹어야만 한다. 그리고 각각의 철학자는 다른 철학자에게 말을 할 수 없으며, 번갈아가며 각자 식사하거나 생각하는 것만 가능하다. 따라서 식사를 하기 위해서는 왼쪽과 오른쪽의 인접한 철학자가 모두 식사를 하지 않고 생각하고 있어야만 한다. 또한 식사를 마치고 나면, 왼손과 오른손에 든 포크를 다른 철학자가 쓸 수 있도록 내려놓아야 한다. 이 때, 어떤 철학자도 굶지 않고 식사할 수 있도록 하는 방법

자원 할당 순서 지정하기: 철학자들에게 젓가락을 어떤 순서로 요청하고 사용할지 지정함으로써 데드락을 방지할 수 있습니다. 예를 들어, 모든 철학자가 왼쪽 젓가락부터 요청하도록 하는 것이 일반적인 방법
```

## 스레싱과 워킹셋

### 스레싱

```
스레싱(Thrashing)은 컴퓨터 시스템에서 발생하는 현상으로, 과도한 페이지 부재(Page Fault)가 발생하여 시스템의 성능이 급격하게 저하되는 현상을 말합니다. 스레싱은 주로 가상 메모리 관리 시스템에서 발생하는데, 프로세스들이 필요한 데이터를 가져오기 위해 반복적으로 디스크로부터 페이지를 가져오는 과정에서 발생
```

### 스레싱의 원인

```
- 과도한 페이지 부재: 메모리에 올라와 있는 프로세스의 페이지 수가 실제로 필요한 페이지 수보다 훨씬 많을 때 발생합니다.
- 과도한 프로세스 활동: 많은 프로세스들이 동시에 실행되고 있을 때 발생할 가능성이 높습니다.
- 적절하지 않은 페이지 교체 알고리즘: 페이지 교체 알고리즘이 최적이 아닐 때 발생할 수 있습니다.
- 스레싱이 발생하면 CPU가 페이지 부재를 처리하기 위해 대부분의 시간을 소비하게 되어 실제로 유용한 작업을 수행하지 못하게 됩니다.
```

```
해결 방법 : 워킹 셋 (Working set)
- 프로세스가 일정 시간 동안 자주 참조하는 페이지들의 집합
- 자주 참조되는 워킹 셋을 주기억장치에 상주시킴으로써 페이지 부재 및 페이지 교체 현상을 줄인다.
- 즉, 가장 많이 사용되는 페이지를 미리 저장하여 페이지 교체 현상을 해결
```

## 연결리스트

### 연결리스트

```
- 연결 리스트(Linked List)는 데이터 요소가 순서대로 연결된 데이터 구조입니다. 각 요소는 데이터와 다음 요소를 가리키는 포인터(참조)로 이루어져 있습니다. 간단히 말하면, 데이터 요소와 다음 요소를 가리키는 링크로 구성된 목록
- 연결 리스트는 배열과 달리 메모리에 연속적으로 저장되지 않으며, 각 요소는 동적으로 할당될 수 있습니다. 이로써 데이터의 삽입, 삭제 등의 작업이 배열에 비해 유연하게 처리될 수 있습니다. 하지만 연결 리스트는 임의 접근이 불가능하므로 특정 인덱스의 요소에 직접 접근하는 데는 O(n)의 시간이 걸립니다.
- 단일 연결 리스트(Singly Linked List), 이중 연결 리스트(Doubly Linked List), 원형 연결 리스트(Circular Linked List) 등이 있다.
```
