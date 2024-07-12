#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

class Log
{
public:
    enum Level
    {
        LevelError, LevelWarning, LevelInfo
    };
    /*
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2; //LogLevel Trace
    */
private:
    Level m_LogLevel = LevelInfo;
    /*
    int m_LogLevel; //m_ is a convention to show that this is a member variable i.e, private variable to class
    */
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LevelError)
            cout << "[Error]: " << message << endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
            cout << "[Warning]: " << message << endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
            cout << "[Info]: " << message << endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!"); 
}