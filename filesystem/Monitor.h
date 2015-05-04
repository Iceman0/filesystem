#include <ostream>
#include <vector>
#include <map>
#include "FileSystem.h"
#include "InputOutput.h"

// ���� ��� ��������� ����� ��� ������� �������
struct cmp_str {
	bool operator()(char const *a, char const *b) {
		return std::strcmp(a, b) < 0;
	}
};

class Monitor
{

public:
	Monitor(InputOutput* io);
	~Monitor();
	void CreateFileSystem(char* file_name, char* tom_name, char* owner_name, size_t max_size); //�������� �������� �������
	void Execute(std::vector<char*>* argv); //���������� ��������

protected:
	InputOutput* io; //��������� �� ��������� �����/������
	FileSystem* fs;  //��������� �� ��������� �������� �������, � ������� ��������
	std::map<char*, void(*) (FileSystem *fs, int argc, char *argv[], std::ostream& out), cmp_str> commands; // "�������� ��������":"��������������� �������"
	void InitCommands(); //������������� ������� �������(�.�. �������, ��������� � commands_ns.h)
					     //��� �������������� ������ ������� ��������

};
