#include <iostream>
#include <string>


class treugolnik {
protected:
	int a, b, c, A, B, C;
public:
	treugolnik(int a, int b, int c, int A, int B, int C) {}
	treugolnik() { a = 10, b = 20, c = 30, A = 50, B = 60, C = 70; }
	void vivod() { std::cout << "Треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class pryamougolnii_treugolnik : public treugolnik {
public:
	pryamougolnii_treugolnik(int a, int b, int c, int A, int B, int C) {}
	pryamougolnii_treugolnik() { C = 90; }
	void vivod() { std::cout << "Прямоугольный треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class ravnobedrenii_treugolnik : public treugolnik {
public:
	ravnobedrenii_treugolnik(int a, int b, int c, int A, int B, int C) {}
	ravnobedrenii_treugolnik() { c = 10, C = 50; }
	void vivod() { std::cout << "Равнобедренный треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class ravnostoronii_treugolnik : public treugolnik {
public:
	ravnostoronii_treugolnik(int a, int b, int c, int A, int B, int C) {}
	ravnostoronii_treugolnik() { a = 30, b = 30, A = 60, C = 60; }
	void vivod() { std::cout << "Равносторонний треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class kvadrat {
protected:
	int a, b, c, d, A, B, C, D;
public:
	kvadrat(int a, int b, int c, int d, int A, int B, int C, int D) {}
	kvadrat() { a = 20, b = 20, c = 20, d = 20, A = 90, B = 90, C = 90, D = 90; }
	void vivod() { std::cout << "Квадрат: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class pryamougolnik : public kvadrat {
public:
	pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D) {}
	pryamougolnik() { a = 10, c = 10; }
	void vivod() { std::cout << "Прямоугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class chetyrehugolnik : public kvadrat {
public:
	chetyrehugolnik(int a, int b, int c, int d, int A, int B, int C, int D) {}
	chetyrehugolnik() { a = 10, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80; }
	void vivod() { std::cout << "Четырёхугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};


class parallerogramm : public kvadrat {
public:
	parallerogramm(int a, int b, int c, int d, int A, int B, int C, int D) {}
	parallerogramm() { b = 30, d = 30, A = 30, B = 40, C = 30, D = 40; }
	void vivod() { std::cout << "Параллелограмм: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class romb : public kvadrat {
public:
	romb(int a, int b, int c, int d, int A, int B, int C, int D) {}
	romb() { a = 30, b = 30, c = 30, d = 30, A = 30, B = 40, C = 30, D = 40; }
	void vivod() { std::cout << "Ромб: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
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