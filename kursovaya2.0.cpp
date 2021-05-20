#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define _CRT_SECURE_NO_WARNING
using namespace std;
char* settime(struct tm* u);

double InputDouble()
{
	double n;
	while (!(std::cin >> n) || std::cin.peek() != '\n')
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
		{
		}
		std::cout << "Ошибка!Неверный ввод!\n";
	}
	return n;
}

int InputInt()
{
	int n;
	while (!(std::cin >> n) || std::cin.peek() != '\n' || (n - int(n)) != 0)
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
		{
		}
		std::cout << "Ошибка!Неверный ввод!\n";
	}
	return n;
}

namespace Books
{

	class ClassicBook
	{
		string Name;
		string Author;
		int PublishData = 0;
		time_t Time = 0;

	public:
		ClassicBook() {};
		
		~ClassicBook() {};
		
		friend string Change_Name(ClassicBook* Book);
		friend string Change_Author(ClassicBook* Book);
		friend double Change_PublishData(ClassicBook* Book);
		friend std::ofstream& operator <<(std::ofstream& out, const ClassicBook& book)
		{
			out << "Название книги:" << book.Name << " Автор книги:" << book.Author << endl;
			out << "Дата публикации:" << book.PublishData << endl;
			return out;
		}
		friend std::istream& operator >> (std::ifstream& in, ClassicBook& book)
		{
			in >> book.Name;
			in >> book.Author;
			in >> book.PublishData;
		}
		void SetClassicBook()
		{
			cout << "Введите название:";
			cin.clear();
			cin.ignore();
			getline(cin, Name);
			cin.clear();
			cout << "Введите автора:";
			getline(cin, Author);
			cout << "Введите год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}

		void PreSetClassicBook(string name, string author, int Publishdata)
		{
			Name = name;
			Author = author;
			PublishData = Publishdata;
			Time = time(NULL);
		}

		string Get_Name()
		{
			return this->Name;
		}

		string Get_Author()
		{
			return this->Author;
		}

		double Get_PublishData()
		{
			return this->PublishData;
		}

		time_t Get_Time()
		{
			return this->Time;
		}

		void Set_Name()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите название:";
			getline(cin, Name);
			Time = time(NULL);
		}

		void Set_Author()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите нового автора:";
			getline(cin, Author);
			Time = time(NULL);
		}

		void Set_PublishDate()
		{
			cout << "Введите новый год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}
	};

	template <typename T>
	string Change_Name(T* Book)
	{
		cout << "Введите новое название:";
		cin.clear();
		cin.ignore();
		getline(cin, Book->Name);
		Book->Time = time(NULL);
		return Book->Name;
	}

	template <typename T>
	string Change_Author(T* Book)
	{
		cout << "Введите нового автора:";
		cin.clear();
		cin.ignore();
		getline(cin, Book->Author);
		Book->Time = time(NULL);
		return Book->Author;
	}

	template <typename T>
	double Change_PublishData(T* Book)
	{
		cout << "Введите новый год издания:";
		
		do
		{
			Book->PublishData = InputInt();
		} while (Book->PublishData < 0 || Book->PublishData > 2021);
		Book->Time = time(NULL);
		return Book->PublishData;
	}

	class ScientificBook
	{
		string Name;
		string Author;
		int PublishData=0;
		time_t Time=0;

	public:
		ScientificBook()
		{
		};

		~ScientificBook()
		{
		};
		friend string Change_Name(ScientificBook* Book);
		friend string Change_Author(ScientificBook* Book);
		friend double Change_PublishData(ScientificBook* Book);
		friend std::ofstream& operator <<(std::ofstream& out, const ScientificBook& book)
		{
			out << "Название книги:" << book.Name << " Автор книги:" << book.Author << endl;
			out << "Дата публикации:" << book.PublishData << endl;
			return out;
		}
		friend std::istream& operator >> (std::ifstream& in, ScientificBook& book)
		{
			in >> book.Name;
			in >> book.Author;
			in >> book.PublishData;
		}
		void SetScientificBook()
		{
			cout << "Введите название:";
			cin.clear();
			cin.ignore();
			getline(cin, Name);
			cin.clear();
			cout << "Введите автора:";
			getline(cin, Author);
			cout << "Введите год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}

		void PreSetScientificBook(string name, string author, int Publishdata)
		{
			Name = name;
			Author = author;
			PublishData = Publishdata;
			Time = time(NULL);
		}

		string Get_Name()
		{
			return this->Name;
		}

		string Get_Author()
		{
			return this->Author;
		}

		double Get_PublishData()
		{
			return this->PublishData;
		}

		time_t Get_Time()
		{
			return this->Time;
		}

		void Set_Name()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите название:";
			getline(cin, Name);
			Time = time(NULL);
		}

		void Set_Author()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите нового автора:";
			getline(cin, Author);
			Time = time(NULL);
		}

		void Set_PublishDate()
		{
			cout << "Введите новый год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}
	};

	class ArtBook
	{
		string Name;
		string Author;
		int PublishData=0;
		time_t Time=0;
	public:
		ArtBook()
		{
		};

