#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2; //LogLevel Trace
private:
    int m_LogLevel; //m_ is a convention to show that this is a member variable i.e, private variable to class
public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            cout << "[Error]: " << message << endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarning)
            cout << "[Warning]: " << message << endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
            cout << "[Info]: " << message << endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!"); 
}