#ifndef HTTP_HEADER_H
#define HTTP_HEADER_H

#include <string>
/**
 * @class HTTPHeader
 * @brief Represents a header in a HTTP message
 * 
 * A HTTPHeader represents a header in a HTTP message.
*/
class HTTPHeader {
    public:
        /**
         * @brief Returns the string representation of the header
         * @returns the string representation of the header
        */
        std::string toString();
};

#endif