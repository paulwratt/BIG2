#define WHELP 0

typedef struct config {
	char ident[4];	/* Identificateur pour retrouver l'offset */
	int sizeh;			/* Taille fonte par d�faut */
	int chap;				/* Chapitre par d�faut */
	int opt;				/* N� option chapitre courant menu ppal */
	int opth;				/* N� option chapitre courant menu hi�rarchique */
	int nbrel;			/* Nbre de lignes d'impression par page */
	GRECT wpos;			/* Coordonn�es de la fen�tre */
} Config;

