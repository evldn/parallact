#ifndef UTILS_UTILS_HPP
#define UTILS_UTILS_HPP

#include <vector>
#include <string>
#include <sstream>

template<typename T>
bool from_string(const std::string& s, T& value) {
    std::istringstream iss(s);
    return !(iss >> value).fail();
}

#endif // UTILS_UTILS_HPP
