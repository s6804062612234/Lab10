#include <stdio.h>
#include <string.h>
typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[16];
	char nameSurname[25];
	account stdACC;
} hoststd;

hoststd cs[5] = {
				{"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
				{"66-040626-2687-0", "MR.B", {"user2", "passwd2"}},
				{"66-040626-2687-1", "MR.C", {"user3", "passwd3"}},
				{"66-040626-2687-2", "MR.D", {"user4", "passwd4"}},
				{"66-040626-2687-3", "MR.E", {"user5", "passwd5"}}
			};


int checkLogin(char *login, char *passwd, hoststd std[]) {
    int i;
    for(i=0; i<5; i++) {
        if(!strcmp(login, std[i].stdACC.loginname) && !strcmp(passwd, std[i].stdACC.password))
            return 1;
    }
    return 0;
}

int main() {
	char login[64];
	char password[64];
    printf("Enter login : "); gets(login);
    printf("Enter password : "); gets(password);
    if( checkLogin(login, password, cs) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
}
