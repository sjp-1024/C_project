

#include <stdlib.h>
#include <pthread.h>
#include <curses.h>
#include <math.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <pwd.h>


#ifndef _UTIL_H
#define _UTIL_H

int socket_create(int port);
int socket_connect(int port, char *host);

#endif
