#include <iostream>
#include <string>
using namespace std;

struct Question
{
  string q; // ��蕶
  int a;    // ����
};

int main()
{
  Question questions[] = {
    { "13�~(-5)�̓����́H\n", 13 * -5 },
    { "(-21)��(-3)�̓����́H\n", -21 / -3 },
    { "7-(4+2)��2�̓����́H\n", 7 - (4 + 2) / 2 },
  };

  cout << "[���N���[�g�����΍�N�C�Y]\n";

  for (const auto& e : questions) {
    cout << e.q;
    int answer;
    cin >> answer;
    if (answer == e.a) {
      cout << "�����I\n";
    } else {
      cout << "�ԈႢ�I ������" << e.a << "\n";
    }
  } // for questions
}