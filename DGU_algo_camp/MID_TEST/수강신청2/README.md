## 🏁 수강신청
> 망했다... 하나도 못 잡았다....
<br>
수강 신청이 열린지 시간이 꽤 됐지만 성준이는 차마 자리에서 일어날 수 없었다. 수강 신청을 망했기 때문이다.
<br><br>

> 한명.... 두명.... 세명....

<br>
친구들은 모두 부트캠프 수업을 들으러 갔지만 수강 신청을 망한 성준이는 종이에 무언가를 끄적이며 혼자 알 수 없는 말들을 중얼거리고 있다.
<br>한참을 중얼거리던 성준이는 무언가 좋은 수가 떠올랐는지 자리에서 벌떡 일어나 흥얼거리며 늦지 않게(부트캠프에 늦지 않는건 굉장히 중요하다) 부트캠프 수업을 들으러 갔다. 수업이 끝나고 뒷정리를 하던 승훈이는 이번에도 성준이가 떨어뜨린 종이를 보고 깜짝 놀라지만 그 결과가 매우 궁금해졌다. 종이에 적힌 내용은 다음과 같았다.<br><br>

> 괜찮아. 나에겐 친구들이 있어! 민균이, 찬혁이, 지수, ...<br>
> 걔들이 뭐를 잡았다고 했더라....<br>
> 좋아! 이 중 몇 명만 제거할 수 있다면.... 나에게도 올클의 기회가 올 수 있어! 좋아 애들이 있는 부트캠프 강의실로 가ㅈ.... <br>

<br>그렇다 $N$명의 친구를 가진 성준이는 자신이 잡지 못한 $M$개의 과목에 대하여 몇 명의 친구를 제거해 빈자리를 만드려고 했던 것이었다. 그러나 친구를 많이 잃으면 슬프기 때문에 최대한 적은 수의 친구들을 제거하고 싶어한다.
<br>성준이가 잡아야 하는 과목 번호와 친구들이 잡은 과목 번호가 주어졌을 때, 잡아야 하는 과목의 빈자리를 만들기 위해 제거해야 하는 친구의 최소 수를 구해주자.

첫째 줄에는 성준이의 친구의 수와 성준이가 잡아야 하는 과목의 수 N과 M이 공백을 사이에 두고 주어진다. (1 ≤ $N$ ≤ 10, 1 ≤ $M$ ≤ 1,000)
<br>둘째 줄에는 성준이가 잡아야 하는 $M$개의 과목 번호가 공백을 사이에 두고 주어진다.
<br>다음 $N$개의 줄에는 각 친구들이 잡은 과목의 수 $a_i$와 해당 학생이 잡은 $a_i$개의 과목 번호가 공백을 사이에 두고 주어진다. (1 ≤ $a_i$ ≤ 1,000)

모든 과목 번호는 1,000 이하의 자연수이다.

성준이가 잡아야 하는 $M$개의 과목을 잡기 위해 제거해야 하는 친구의 최소 수를 출력하여라. 만약 그러한 경우의 수가 존재하지 않는다면 -1을 출력하여라.

### 📝 입력 예제
4 5<br>
1 2 3 4 5 <br>
3 2 3 4 <br>
2 1 2 <br>
3 2 4 5 <br>
1 4 


### 🖨️ 출력 예제
3
