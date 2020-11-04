#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

#include "requester.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage:\n\t%s <url> <number-of-requests>\n", argv[0]);
        exit(-1);
    }

    char *url = argv[1];
    int number_of_requests;
    sscanf(argv[2], "%d", &number_of_requests);

    long status_code = 200;
    struct timeval start, end;

    CURL *curl = requester_open();
    struct Request request;
    request.curl = curl;

    for (int i = 0; i < number_of_requests; i++)
    {
        request.url = url;

        gettimeofday(&start, NULL);
        requester_send(&request, &status_code);
        gettimeofday(&end, NULL);

        float micros = (float)((((end.tv_sec - start.tv_sec) * 1000000) + end.tv_usec) - (start.tv_usec)) / 1000000.0;
        printf("[%ld] %s ~= %f seconds \n", status_code, url, micros);
    }

    requester_close(curl);

    return 0;
}
