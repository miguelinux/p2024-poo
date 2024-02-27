#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	int numero;
	cout << "Escribe un número: ";
	cin  >> numero;

	// Ver si es un número par
	if (numero % 2 != 0) {
		cout << "Es impar" << endl;
	} else {
		cout << "Es par" << endl;
	}
	return 0;
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: t
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 noexpandtab:
 * :indentSize=8:tabSize=8:noTabs=false:
 */

