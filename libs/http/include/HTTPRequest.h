#ifndef HTTP_REQUEST_H
#define HTTP_REQUEST_H

#include "HTTPMessage.h"
#include "URL.h";
#include "HTTPVersion.h";
#include "HTTPHeader.h";
#include "HTTPBody.h";
#include "HTTPResponse.h";
#include "HTTPConnection.h"

/**
 * @class HTTPRequest
 * @brief Represents a request in HTTP
 * 
 * A HTTPRequest object represents a request in HTTP.
*/
class HTTPRequest : public HTTPMessage {
    public:
        /**
         * @brief Constructer assigns url and version to HTTPRequest object
         * @param url The URL to resourse to request
         * @param version The version of HTTP the request is written in
        */
        HTTPRequest(URL url, HTTPVersion version);

    private:
        URL url;
};

#endif