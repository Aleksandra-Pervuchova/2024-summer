#include <iostream>

using namespace std;

class Component
{
public:

	string companyName;

	Component(string companyName)
	{
		cout << "����������� Component" << endl;
		this->companyName = companyName;
	}
};

class GPU: public Component //graphics processing unit - ����������� ���������
{
public:
	GPU(string companyName) : Component(companyName)
	{
		cout << "����������� GPU" << endl;
	}
};

class Memory : public Component
{
public:
	Memory(string companyName) : Component(companyName)
	{
		cout << "����������� Memory" << endl;
	}
};

class GraphicCard : public GPU, public Memory
{
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName): GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "����������� GraphicCard" << endl;
	}
};

class Character
{
public:

	Character(int hp)
	{
		cout << "����������� Character" << endl;
		this->HP = hp;
	}
	int HP;
};

class Orc: public virtual Character
{
public:

	Orc(int hp): Character(hp)
	{
		cout << "����������� Orc" << endl;
	}
};

class Warrior: public virtual Character
{
public:

	Warrior(int hp): Character(hp)
	{
		cout << "����������� Warrior" << endl;
	}
};

class OrcWarrior : public Orc, public Warrior
{
public:
	OrcWarrior(int hp):Character(hp),Orc(hp),Warrior(hp)
	{
		cout << "����������� OrcWarrior" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");                //"RUSSIAN"

	cout << "��� ������������ ������" << endl;
	cout << "---------------------------------" << endl;
	GraphicCard gc("AMD","Samsung");

	cout << "---------------------------------" << endl;
	cout << "---------------------------------" << endl;
	cout << "� ����������� �������" << endl;
	cout << "---------------------------------" << endl;
	OrcWarrior Dimon(3);
	cout << Dimon.HP << endl;
	return EXIT_SUCCESS;
}

