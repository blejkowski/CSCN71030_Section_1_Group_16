#define MAX_LENGTH_NAME 20

typedef enum licenseClass{G1, G2, G }LICENSECLASS;

typedef struct customer {
	int customerId;
	char firstName[MAX_LENGTH_NAME];
	char lastName[MAX_LENGTH_NAME];
	LICENSECLASS licenseClass;
	int age;
}CUSTOMER, *pCUSTOMER;

CUSTOMER createCustomer(char* firstName, char* lastName, LICENSECLASS licenseClass, int age);

CUSTOMER loadCustomer(int customerId, char* firstName, char* lastName, LICENSECLASS licenseClass, int age);

CUSTOMER printCustomer(CUSTOMER customer);