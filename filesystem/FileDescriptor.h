#include <ctime>

class FileDescriptor
{

public:
	FileDescriptor(); 
	FileDescriptor(char* _name, char* _type, size_t _size, char* date_repr, size_t _offset);
	~FileDescriptor();

	time_t GetDate(); // ��������� ���� � ������� time_t
	char * GetFormatDate(); //��������� ���� � ��������� �������: YYYY DD MM
	size_t GetOffset();
	char * GetName();
	size_t GetSize();
	char * GetType();

	void SetDate(time_t _date); //������� ���� � ��������� �������: YYYY DD MM
	void SetFormatDate(char* repr); //������� ���� � ��������� �������: YYYY DD MM
	void SetOffset(size_t offset); 
	void SetName(char* _name);
	void SetSize(size_t _size);
	void SetType(char* _type);

private:
	time_t date; //���� 
	char* name; //���
	size_t size; // ������ (� ������)
	char* type; // ��� �����(!�� ��� ������)
	size_t offset; //�������� ��������� �����
};
