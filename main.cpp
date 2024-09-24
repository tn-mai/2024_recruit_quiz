#include <iostream>
#include <string>
using namespace std;

struct Question
{
  string q; // 問題文
  int a;    // 答え
};

int main()
{
  Question questions[] = {
    { "13×(-5)の答えは？\n", 13 * -5 },
    { "(-21)÷(-3)の答えは？\n", -21 / -3 },
    { "7-(4+2)÷2の答えは？\n", 7 - (4 + 2) / 2 },
  };

  cout << "[リクルート試験対策クイズ]\n";

  for (const auto& e : questions) {
    cout << e.q;
    int answer;
    cin >> answer;
    if (answer == e.a) {
      cout << "正解！\n";
    } else {
      cout << "間違い！ 正解は" << e.a << "\n";
    }
  } // for questions
}