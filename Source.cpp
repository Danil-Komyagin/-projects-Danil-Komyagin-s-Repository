#include <windows.h>
#include <ctime>
using namespace std;
char times(int i) {
	SYSTEMTIME st;
	GetSystemTime(&st);
	s = s + to_string(st.wMinute) + to_string(st.wHour)
		+ to_string(st.wDay)
		+ to_string(st.wMonth)
		+ to_string(st.wYear);
	
	char* a = new char[s.size()];
	return a[i];
}