		~ArtBook()
		{
		};
		friend string Change_Name(ArtBook* Book);
		friend string Change_Author(ArtBook* Book);
		friend double Change_PublishData(ArtBook* Book);
		friend std::ofstream& operator <<(std::ofstream& out, const ArtBook& book)
		{
			out << "Название книги:" << book.Name << " Автор книги:" << book.Author << endl;
			out << "Дата публикации:" << book.PublishData << endl;
			return out;
		}
		friend std::istream& operator >> (std::ifstream& in, ArtBook& book)
		{
			in >> book.Name;
			in >> book.Author;
			in >> book.PublishData;
		}
		void SetArtBook()
		{
			cout << "Введите название:";
			cin.clear();
			cin.ignore();
			getline(cin, Name);
			cin.clear();
			cout << "Введите автора:";
			getline(cin, Author);
			cout << "Введите год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}

		void PreSetArtBook(string name, string author, int Publishdata)
		{
			Name = name;
			Author = author;
			PublishData = Publishdata;
			Time = time(NULL);
		}

		string Get_Name()
		{
			return this->Name;
		}

		string Get_Author()
		{
			return this->Author;
		}

		double Get_PublishData()
		{
			return this->PublishData;
		}

		time_t Get_Time()
		{
			return this->Time;
		}

		void Set_Name()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите название:";
			getline(cin, Name);
			Time = time(NULL);
		}

		void Set_Author()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите нового автора:";
			getline(cin, Author);
			Time = time(NULL);
		}

		void Set_PublishDate()
		{
			cout << "Введите новый год издания:";
			
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}
	};

	class ChildrenBook
	{
		string Name;
		string Author;
		int PublishData=0;
		time_t Time=0;
	public:
		ChildrenBook()
		{
		};

		~ChildrenBook()
		{
		};
		friend string Change_Name(ChildrenBook* Book);
		friend string Change_Author(ChildrenBook* Book);
		friend double Change_PublishData(ChildrenBook* Book);
		friend std::ofstream& operator <<(std::ofstream& out, const ChildrenBook& book)
		{
			out << "Название книги:" << book.Name << " Автор книги:" << book.Author << endl;
			out << "Дата публикации:" << book.PublishData << endl;
			return out;
		}
		friend std::istream& operator >> (std::ifstream& in, ChildrenBook& book)
		{
			in >> book.Name;
			in >> book.Author;
			in >> book.PublishData;
		}
		void SetChildrenBook()
		{
			cout << "Введите название:";
			cin.clear();
			cin.ignore();
			getline(cin, Name);
			cin.clear();
			cout << "Введите автора:";
			getline(cin, Author);
			cout << "Введите год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}

		void PreSetChildrenBook(string name, string author, int Publishdata)
		{
			Name = name;
			Author = author;
			PublishData = Publishdata;
			Time = time(NULL);
		}

		string Get_Name()
		{
			return this->Name;
		}

		string Get_Author()
		{
			return this->Author;
		}

		double Get_PublishData()
		{
			return this->PublishData;
		}

		time_t Get_Time()
		{
			return this->Time;
		}

		void Set_Name()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите название:";
			getline(cin, Name);
			Time = time(NULL);
		}

		void Set_Author()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите нового автора:";
			getline(cin, Author);
			Time = time(NULL);
		}

		void Set_PublishDate()
		{
			cout << "Введите новый год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}
	};

	class Magazine
	{
		string Name;
		string Author;
		int PublishData=0;
		time_t Time=0;
	public:
		Magazine()
		{
		};

		~Magazine()
		{
		};
		friend string Change_Name(Magazine* Book);
		friend string Change_Author(Magazine* Book);
		friend double Change_PublishData(Magazine* Book);
		friend std::ofstream& operator <<(std::ofstream& out, const Magazine& book)
		{
			out << "Название книги:" << book.Name << " Автор книги:" << book.Author << endl;
			out << "Дата публикации:" << book.PublishData << endl;
			return out;
		}
		friend std::istream& operator >> (std::ifstream& in, Magazine& book)
		{
			in >> book.Name;
			in >> book.Author;
			in >> book.PublishData;
		}
		void SetMagazine()
		{
			cout << "Введите название:";
			cin.clear();
			cin.ignore();
			getline(cin, Name);
			cin.clear();
			cout << "Введите автора:";
			getline(cin, Author);
			cout << "Введите год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}

		void PreSetMagazine(string name, string author, int Publishdata)
		{
			Name = name;
			Author = author;
			PublishData = Publishdata;
			Time = time(NULL);
		}

		string Get_Name()
		{
			return this->Name;
		}

		string Get_Author()
		{
			return this->Author;
		}

		double Get_PublishData()
		{
			return this->PublishData;
		}

		time_t Get_Time()
		{
			return this->Time;
		}

		void Set_Name()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите название:";
			getline(cin, Name);
			Time = time(NULL);
		}

		void Set_Author()
		{
			cin.clear();
			cin.ignore();
			cout << "Введите нового автора:";
			getline(cin, Author);
			Time = time(NULL);
		}

		void Set_PublishDate()
		{
			cout << "Введите новый год издания:";
			do
			{
				PublishData = InputInt();
			} while (PublishData < 0 || PublishData > 2021);
			Time = time(NULL);
		}
	};
}

class Library : public Books::ClassicBook, public Books::ScientificBook, public Books::ArtBook, public Books::ChildrenBook, public Books::Magazine
{
	vector<ClassicBook> ClasBooks;
	vector<ScientificBook> ScienBooks;
	vector<ArtBook> ArtBooks;
	vector<ChildrenBook> ChilBooks;
	vector<Magazine> Magazines;
public:
	Library()
	{
	};

	~Library()
	{
	};

	vector<ClassicBook> Get_ClassBooks()
	{
		return ClasBooks;
	}

