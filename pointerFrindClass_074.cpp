#include <iostream>
using namespace std;

class mahasiswa
{
    int nim;
    void showNim()
    {
	cout << "No Induk = " << nim << endl;
    }
};
int main() {
    mahasiswa mhs{ 1 };
}