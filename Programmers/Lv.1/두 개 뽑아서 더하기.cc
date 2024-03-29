// https://school.programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
  vector<int> answer;
  for (int i=0; i < numbers.size(); i++) {
    for (int j=i+1; j < numbers.size(); j++) {
      answer.push_back(numbers[i] + numbers[j]);
    }
  }
  // 정렬 후 중복 제거(!)
  sort(answer.begin(), answer.end());
  answer.erase(unique(answer.begin(), answer.end()), answer.end());
  return answer;
}