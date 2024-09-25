#include <iostream>
#include <string>
#include <random>
using namespace std;

struct Question
{
  string q; // ��蕶
  int a;    // ����
};

int main()
{
  Question questions[3];

  random_device rd;
  mt19937 rand(rd());

  // �|���Z
  int x = uniform_int_distribution<>(1, 30)(rand);
  int y = uniform_int_distribution<>(1, 20)(rand);
  questions[0].q = to_string(x) + "x" + to_string(y) + "�̓����́H\n";
  questions[0].a = x * y;

  // ����Z
  x = uniform_int_distribution<>(1, 30)(rand);
  y = uniform_int_distribution<>(1, 20)(rand);
  questions[1].q = to_string(x * y) + "��" + to_string(y) + "�̓����́H\n";
  questions[1].a = x;

  // ���G�Ȏ�
  x = uniform_int_distribution<>(1, 100)(rand);
  y = uniform_int_distribution<>(1, 10)(rand);
  int z = uniform_int_distribution<>(1, 10)(rand);
  int w = uniform_int_distribution<>(1, 10)(rand);
  questions[2].q = to_string(x) + "-(" + to_string(y * w) + "+" + to_string(z * w) + ")��" + to_string(w) + "�̓����́H\n";
  questions[2].a = x - (y + z);

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