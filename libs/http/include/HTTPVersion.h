#ifndef HTTP_VERSION_H
#define HTTP_VERSION_H

/**
 * @class HTTPVersion
 * @brief Represents a version of HTTP
 * 
 * A HTTPVersion object represents a version of HTTP.
*/
class HTTPVersion {
    public:
        /**
         * @brief Constructor assigns major and minor version to HTTP version
         * @param majorVersion
         * @param minorVersion
        */
        HTTPVersion(int majorVersion, int minorVersion);
        
        /**
         * @brief Returns the string representation of the HTTP version
         * @returns the string representation of the HTTP version
        */
        std::string toString();

    private:
        int majorVersion;
        int minorVersion;
};

#endif