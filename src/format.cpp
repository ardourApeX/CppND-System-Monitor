#include <string>

#include "format.h"

using std::string;

//Function to convert seconds into formated [HH:MM:SS]
string Format::ElapsedTime(long seconds) { 
    std::string secs = std::to_string(seconds % 60);
    std::string  minutes = std::to_string((seconds  / 60) % 60);
    std::string  hours = std::to_string((seconds / 60) / 60);
    hours = hours.size() == 1 ? "0" + hours : hours;
    minutes = minutes.size() == 1 ? "0" + minutes : minutes;
    secs = secs.size() == 1 ? "0" + secs : secs;
    return  (hours + ":" + minutes + ":" + secs);
}