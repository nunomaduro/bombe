#ifndef __REQUESTER_H_
#define __REQUESTER_H_

#include <curl/curl.h>

struct Request
{
    CURL *curl;
    char *url;
};

CURL *requester_open();
void requester_send(struct Request *request, long *status_code);
void requester_close();

#endif /* __REQUESTER_H_ */
