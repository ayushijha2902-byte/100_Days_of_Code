#include <stdio.h>
#include <string.h>
enum roles{
    ADMIN,
    USER,
    GUEST,
};
int main() {
    char role[20];
	enum roles role;
     if (strcmp(role, "ADMIN") == 0) {
		role = ADMIN;
	} else if (strcmp(role, "USER") == 0) {
		role = USER;
	} else if (strcmp(role, "GUEST") == 0) {
		role = GUEST;
	} else {
		return 0;
	}
	switch (role) {
		case ADMIN:
			printf("Welcome Admin!\n");
			break;
		case USER:
			printf("Welcome User!\n");
			break;
		case GUEST:
			printf("Welcome Guest!\n");
			break;
	}
	return 0;
}