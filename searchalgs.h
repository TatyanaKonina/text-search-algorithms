#ifndef SEARCHALGS_H
#define SEARCHALGS_H
#include "structs.h"

typedef enum ALGTYPES {
	NAI, RK, BMH
};

#define ALPHSIZE 123
#define BASE 256
#define QMOD 13
#define NAIMEM 1 //���������� ������ matched
#define RKMEM 4 //����������: matched, radix, patNumber, textNumber
#define BMHMEM 127 //����������: ind, textInd, positionn, equal, badCharaters � �������� ALPHSIZE + ������ ������� ��������� ����������� ���������� ������ ��� relatedshifts

extern const char alphabet[];
extern const int alphabetAccess[];

SearchResult* naiveStringMatcher(SearchRequest* request);
SearchResult* rabinKarpMatcher(SearchRequest* request);
SearchResult* boyerMooreHorspoolMatcher(SearchRequest* request);

#endif