## 🏁 4679. 출퇴근
윌리가 일하는 회사에는 출근할 때와 퇴근할 때에 카드를 태그하여 출퇴근 기록을 기록할 수 있는 기기가 있다.
<br>윌리는 지금 회사에 누가 일하고 있는지 궁금하여 이 기기의 로그를 전부 가지고 왔다.
<br>이 로그는 직원의 이름과 $enter$ / $leave$ 의 쌍으로 이루어져있다.
<br>$enter$는 출근 기록, $leave$는 퇴근 기록을 의미한다.
<br>윌리를 도와 기기의 로그로부터 현재 회사에서 일을 하고 있는 사람들의 명단을 구해보자.

첫째 줄에 로그의 기록 수 $N$이 주어진다.($N$ ≤ $10^6$)
<br>둘째 줄부터 $N$개 줄에 걸쳐 로그의 기록들이 주어진다
<br>로그의 기록은 직원의 이름과 $enter$ 또는 $leave$가 공백을 사이에 두고 주어진다.
<br>직원의 이름은 최장 5글자의 알파벳 대소문자로 이루어진 문자열이며, 대소문자가 다른 경우 다른 직원이다.

첫 줄에 현재 일을 하고 있는 직원의 수를 출력한다.
이후 한 줄에 한 개씩 현재 일을 하고 있는 직원들의 이름을 한 줄에 하나씩 오름차순으로 출력한다. (문자열 기본 정렬 순서)

### 📝 입력 예제
6<br>
A enter<br>
B enter<br>
A leave<br>
C enter<br>
A enter<br>
B leave

### 🖨️ 출력 예제
2<br>
A<br>
C

