#include<iostream>
using namespace std;

class Animal
{
	string name;
	double size;
	double weight;
	int age;

public:

	Animal()
	{
		name = "";
		size = weight = age = 0;
	}

	Animal(string n,double s, double w, int a)
	{
		name = n;
		size = s;
		weight = w;
		age = a;
	}

	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Size: " << size << endl;
		cout << "Weight: " << weight << endl;
		cout << "Age: " << age << endl;
	}

	void Input()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter size: ";
		cin >> size;
		cout << "Enter weight: ";
		cin >> weight;
		cout << "Enter age: ";
		cin >> age;
	}
};

class Elephant : public Animal
{
	double trunk;
	double horn;
public:
	Elephant()
	{
		trunk = horn = 0;
	}
	Elephant(string n, double s, double w, int a, double t, double h) :Animal(n, s, w, a)
	{
		trunk = t;
		horn = h;
	}
	void Print()
	{
		Animal::Print();
		cout << "Trunk: " << trunk << endl;
		cout << "Horn: " << horn << endl;
	}
};

class Penguin : public Animal
{
	string kind;
	double food;
public:
	Penguin()
	{
		kind = "";
		food = 0;
	}
	Penguin(string n, double s, double w, int a, string k, double f) :Animal(n, s, w, a)
	{
		kind = k;
		food = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Kind: " << kind << endl;
		cout << "Food: " << food << endl;
	}
};

class Parrot : public Animal
{
	string color;
	string voice;
public:
	Parrot()
	{
		color = voice = "";
	}
	Parrot(string n, double s, double w, int a, string c, string v) :Animal(n, s, w, a)
	{
		color = c;
		voice = v;
	}
	void Print()
	{
		Animal::Print();
		cout << "Color: " << color << endl;
		cout << "Voice: " << voice << endl;
	}
};

class Dog : public Animal
{
	string nick;
	string breed;
public:
	Dog()
	{
		nick = breed = "";
	}
	Dog(string n, double s, double w, int a, string N, string b) :Animal(n, s, w, a)
	{
		nick = N;
		breed = b;
	}
	void Print()
	{
		Animal::Print();
		cout << "Nick: " << nick << endl;
		cout << "Breed: " << breed << endl;
	}
};

int main()
{
	Elephant obj1("Maphin", 23, 300, 50, 3, 1.5);
	obj1.Print();
	cout << endl;
	Penguin obj2("Merlin", 10, 20, 15, "Goldhair", 15);
	obj2.Print();
	cout << endl;
	Parrot obj3("Kesh", 0.5, 1, 3, "blue-yellow", "yes");
	obj3.Print();
	cout << endl;
	Dog obj4("Maksimilian", 2, 5, 3, "Maks", "dachshund");
	obj4.Print();
	cout << endl;
}