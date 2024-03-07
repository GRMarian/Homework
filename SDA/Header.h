#pragma once
#include<string>;
using std::string;
namespace problema_1 {
	#define DIM_MAX 10
	struct Stiva
	{
		int vf;
		int vect[DIM_MAX];
	};
	void InitStack(Stiva&s);
	bool IsEmpty(Stiva&s);
	int Top(Stiva&s);
}

namespace probelma_2 {
	struct Element
	{
		int value;
		Element*next;
	};
	void InitStack(Element*&s);
	bool IsEmpty(Element*&s);
	int Top(Element*&s);
}

namespace problema_3 {
	struct Operand {
		int value;
		Operand* next;
	};
	void InitStack(Operand*&s);
	bool IsEmpty(Operand*&s);
	int Top(Operand*s);

	int evaluare_forma_postfixata(string);
}

namespace problema_4 {
	struct Operand {
		string value;
		Operand* next;
	};
	void InitStack(Operand*&s);
	bool IsEmpty(Operand*&s);
	string Top(Operand*s);

	string infixat_postfaxat(string formula);
}