	vector<ScientificBook> Get_ScienBooks()
	{
		return ScienBooks;
	}

	vector<ArtBook> Get_ArtBooks()
	{
		return ArtBooks;
	}

	vector<ChildrenBook> Get_ChildrenBooks()
	{
		return ChilBooks;
	}

	vector<Magazine> Get_Magazine()
	{
		return Magazines;
	}

	template <typename T>
	void SortBookYears(vector<T> Books)
	{
		vector<int> temp;
		vector<T> NewBooks;
		int j = 0;
		
		for (size_t i = 0; i < Books.size(); i++)
		{
			temp.push_back(Books[i].Get_PublishData());
		}
		sort(temp.begin(), temp.end(),less<int>());
		cout << "Года публикаций:" << endl;
		for (int i = 0, ilen = temp.size(); i < ilen; i++)
		{
			cout << temp[i] << endl;
		}
	}

	template <typename T>
	vector<T> SortBookName(vector<T> Books)
	{
		vector<string> temp;
		vector<T> NewBooks;
		unique_ptr<int>   j(new int);
		for (int i = 0; i < Books.size(); i++)
		{
			temp.push_back(Books[i].Get_Name());
		}
		sort(temp.begin(), temp.end());
		for (int i = 0; i < temp.size(); i++)
		{
			cout << temp[i] << endl;
		}
		try {
			do
			{
				for (int i = 0; i < Books.size(); i++)
				{
					if (temp[*j] == Books[i].Get_Name())
					{
						(*j)++;
						NewBooks.push_back(Books[i]);
					}
				}
			} while (*j != Books.size());
		}
		catch (...)
		{
			cout << "Выход за пределы вектора!";
		}
		return NewBooks;
	}

	template <typename T>
	vector<T> SortBookAuthor(vector<T> Books)
	{
		vector<string> temp;
		vector<T> NewBooks;
		unique_ptr<int>    j(new int);
		for (int i = 0; i < Books.size(); i++)
		{
			temp.push_back(Books[i].Get_Author());
		}
		sort(temp.begin(), temp.end());
		for (int i = 0; i < temp.size(); i++)
		{
			cout << temp[i] << endl;
		}
		try
		{


			do
			{
				for (int i = 0; i < Books.size(); i++)
				{
					if (temp[*j] == Books[i].Get_Author())
					{
						(*j)++;
						NewBooks.push_back(Books[i]);
					}
				}
			} while (*j != Books.size());
		}
		catch (...)
		{
			cout << "Выход за пределы вектора!";
		}
		return NewBooks;
	}

	void AddBooks()
	{
		ClassicBook cl;
		ScientificBook sf;
		ArtBook ab;
		ChildrenBook cb;
		Magazine mg;
		int key = 0;
		cout << "Какой жанр книги вы хотите добавить?\n";
		cout << "1-Классическая книга\n2-Научная книга\n3-Художественная книга\n4-Детские книги\n5-Журнал\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 5);
		switch (key)
		{
		case 1:
			cl.SetClassicBook();
			ClasBooks.push_back(cl);
			break;
		case 2:
			sf.SetScientificBook();
			ScienBooks.push_back(sf);
			break;
		case 3:
			ab.SetArtBook();
			ArtBooks.push_back(ab);
			break;
		case 4:
			cb.SetChildrenBook();
			ChilBooks.push_back(cb);
			break;
		case 5:
			mg.SetMagazine();
			Magazines.push_back(mg);
			break;
		}
	}

	void Load()
	{
		ClassicBook cl;
		ScientificBook sf;
		ArtBook ab;
		ChildrenBook cb;
		Magazine mg;
		cl.PreSetClassicBook("Мастер и Маргарита", "Михаил Булгаков", 1940);
		ClasBooks.push_back(cl);
		cl.PreSetClassicBook("Преступление и наказание", "Федор Достоевский", 1868);
		ClasBooks.push_back(cl);
		cl.PreSetClassicBook("Война и мир", "Лев Толстой", 1865);
		ClasBooks.push_back(cl);
		sf.PreSetScientificBook("Краткая история ботаники", "Н. А. Базилевская", 1955);
		ScienBooks.push_back(sf);
		sf.PreSetScientificBook("Обыкновенные дифференциаль­ные уравнения", "АИНС Э.Л.", 1939);
		ScienBooks.push_back(sf);
		ab.PreSetArtBook("Академическое обучение изобразительному искусству", "Шаров Владимир Стефанович", 2014);
		ArtBooks.push_back(ab);
		ab.PreSetArtBook("Акварельные пейзажи.Основы, техники, эксперименты", "Харрисон Терри", 2018);
		ArtBooks.push_back(ab);
		cb.PreSetChildrenBook("Букварь", "Жуков.Б.А", 2016);
		ChilBooks.push_back(cb);
		cb.PreSetChildrenBook("Хроники Нарнии", "Клайв Стейплз Льюис", 2017);
		ChilBooks.push_back(cb);
		mg.PreSetMagazine("Лiтасфера", "Иванов.И.И", 1998);
		Magazines.push_back(mg);
		mg.PreSetMagazine("Планета", "Петров.П.П", 2011);
		Magazines.push_back(mg);
	}

