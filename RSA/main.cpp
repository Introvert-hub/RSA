#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "_RSA.h"

int main(int64_t argc, char** argv)
{
    _RSA rs;
    rs.createNewKey(10000000);
    std::wstring ws{ L"Hello hhgjhg ytr er " };
    std::vector<uint64_t> result = rs.encodedStringOfUnicodeMessage(ws);
    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << std::endl;
    }
    std::cout << "decrypt" << std::endl;
    std::wstring resul = rs.getDeCodedUnicodeMessage(result);
    std::wcout << resul << std::endl;



	system("pause >> NULL");
	return 0;
}