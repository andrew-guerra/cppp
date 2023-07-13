#ifndef HTTP_MESSAGE_H
#define HTTP_MESSAGE_H

#include "HTTPVersion.h";
#include "HTTPHeader.h"
#include "HTTPBody.h"

/**
 * @class HTTPMessage
 * @brief Represents a message in HTTP
 * 
 * A HTTPRequest object represents a message in HTTP.
*/
class HTTPMessage {
    public:
         /**
         * @brief Constructer assigns parts to HTTP message
         * @param version The version of the HTTP message
         * @param headers The headers in the HTTP message 
         * @param numHeaders The number of headers in the HTTP message
         * @param httpBody The body of the HTTP message
        */
        HTTPMessage(HTTPVersion version, HTTPHeader* headers, int numHeaders, HTTPBody httpBody);

    private:
        HTTPVersion version;
        HTTPHeader* headers;
        int numHeaders;
        HTTPBody body;
};

#endif