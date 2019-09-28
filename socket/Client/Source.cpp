//Client code

#include <PNet/IncludeMe.h>
#include <iostream>

using namespace PNet;

int main()
{
	if (Network::Initialize())
	{
		std::cout << "Initialize Successfull" << std::endl;
		Socket socket;
		if (socket.Create() == PResult::P_Success)
		{
			std::cout << "Create socket successful" << std::endl;
			socket.Close();
		}
		else
		{
			std::cerr << "Fail to creat socket" << std::endl;

		}
	}
	// this is just a test for github //

	system("pause");
	return 0;
}