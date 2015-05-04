#include "FileIterator.h"

class FileSystem
{
	friend class FileIterator;
public:
	FileSystem(char* file_name);
	FileSystem(char* file_name, char* _tomName, char* _owner, size_t _maxSize);
	~FileSystem();
	void Compress(); //������ �������� �������
	void CreateFile(FileDescriptor* fd); //�������� �����
	FileIterator* GetIterator(); //��������� ���������� ���������
	size_t GetMaxSize();
	char *GetOwner();
	char *GetTomName();
	size_t GetFilesCount();
	void SetMaxSize(size_t _maxSize);
	void SetOwner(char* _owner);
	void SetTomName(char* _tomName);


private:
	char* fileName; //��� �����, � ������� �������� ���� (fs.txt ��-���������)
	char* tomName; //�������� �������
	char* owner; //��� ���������
	size_t maxSize; //������������ ������ �������
	size_t filesCount; //����������� ������
	int first_file; //������ ������� �����
	std::fstream* fp; //��������� �� �������� ����� ��� fs.txt
	void set_first_file(int _first_file);
	size_t get_first_file();
	void set_filesCount(size_t _filesCount);

	// ����������� ������� ��� ������-������ �����. ������������ ���� ������� � FileIterator.
	static void write_line(std::fstream * fp, char *data, size_t len); 
	static void write_line(std::fstream * fp, size_t data);
	static void write_line(std::fstream * fp, int data);
	static char* read_line(std::fstream * fp);
};