	void ChoseForSort()
	{
		ClassicBook cl;
		ScientificBook sf;
		ArtBook ab;
		ChildrenBook cb;
		Magazine mg;
		int key=0;
		cout << "Какой жанр книги вы хотите отсортировать?\n";
		cout << "1-Классическая книга\n2-Научная книга\n3-Художественная книга\n4-Детские книги\n5-Журнал\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 5);
		switch (key)
		{
		case 1:
			SortBookYears(ClasBooks);
		
			break;
		case 2:
			SortBookYears(ScienBooks);
			
			break;
		case 3:
			SortBookYears(ArtBooks);
		
			break;
		case 4:
			SortBookYears(ChilBooks);
			
			break;
		case 5:
			SortBookYears(Magazines);
			
			break;
		}
	}

	template <typename T>
	static void ShowOneBook(T Book)
	{
		struct tm* u;
		char* f;
		time_t timer = Book.Get_Time();
		u = localtime(&timer);
		f = settime(u);
		cout << "Название:" << Book.Get_Name() << endl;
		cout << "Автор:" << Book.Get_Author() << endl;
		cout << "Год издания:" << Book.Get_PublishData() << endl;
		cout << "Дата поступления:" << f << endl;
	}

	template <typename T>
	static void WriteOneBook(T Book, fstream* File)
	{
		struct tm* u;
		char* f;
		time_t timer = Book.Get_Time();
		u = localtime(&timer);
		f = settime(u);
		*File << "Название:" << Book.Get_Name() << endl;
		*File << "Автор:" << Book.Get_Author() << endl;
		*File << "Год издания:" << Book.Get_PublishData() << endl;
		*File << "Дата поступления:" << f << endl;
	}

