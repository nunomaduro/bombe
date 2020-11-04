#include <curl/curl.h>

#include "requester.h"

CURL *requester_open()
{
    return curl_easy_init();
}

void requester_send(struct Request *request, long *status_code)
{
    CURL *curl = request->curl;

    curl_easy_setopt(curl, CURLOPT_URL, request->url);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_NOBODY, 1L);

    curl_easy_perform(curl);

    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, status_code);
}

void requester_close(CURL *curl)
{
    curl_easy_cleanup(curl);
}
