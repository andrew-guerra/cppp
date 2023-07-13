#ifndef HTTP_CONNECTION_H
#define HTTP_CONNECTION_H

#include "HTTPRequest.h"
#include "HTTPResponse.h"

/**
 * @class HTTPConnection
 * @brief Represents a connection to an HTTP server
 * 
 * A HTTPConnection represents a connection to an HTTP server. Requests can 
 * be sent to the server and responses recieved back.
*/
class HTTP_CONNECTION {
    public:
        /**
         * @brief Sends the request to the server and recieves the response
         * @param httpRequest The request to be sent to the server
         * @returns the response to the request by the server
        */
        HTTPResponse send(HTTPRequest httpRequest);
};

#endif