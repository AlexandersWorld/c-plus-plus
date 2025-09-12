#include <iostream>

using namespace std;

static int s_Variable = 2;

class Log
{

public:
	enum Level {
		LevelError, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo;

public:

	void Setlevel(Level level)
	{
		m_LogLevel = level;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			cout << "[WARNING]: " << message << endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			cout << "[INFO]: " << message << endl;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
		{
			cout << "[ERROR]: " << message << endl;
		}
	}

};

int main()
{
	cout << "Hello World" << endl;

	Log log;
	log.Setlevel(Log::LevelError);

	log.Warn("Hello");

	log.Info("Important information INFO");

	log.Error("Important information ERROR");

	cout << s_Variable << endl;

	cin.get();

	return 0;
}