	void SearchByName()
	{
		string name;
		int key=0;
		cout << "Введите название книги для поиска:";
		cin.clear();
		cin.ignore();
		getline(cin, name);
		cout << "Вывести отчёт по найденным позициям в файл?\n1-Нет\n2-Да\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 2);
		switch (key)
		{
		case 1:
			if (!ClasBooks.empty())
			{
				for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
				{
					if (ClasBooks[i].Get_Name() == name)
					{
						ShowOneBook(ClasBooks[i]);
					}
				}
			}
			if (!ScienBooks.empty())
			{
				for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
				{
					if (ScienBooks[i].Get_Name() == name)
					{
						ShowOneBook(ScienBooks[i]);
					}
				}
			}
			if (!ChilBooks.empty())
			{
				for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
				{
					if (ChilBooks[i].Get_Name() == name)
					{
						ShowOneBook(ChilBooks[i]);
					}
				}
			}
			if (!ArtBooks.empty())
			{
				for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
				{
					if (ArtBooks[i].Get_Name() == name)
					{
						ShowOneBook(ArtBooks[i]);
					}
				}
			}
			if (!Magazines.empty())
			{
				for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
				{
					if (Magazines[i].Get_Name() == name)
					{
						ShowOneBook(Magazines[i]);
					}
				}
			}
			break;
		case 2:
			fstream File;
			File.open("NameResult.txt", fstream::in | fstream::out | fstream::trunc);
			if (!ClasBooks.empty())
			{
				for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
				{
					if (ClasBooks[i].Get_Name() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ClasBooks[i], &File);
					}
				}
			}
			if (!ScienBooks.empty())
			{
				for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
				{
					if (ScienBooks[i].Get_Name() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ScienBooks[i], &File);
					}
				}
			}
			if (!ChilBooks.empty())
			{
				for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
				{
					if (ChilBooks[i].Get_Name() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ChilBooks[i], &File);
					}
				}
			}
			if (!ArtBooks.empty())
			{
				for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
				{
					if (ArtBooks[i].Get_Name() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ArtBooks[i], &File);
					}
				}
			}
			if (!Magazines.empty())
			{
				for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
				{
					if (Magazines[i].Get_Name() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(Magazines[i], &File);
					}
				}
			}


			break;
		}
	}

	void SearchByAuthor()
	{
		int key=0;
		string name;
		cout << "Введите автора книги для поиска:";
		cin.clear();
		cin.ignore();
		getline(cin, name);
		cout << "Вывести отчёт по найденным позициям в файл?\n1-Нет\n2-Да\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 2);
		switch (key)
		{
		case 1:
			if (!ClasBooks.empty())
			{
				for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
				{
					if (ClasBooks[i].Get_Author() == name)
					{
						ShowOneBook(ClasBooks[i]);
					}
				}
			}
			if (!ScienBooks.empty())
			{
				for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
				{
					if (ScienBooks[i].Get_Author() == name)
					{
						ShowOneBook(ScienBooks[i]);
					}
				}
			}
			if (!ChilBooks.empty())
			{
				for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
				{
					if (ChilBooks[i].Get_Author() == name)
					{
						ShowOneBook(ChilBooks[i]);
					}
				}
			}
			if (!ArtBooks.empty())
			{
				for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
				{
					if (ArtBooks[i].Get_Author() == name)
					{
						ShowOneBook(ArtBooks[i]);
					}
				}
			}
			if (!Magazines.empty())
			{
				for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
				{
					if (Magazines[i].Get_Author() == name)
					{
						ShowOneBook(Magazines[i]);
					}
				}
			}
			break;
		case 2:
			fstream File;
			File.open("NameResult.txt", fstream::in | fstream::out | fstream::trunc);
			if (!ClasBooks.empty())
			{
				for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
				{
					if (ClasBooks[i].Get_Author() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ClasBooks[i], &File);
					}
				}
			}
			if (!ScienBooks.empty())
			{
				for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
				{
					if (ScienBooks[i].Get_Author() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ScienBooks[i], &File);
					}
				}
			}
			if (!ChilBooks.empty())
			{
				for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
				{
					if (ChilBooks[i].Get_Author() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ChilBooks[i], &File);
					}
				}
			}
			if (!ArtBooks.empty())
			{
				for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
				{
					if (ArtBooks[i].Get_Author() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ArtBooks[i], &File);
					}
				}
			}
			if (!Magazines.empty())
			{
				for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
				{
					if (Magazines[i].Get_Author() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(Magazines[i], &File);
					}
				}
			}
		}
	}
	void SearchLess2000()
	{
		int name = 0;
		cout << "Вывести книги опубликованные раньше года:";
		do
		{
			name = InputInt();
		} while (name < 0 || name > 2021);

		if (!ClasBooks.empty())
		{
			for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
			{
				if (ClasBooks[i].Get_PublishData() < name)
				{
					ShowOneBook(ClasBooks[i]);
				}
			}
		}
		if (!ScienBooks.empty())
		{
			for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
			{
				if (ScienBooks[i].Get_PublishData() < name)
				{
					ShowOneBook(ScienBooks[i]);
				}
			}
		}
		if (!ChilBooks.empty())
		{
			for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
			{
				if (ChilBooks[i].Get_PublishData() < name)
				{
					ShowOneBook(ChilBooks[i]);
				}
			}
		}
		if (!ArtBooks.empty())
		{
			for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
			{
				if (ArtBooks[i].Get_PublishData() < name)
				{
					ShowOneBook(ArtBooks[i]);
				}
			}
		}
		if (!Magazines.empty())
		{
			for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
			{
				if (Magazines[i].Get_PublishData() < name)
				{
					ShowOneBook(Magazines[i]);
				}
			}
		}


	}
	void SearchByYear()
	{
		int name=0, key=0;
		cout << "Введите год для поиска:";
		do
		{
			name = InputInt();
		} while (name < 0 || name > 2021);
		cout << "Вывести отчёт по найденным позициям в файл?\n1-Нет\n2-Да\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 2);
		switch (key)
		{
		case 1:
			if (!ClasBooks.empty())
			{
				for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
				{
					if (ClasBooks[i].Get_PublishData() == name)
					{
						ShowOneBook(ClasBooks[i]);
					}
				}
			}
			if (!ScienBooks.empty())
			{
				for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
				{
					if (ScienBooks[i].Get_PublishData() == name)
					{
						ShowOneBook(ScienBooks[i]);
					}
				}
			}
			if (!ChilBooks.empty())
			{
				for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
				{
					if (ChilBooks[i].Get_PublishData() == name)
					{
						ShowOneBook(ChilBooks[i]);
					}
				}
			}
			if (!ArtBooks.empty())
			{
				for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
				{
					if (ArtBooks[i].Get_PublishData() == name)
					{
						ShowOneBook(ArtBooks[i]);
					}
				}
			}
			if (!Magazines.empty())
			{
				for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
				{
					if (Magazines[i].Get_PublishData() == name)
					{
						ShowOneBook(Magazines[i]);
					}
				}
			}
			break;
		case 2:
			fstream File;
			File.open("NameResult.txt", fstream::in | fstream::out | fstream::trunc);
			if (!ClasBooks.empty())
			{
				for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
				{
					if (ClasBooks[i].Get_PublishData() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ClasBooks[i], &File);
					}
				}
			}
			if (!ScienBooks.empty())
			{
				for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
				{
					if (ScienBooks[i].Get_PublishData() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ScienBooks[i], &File);
					}
				}
			}
			if (!ChilBooks.empty())
			{
				for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
				{
					if (ChilBooks[i].Get_PublishData() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ChilBooks[i], &File);
					}
				}
			}
			if (!ArtBooks.empty())
			{
				for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
				{
					if (ArtBooks[i].Get_PublishData() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(ArtBooks[i], &File);
					}
				}
			}
			if (!Magazines.empty())
			{
				for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
				{
					if (Magazines[i].Get_PublishData() == name)
					{
						File << "Книга " << i + 1 << endl;
						WriteOneBook(Magazines[i], &File);
					}
				}
			}
			break;
		}
	}

	void DeleteBooks()
	{
		ClassicBook cl;
		ScientificBook sf;
		ArtBook ab;
		ChildrenBook cb;
		Magazine mg;
		int key = 0;
		int key1=0;
		cout << "Какой жанр книги вы хотите удалить?\n";
		cout << "1-Классическая книга\n2-Научная книга\n3-Художественная книга\n4-Детские книги\n5-Журнал\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 5);
		switch (key)
		{
		case 1:
			ShowBooks(ClasBooks);
			cout << "Номер книги для удаления:";
			do
			{
				key1 = InputInt();
			} while (key1 < 1 || key1 > ClasBooks.size());
			ClasBooks.erase(ClasBooks.begin() + (key1 - 1));
			break;
		case 2:
			ShowBooks(ScienBooks);
			cout << "Номер книги для удаления:";
			do
			{
				key1 = InputInt();
			} while (key1 < 1 || key1 > ScienBooks.size());
			ScienBooks.erase(ScienBooks.begin() + (key1 - 1));
			break;
		case 3:
			ShowBooks(ArtBooks);
			cout << "Номер книги для удаления:";
			do
			{
				key1 = InputInt();
			} while (key1 < 1 || key1 > ArtBooks.size());;
			ArtBooks.erase(ArtBooks.begin() + (key1 - 1));
			break;
		case 4:
			ShowBooks(ChilBooks);
			cout << "Номер книги для удаления:";
			do
			{
				key1 = InputInt();
			} while (key1 < 1 || key1 > ChilBooks.size());
			ChilBooks.erase(ChilBooks.begin() + (key1 - 1));
			break;
		case 5:
			ShowBooks(Magazines);
			cout << "Номер книги для удаления:";
			do
			{
				key1 = InputInt();
			} while (key1 < 1 || key1 > Magazines.size());
			Magazines.erase(Magazines.begin() + (key1 - 1));
			break;
		}
	}

	void EditBooks()
	{
		ClassicBook cl;
		ScientificBook sf;
		ArtBook ab;
		ChildrenBook cb;
		Magazine mg;
		int key = 0;
		int key1=0, key2=0;
		cout << "Какой жанр книги вы хотите редактировать?\n";
		cout << "1-Классическая книга\n2-Научная книга\n3-Художественная книга\n4-Детские книги\n5-Журнал\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 5);
		switch (key)
		{
		case 1:
			if (!ClasBooks.empty())
			{
				ShowBooks(ClasBooks);
				cout << "Номер книги для редактирования:";
				do
				{
					key1 = InputInt();
				} while (key1 < 1 || key1 > ClasBooks.size());
				cout << "1-Изменить название\n2-Изменить автора\n3-Изменить год издания\n";
				do
				{
					key2 = InputInt();
				} while (key2 < 1 || key2 > 3);
				switch (key2)
				{
				case 1:
					ClasBooks[key1 - 1].Set_Name();
					break;
				case 2:
					ClasBooks[key1 - 1].Set_Author();
					break;
				case 3:
					ClasBooks[key1 - 1].Set_PublishDate();
					break;
				}
				break;
			}
			break;
		case 2:
			if (!ScienBooks.empty())
			{
				ShowBooks(ScienBooks);
				cout << "Номер книги для редактирования:";
				do
				{
					key1 = InputInt();
				} while (key1 < 1 || key1 > ScienBooks.size());
				cout << "1-Изменить название\n2-Изменить автора\n3-Изменить год издания\n";
				do
				{
					key2 = InputInt();
				} while (key2 < 1 || key2 > 3);
				switch (key2)
				{
				case 1:
					ScienBooks[key1 - 1].Set_Name();
					break;
				case 2:
					ScienBooks[key1 - 1].Set_Author();
					break;
				case 3:
					ScienBooks[key1 - 1].Set_PublishDate();
					break;
				}
				break;
			}
			else
			{
				cout << "В данном разделе нет книг!\n";
				break;
			}
		case 3:
			if (!ArtBooks.empty())
			{
				ShowBooks(ArtBooks);
				cout << "Номер книги для редактирования:";
				do
				{
					key1 = InputInt();
				} while (key1 < 1 || key1 > ArtBooks.size());
				cout << "1-Изменить название\n2-Изменить автора\n3-Изменить цену\n";
				do
				{
					key2 = InputInt();
				} while (key2 < 1 || key > 3);
				switch (key2)
				{
				case 1:
					ArtBooks[key1 - 1].Set_Name();
					break;
				case 2:
					ArtBooks[key1 - 1].Set_Author();
					break;
				case 3:
					ArtBooks[key1 - 1].Set_PublishDate();
					break;
				}
				break;
			}
			else
			{
				cout << "В данном разделе нет книг!\n";
				break;
			}
		case 4:
			if (!ChilBooks.empty())
			{
				ShowBooks(ChilBooks);
				cout << "Номер книги для редактирования:";
				do
				{
					key1 = InputInt();
				} while (key1 < 1 || key1 > ChilBooks.size());
				cout << "1-Изменить название\n2-Изменить автора\n3-Изменить год издания\n";
				do
				{
					key2 = InputInt();
				} while (key2 < 1 || key2 > 3);
				switch (key2)
				{
				case 1:
					ChilBooks[key1 - 1].Set_Name();
					break;
				case 2:
					ChilBooks[key1 - 1].Set_Author();
					break;
				case 3:
					ChilBooks[key1 - 1].Set_PublishDate();
					break;
				}
				break;
			}
			else
			{
				cout << "В данном разделе нет книг!\n";
				break;
			}
		case 5: 
			if (!Magazines.empty())
			{
				ShowBooks(Magazines);
				cout << "Номер книги для редактирования:";
				do
				{
					key1 = InputInt();
				} while (key1 < 1 || key1 > Magazines.size());
				cout << "1-Изменить название\n2-Изменить автора\n3-Изменить год издания\n";
				do
				{
					key2 = InputInt();
				} while (key2 < 1 || key2 > 3);
				switch (key2)
				{
				case 1:
					Magazines[key1 - 1].Set_Name();
					break;
				case 2:
					Magazines[key1 - 1].Set_Author();
					break;
				case 3:
					Magazines[key1 - 1].Set_PublishDate();
					break;
				}
				break;
			}
			  else
			  {
			    cout << "В данном разделе нет книг!\n";
			    break;
			  }
		}
	}

	void ShowAllBooks()
	{
		system("cls");
		if (!ClasBooks.empty())
		{
			cout << "-------------------Классические книги--------------------\n";
			ShowBooks(ClasBooks);
		}
		if (!ScienBooks.empty())
		{
			cout << "---------------------Научные книги-----------------------\n";
			ShowBooks(ScienBooks);
		}
		if (!ArtBooks.empty())
		{
			cout << "---------------------Художественные книги----------------\n";
			ShowBooks(ArtBooks);
		}
		if (!ChilBooks.empty())
		{
			cout << "---------------------Детские книги-----------------------\n";
			ShowBooks(ChilBooks);
		}
		if (!Magazines.empty())
		{
			cout << "--------------------------Журналы------------------------\n";
			ShowBooks(Magazines);
		}
	}

	template <typename T>
	void ShowBooks(vector<T> Vec)
	{
		struct tm* u;
		char* f;
		for (size_t i = 0, ilen = Vec.size(); i < ilen; i++)
		{
			cout << "----------------Книга " << i + 1 << "----------------\n";
			cout << "Автор:" << Vec[i].Get_Author() << endl;
			cout << "Название:" << Vec[i].Get_Name() << endl;
			cout << "Год издания:" << Vec[i].Get_PublishData() << endl;
			time_t timer = Vec[i].Get_Time();
			u = localtime(&timer);
			f = settime(u);
			cout << "Время поступления:" << f << endl;
			cout << "-----------------------------------------------------\n";
		}
	}

	void Search(Library lb)
	{
		int key=0;
		cout << "Поиск по:\n1-Названию\n2-Автору\n3-Году публикации\n";
		do
		{
			key = InputInt();
		} while (key < 1 || key > 3);
		switch (key)
		{
		case 1:
			lb.SearchByName();
			break;
		case 2:
			lb.SearchByAuthor();
			break;
		case 3:
			lb.SearchByYear();
			break;
		}
	}
};
class Time
{
public:
	virtual char* settime(struct tm* u) = 0;
};
char* settime(struct tm* u)
{
	char s[40] ="";
	char* tmp;
	for (int i = 0; i < 40; i++) s[i] = 0;
	int length = strftime(s, 40, "%d.%m.%Y %H:%M:%S ", u);
	switch (u->tm_wday)
	{
	case 0: strcpy(s + length, " воскресенье"); break;
	case 1: strcpy(s + length, " понедельник"); break;
	case 2: strcpy(s + length, " вторник");     break;
	case 3: strcpy(s + length, " среда");       break;
	case 4: strcpy(s + length, " четверг");     break;
	case 5: strcpy(s + length, " пятница");     break;
	case 6: strcpy(s + length, " суббота");     break;
	}
	tmp = (char*)malloc(sizeof(s));
	strcpy(tmp, s);
	return(tmp);
}

