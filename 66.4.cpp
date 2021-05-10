#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
       	int a,b,c;
        public:
                file();
                ~file();
                void loop(); 
                bool trojkat();
};


file::file()
{
        inFile.open("ciagi.txt"); 
        if (!inFile.good())
        {
                cerr << "Blad - pliku nie da sie otworzyc!\n";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}

void file::loop()
{
        while (!inFile.eof()) 
        {
                inFile >> a >> b >> c;
        }
}
bool file::trojkat() {
	int licznik = 0;
	for(int i=0; i<=1000; i++){
	if(((a+b>c) && (a+c>b) && (c+b>a))){
	return((a+b>c) && (a+c>b) && (c+b>a));
	licznik ++;
	}
	if(a >b && a> c) {
	cout << a;
} else if(b > a && b > c) {
	cout << b;
} else if(c >a && c > b) {
	cout << c;
}
}
cout << "liczba wierszy: " << licznik << endl;
	
}

int main()
{
        file f;
        f.loop();
        f.trojkat();
        return 0;
}
