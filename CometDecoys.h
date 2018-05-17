#ifndef _COMETDECOYS_H
#define _COMETDECOYS_H

//MaxLen is 70 for decoy sets of 50k
//MaxLen is 60 for decoy sets of 10k and 20k

#define MAX_DECOY_PEP_LEN 70
#define DECOY_SIZE        3000

typedef struct DecoysStruct
{
   char *szPeptide;
   double pdIonsN[MAX_DECOY_PEP_LEN];
   double pdIonsC[MAX_DECOY_PEP_LEN];
} DecoysStruct;

class KDecoys{
public:
  static DecoysStruct decoyIons[];
};

#endif

