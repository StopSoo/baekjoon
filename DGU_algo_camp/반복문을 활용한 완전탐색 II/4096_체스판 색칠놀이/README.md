## 🏁 4096. 체스판 색칠놀이
윌리는 MXN 크기의 보드판을 가지고 있다.
보드의 각 칸은 흰색으로 색칠되어 있거나 검은색으로 색칠되어 있으며 이 보드를 잘라서 8X8 크기의 체스판을 만드려고 한다.
체스판은 흰색과 검은색이 번갈아 나타나는 형태이며, 왼쪽 위 칸의 색이 흰색일 수도 있고 검은색일 수도 있다.

보드판을 8X8 형태로 자른 후에 바로 체스판이 만들어지지 않는다면, 체스판으로 만들기 위해 몇 개의 칸을 다른 색으로 덧칠해야만 한다.
보드판에서 8X8 크기는 아무렇게나 고를 수 있다고 할 때, 다시 칠하는 칸의 수를 최소화하는 프로그램을 만들어보자.

첫 번째 줄에는 양의 정수 N과 M이 주어진다. $8 ≤ N,M ≤ 50$
<br>두 번째 줄부터 N개 줄에는 보드판의 상태가 주어진다. 
<br>흰 색으로 색칠되어 있다면 **W**로, 검은 색으로 색칠되어 있다면 **B**로 입력된다.

다시 칠해야 하는 정사각형 수의 최소값을 출력하자.

### 📝 입력 예제
8 8<br>
WBWBWBWB<br>
BWBWBWBW<br>
WBWBWBWB<br>
BWBBBWBW<br>
WBWBWBWB<br>
BWBWBWBW<br>
WBWBWBWB<br>
BWBWBWBW

### 🖨️ 출력 예제
1