static void WriteInFile(Library Lib, string Name)
{
	vector<Books::ClassicBook> ClasBooks;
	vector<Books::ScientificBook> ScienBooks;
	vector<Books::ArtBook> ArtBooks;
	vector<Books::ChildrenBook> ChilBooks;
	vector<Books::Magazine> Magazines;
	struct tm* u;
	char* f;

	ClasBooks = Lib.Get_ClassBooks();
	ScienBooks = Lib.Get_ScienBooks();
	ArtBooks = Lib.Get_ArtBooks();
	ChilBooks = Lib.Get_ChildrenBooks();
	Magazines = Lib.Get_Magazine();
	fstream File;
	File.open(Name, fstream::in | fstream::out | fstream::trunc);
	File << "---------------Данные о наличии книг в библиотеке---------------\n";
	if (!ClasBooks.empty())
	{
		File << "-------------------Классические книги--------------------\n";

		for (size_t i = 0, ilen = ClasBooks.size(); i < ilen; i++)
		{
			File << "----------------Книга " << i + 1 << "----------------\n";
			File << "Автор:" << ClasBooks[i].Get_Author() << endl;
			File << "Название:" << ClasBooks[i].Get_Name() << endl;
			File << "Год издания:" << ClasBooks[i].Get_PublishData() << endl;
			time_t timer = ClasBooks[i].Get_Time();
			u = localtime(&timer);
			f = settime(u);
			File << "Время поступления:" << f << endl;
			File << "-----------------------------------------------------\n";
		}
	}
	if (!ScienBooks.empty())
	{
		File << "-------------------Научные книги-------------------------\n";

		for (size_t i = 0, ilen = ScienBooks.size(); i < ilen; i++)
		{
			File << "----------------Книга " << i + 1 << "----------------\n";
			File << "Автор:" << ScienBooks[i].Get_Author() << endl;
			File << "Название:" << ScienBooks[i].Get_Name() << endl;
			File << "Год издания:" << ScienBooks[i].Get_PublishData() << endl;
			time_t timer = ScienBooks[i].Get_Time();
			u = localtime(&timer);
			f = settime(u);
			File << "Время поступления:" << f << endl;
			File << "-----------------------------------------------------\n";
		}
	}
	if (!ArtBooks.empty())
	{
		File << "----------------Художественные книги-------------------------\n";

		for (size_t i = 0, ilen = ArtBooks.size(); i < ilen; i++)
		{
			File << "----------------Книга " << i + 1 << "----------------\n";
			File << "Автор:" << ArtBooks[i].Get_Author() << endl;
			File << "Название:" << ArtBooks[i].Get_Name() << endl;
			File << "Год издания:" << ArtBooks[i].Get_PublishData() << endl;
			time_t timer = ArtBooks[i].Get_Time();
			u = localtime(&timer);
			f = settime(u);
			File << "Время поступления:" << f << endl;
			File << "-----------------------------------------------------\n";
		}
	}
	if (!ChilBooks.empty())
	{
		File << "----------------Детские книги-------------------------\n";

		for (size_t i = 0, ilen = ChilBooks.size(); i < ilen; i++)
		{
			File << "----------------Книга " << i + 1 << "----------------\n";
			File << "Автор:" << ChilBooks[i].Get_Author() << endl;
			File << "Название:" << ChilBooks[i].Get_Name() << endl;
			File << "Год издания:" << ChilBooks[i].Get_PublishData() << endl;
			time_t timer = ChilBooks[i].Get_Time();
			u = localtime(&timer);
			f = settime(u);
			File << "Время поступления:" << f << endl;
			File << "-----------------------------------------------------\n";
		}
	}
	if (!Magazines.empty())
	{
		File << "----------------Детские книги-------------------------\n";

		for (size_t i = 0, ilen = Magazines.size(); i < ilen; i++)
		{
			File << "----------------Книга " << i + 1 << "----------------\n";
			File << "Автор:" << Magazines[i].Get_Author() << endl;
			File << "Название:" << Magazines[i].Get_Name() << endl;
			File << "Год издания:" << Magazines[i].Get_PublishData() << endl;
			time_t timer = Magazines[i].Get_Time();
			u = localtime(&timer);
			f = settime(u);
			File << "Время поступления:" << f << endl;
			File << "-----------------------------------------------------\n";
		}
	}
}


