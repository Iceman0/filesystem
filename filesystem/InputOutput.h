#include <iostream>
#include <vector>

class InputOutput
{

public:
	InputOutput(std::istream& in, std::ostream& out);
	~InputOutput();
	std::istream& GetInput();
	std::ostream& GetOutput();
	std::vector<char*>* ReadLine(char* separators); //������ ������, � ��������� � �� ���������(�� ��������� ������������)
	void InputOutput::WriteLine(char *line); //����� ������
	void InputOutput::Parse(char* args, char* separators, std::vector<char*>* argv); //��������� ������ �� ���������(�� ��������� ������������)
																					 //� ������ ��������� � ������

private:
	std::istream& in;
	std::ostream& out;

};