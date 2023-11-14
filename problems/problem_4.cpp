#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {

    std::istringstream iss(macAddress);
    int firstOctet;
    iss >> std::hex >> firstOctet;

    if (firstOctet % 2 == 0) {
        return "Unicast";
    } else if (firstOctet == 0xFF) {
        return "Broadcast";
    } else {
        return "Multicast";
    }
}


