#ifndef HTTP_RESPONSE_H
#define HTTP_RESPONSE_H

#include "HTTPMessage.h";
#include "HTTPVersion.h";
#include <string>

/**
 * @class HTTPResponse
 * @brief Represents a response in HTTP
 * 
 * A HTTPRequest object represents a response in HTTP.
*/
class HTTPResponse : public HTTPMessage {
    private:
        int status;
        std::string phrase;
};

#endif