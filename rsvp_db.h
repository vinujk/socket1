#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct session {
        char sender[16];
        char receiver[16];
        time_t last_path_time;
	u_int8_t dest;
        struct session *next;
};


struct session* insert_session(struct session* , char[], char[], u_int8_t);
struct session* delete_session(struct session* , char[], char[]);

