typedef struct lianbiao {
	int xuehao;
	char xingming[20];
	char xingbie[10];
	int chengji;
	struct lianbiao *wei;
} lian ;
typedef struct Tou {
	lian* head;
} tou ;
