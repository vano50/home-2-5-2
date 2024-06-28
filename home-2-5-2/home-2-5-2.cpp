#include <iostream>
#include <string>


class treugolnik {
protected:
	int a, b, c, A, B, C;
	std::string name;
public:
	treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	treugolnik() { a = 10, b = 20, c = 30, A = 50, B = 60, C = 70, name = "Треугольник:"; }
	std::string get_name() { return name; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class pryamougolnii_treugolnik : public treugolnik {
public:
	pryamougolnii_treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	pryamougolnii_treugolnik() { C = 90, name = "Прямоугольный треугольник:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class ravnobedrenii_treugolnik : public treugolnik {
public:
	ravnobedrenii_treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	ravnobedrenii_treugolnik() { c = 10, C = 50, name = "Равнобедренный треугольник:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class ravnostoronii_treugolnik : public treugolnik {
public:
	ravnostoronii_treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	ravnostoronii_treugolnik() { a = 30, b = 30, A = 60, C = 60, name = "Равносторонний треугольник:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class kvadrat {
protected:
	int a, b, c, d, A, B, C, D;
	std::string name;
public:
	kvadrat(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	kvadrat() { a = 20, b = 20, c = 20, d = 20, A = 90, B = 90, C = 90, D = 90, name = "Квадрат:"; }
	std::string get_name() { return name; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class pryamougolnik : public kvadrat {
public:
	pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	pryamougolnik() { a = 10, c = 10, name = "Прямоугольник:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class chetyrehugolnik : public kvadrat {
public:
	chetyrehugolnik(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	chetyrehugolnik() { a = 10, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80, name = "Четырёхугольник:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};


class parallerogramm : public kvadrat {
public:
	parallerogramm(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	parallerogramm() { b = 30, d = 30, A = 30, B = 40, C = 30, D = 40, name = "Параллелограмм:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class romb : public kvadrat {
public:
	romb(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	romb() { a = 30, b = 30, c = 30, d = 30, A = 30, B = 40, C = 30, D = 40, name = "Ромб:"; }
	void vivod() { std::cout << get_name() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	treugolnik treug;
	pryamougolnii_treugolnik pryamtreug;
	ravnobedrenii_treugolnik ravnobed_treug;
	ravnostoronii_treugolnik ravnostor_treug;
	chetyrehugolnik chetyrehugolnik;
	pryamougolnik pryamoug;
	kvadrat kvad;
	parallerogramm paraller;
	romb romb;


	treug.vivod();
	pryamtreug.vivod();
	ravnobed_treug.vivod();
	ravnostor_treug.vivod();
	chetyrehugolnik.vivod();
	pryamoug.vivod();
	kvad.vivod();
	paraller.vivod();
	romb.vivod();
}