std::string Encrypt(std::string mystr)
{
	std::string crypted = "";
	for (size_t i = 0, ilen = strlen(mystr.c_str()); i < ilen; i++) // Создаем цикл для шифровки каждого символа
		crypted += mystr[i] ^ 2; //проводим операцию xor с ключом 2
	return crypted;
}

std::string Decrypt(std::string str)
{
	std::string a = "";
	for (size_t i = 0, ilen = strlen(str.c_str()); i < ilen; i++) //Запускаем цикл для каждого символа
		a += str[i] ^ 2; // Расшифровываем и заполянем переменную.
	return a;
}


int Auto()
{
	int ra=0;
	string login, pass, rpass, rlogin, clogin, cpass;
	cout << "Добро пожаловать!" << endl << "Регистрация/Авторизация(1/2):\n0-Выйти\n";
	do
	{
		ra = InputInt();
	} while (ra <0 || ra > 2);
	if (ra == 1)
	{
		cout << "Логин: ";
		cin >> rlogin;
		cout << "Пароль: ";
		cin >> rpass;
		ofstream flogin("login.txt");
		flogin << rlogin;
		flogin.close();
		ofstream fpass("pass.txt");
		rpass = Encrypt(rpass);
		fpass << rpass;
		fpass.close();
		cout << "Регистрация прошла успешно!\n";
	};
	if (ra == 2)
	{
		cout << "...чтение..." << endl;
		ifstream flogin("login.txt");
		ifstream fpass("pass.txt");
		while (!flogin.eof() && !fpass.eof())
		{
			flogin >> clogin;
			fpass >> cpass;
			cpass = Decrypt(cpass);
		};
		cout << "Логин: ";
		cin >> login;
		cout << "Пароль: ";
		cin >> pass;
		fpass.close();
		flogin.close();
		if (login == "Admin" && pass == "Admin")
		{
			return 2;
		}
		if (login == clogin && pass == cpass)
		{
			cout << "Готово!" << endl;
			return 1;
		}
		else if (login != clogin)
		{
			cerr << "Ошибка: неверный логин" << endl;
		}
		else if (pass != cpass)
		{
			cerr << "Ошибка: неверный пароль" << endl;
		};
	};
	if (ra == 0)
	{
		return 0;
	}
	if (ra != 1 && ra != 2 && ra != 0)
	{
		cerr << "Неверный ввод!" << endl;
	
	};
	
	system("pause");
} 

