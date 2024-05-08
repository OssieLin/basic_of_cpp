#include <iostream>

//class allows us to group variable together
// into a type and also add funcionality to these variables
class Player{
public:
    int x,y;
    int speed;
    
    void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }
};

class Log{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel; // m implies that this member variable is private

public: // public function
    void SetLevel(int level){
        m_LogLevel = level;
    }

     void Error(const char* message){
        if (m_LogLevel >= LogLevelError)
            std::cout << "[Error]: " << message << std::endl;
    }

    void Warn(const char* message){
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message){
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[WARNING]: " << message << std::endl;
    }

};

int main(){
    Player player;
    player.Move(1,-1);
    
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Info("Hello!");
    
    return 0;
}