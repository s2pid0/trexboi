

#include <iostream>

using namespace std;

class Person
{
private:
	int id{ -1 };
	string name{ "NONE" };
	int age{ -1 };
	int height{ -1 };
public:
	Person() : id(-1), name("NONE"), age(-1), height(-1)
	{ }


	int getID() const { return id; }
	string getName() const { return name; }
	int getAge() const { return age; }
	int getHeight() const { return height; }
	void showInfo() const
	{
		cout << "ID: " << id << "\tИмя: " << name << "\tВозраст: " << age << "\tРост: " << height << endl;
	}


	void setID()
	{
		cout << "Введите ID: ";
		cin >> id;
	}
	void setName()
	{
		cout << "Введите имя: ";
		cin >> name;
	}
	void setAge()
	{
		cout << "Введите возраст: ";
		cin >> age;
	}
	void setHeight()
	{
		cout << "Введите рост: ";
		cin >> height;
	}
	void setInfo();
};

void Person::setInfo()
{
	setID();
	setName();
	setAge();
	setHeight();
}


Person* findByID(Person* people, const int N, const int id)
{
	for (int i = 0; i < N; i++)
	{
		if (id == people[i].getID())
		{
			return &people[i];
			break;
		}
	}
	return NULL;
}

int main()
{



	int count{ 0 };
	cout << "Введите количество людей: ";
	cin >> count;
	if (count < 1)
	{
		cerr << "ОШИБКА: количество людей не может быть меньше 1!\n";
		system("pause");
		return 1;
	}
	Person* people = new Person[count]; 

	for (int i = 0; i < count; i++)
	{
		cout << "\nВвод информации о " << i + 1 << " человеке:\n";
		people[i].setInfo();
	}

	int decision{ 0 }; 
	bool n = true; 
	int id{ -1 };
	Person* persn{ NULL };
	do
	{
		cout << "\nВыберите действие:\n0 - завершить работу\n1 - посмотреть список имен\n2 - возраст по ID\n3 - имя по ID\n4 - рост по ID\n5 - посмотреть полную информацию о человеке\n6 - изменить конкретную информацию о человеке\n"
			<< "Введите номер выбранного действия: ";
		cin >> decision;

		switch (decision)
		{
		case 0:
			n = false;
			break;
		case 1:
			cout << "ID\tИмя\n";
			for (int i = 0; i < count; i++)
				cout << people[i].getID() << '\t' << people[i].getName() << endl;
			break;
		case 2:
		    cout << "Введите ID\n";
		    cin >> id;
		    persn = findByID(people, count, id);
			if (persn != NULL) cout << "Возраст: " << persn->getAge();
			else cout << "Человек с требуемым ID не найден, попробуйте еще раз!\n";
			persn = NULL;
			break;
		case 3:
		    cout << "Введите ID\n";
		    cin >> id;
		    persn = findByID(people, count, id);
			if (persn != NULL) cout << "Имя: "<< persn->getName();
			else cout << "Человек с требуемым ID не найден, попробуйте еще раз!\n";
			persn = NULL;
			break;
		case 4:
		    cout << "Введите ID\n";
		    cin >> id;
		    persn = findByID(people, count, id);
			if (persn != NULL) cout << "Рост: "<< persn->getHeight();
			else cout << "Человек с требуемым ID не найден, попробуйте еще раз!\n";
			persn = NULL;
			break;
		case 5:
			cout << "Введите ID\n";
			cin >> id;
			persn = findByID(people, count, id);
			if (persn != NULL) persn->showInfo();
			else cout << "Человек с требуемым ID не найден, попробуйте еще раз!\n";
			persn = NULL;
			break;
		case 6:
			cout << "Введите ID\n";
			cin >> id;
			persn = findByID(people, count, id);
			if (persn != NULL)
			{
				cout << "Введите измененную информацию:\n";
				persn->setInfo();
			}
			else cout << "Человек с требуемым ID не найден, попробуйте еще раз!\n";
			persn = NULL;
			break;
		default:
			cout << "Такого варианта действия не существует, попробуйте еще раз!\n";
			break;
		}
	} while (n);

	delete[] people;
	people = NULL;
	system("pause");
	return 0;
}