int main()
{
	system("chcp 1251");
	system("cls");
	Library lb;
	lb.Load();
	int key=0;
	int menu = 1, reg = 1;
	while (reg)
	{
		reg = Auto();
		switch (reg)
		{
		case 1:
			system("cls");
			cout << "Вы вошли как библиотекарь!" << endl; 
			menu = 1;
			while (menu)
			{
				cout << "1-Показать все книги в библиотеке\n2-Поиск\n3-Вывести книги написанные раньше указанного года\n4-Сортировка лет издания книг\n5-Выйти\n";
				do
				{
					key = InputInt();
				} while (key < 1 || key > 5);
				switch (key)
				{
				case 1:
					lb.ShowAllBooks();
					break;
				case 2:
					lb.Search(lb);
					break;
				case 3:
					lb.SearchLess2000();
					break;
				case 4:
					lb.ChoseForSort();
					break;
				case 5:
					menu = 0;
					break;
				}
			}
			break;
		case 2:

			system("cls");
			menu = 1;
			while (menu)
			{
				cout << "Вы вошли как администратор!" << endl;
				cout <<
					"1-Добавить книгу\n2-Показать все книги в библиотеке\n3-Удалить книгу\n4-Редактировать книгу\n5-Вывести отчёт по всем книгам в библиотеке\n6-Выйти\n" << endl;
				
				do
				{
					key = InputInt();
				} while (key < 1 || key > 6);
				switch (key)
				{
				case 1:
					lb.AddBooks();
					break;
				case 2:
					lb.ShowAllBooks();
					break;
				case 3:
					lb.DeleteBooks();
					break;
				case 4:
					lb.EditBooks();
					break;
				case 5:
					WriteInFile(lb, "Result.txt");
					break;
				case 6:
					menu = 0;
					break;
				}

			}
			break;
		case 0:
			reg = 0;
			break;
		}
	}

	return 0;
}
