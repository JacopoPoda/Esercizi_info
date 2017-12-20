ripasso

->strncpy (str1,str2, 10 );
da str1  a str2 , copiando i primi 9 caratteri tenendo 

->strncmp (str3,str4, 10 );
confronta i primi 10 caratteri di str3 e str4 , ritorna: 
0 se sono uguali,
<0 se str3 viene prima di str4 in ordine alfabetico , 
>1 se str3 viene prima di str4 in ordine alfabetico 

->strncat(s1(dest),s2(src),10);
concatena i primi 10 caratteri della stringa s2 di seguito 
alla s1 con il terminatore

char v[100];
printf("la dimensione è: %d",sizeof(v));	//ritorna 4 perchè ogni 
											//carattere usa 4 bit

int v[100];
printf("la dimensione è: %d",sizeof(v));//ritorna 400 perchè ogni
										//intero è formato da 4 bit


int v[100]; //dividendo per la dimensione di un elemento, ottengo
			//sempre, per qualisiasi tipo di dato (int, float, ecc)
			//il numero esatto di elementi
printf("la dimensione è: %d",sizeof(v)/sizeof(v[0]));




