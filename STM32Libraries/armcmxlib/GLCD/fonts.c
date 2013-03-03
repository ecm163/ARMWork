#include "armcmx.h"


byte Chicago_15[] =	{
	0x0A, 0x0F, 'P', // maxwidth, height, proprtional
	/* ' ' (20), width 06 from +2 byte */
	0x06, 0x00, 0x00,  0x00, 0x00,  0x00, 0x00,  0x00, 0x00,  0x00, 0x00,  0x00, 0x00,  
	/* '!' (21), width 02 from +15 byte */
	0x02, 0xF8, 0x0D,  0xF8, 0x0D,  
	/* '"' (22), width 03 from +20 byte */
	0x03, 0x38, 0x00,  0x00, 0x00,  0x38, 0x00,  
	/* '#' (23), width 07 from +27 byte */
	0x07, 0x00, 0x02,  0x00, 0x06,  0xE0, 0x03,  0x18, 0x02,  0x20, 0x06,  0xE0, 0x03,  0x18, 0x02,  
	/* '$' (24), width 05 from +42 byte */
	0x05, 0x70, 0x04,  0xC8, 0x08,  0xFC, 0x1F,  0x88, 0x09,  0x10, 0x07,  
	/* '%' (25), width 09 from +53 byte */
	0x09, 0x30, 0x00,  0x48, 0x00,  0x48, 0x0C,  0x30, 0x03,  0xC8, 0x00,  0x68, 0x06,  0x18, 0x09,  0x00, 0x09,  0x00, 0x06,  
	/* '&' (26), width 08 from +72 byte */
	0x08, 0x30, 0x07,  0xF8, 0x0F,  0xC8, 0x08,  0x08, 0x08,  0x18, 0x0F,  0x18, 0x07,  0x00, 0x01,  0xE0, 0x00,  
	/* ''' (27), width 01 from +89 byte */
	0x01, 0x38, 0x00,  
	/* '(' (28), width 03 from +92 byte */
	0x03, 0xF8, 0x0F,  0xFC, 0x1F,  0x04, 0x10,  
	/* ')' (29), width 03 from +99 byte */
	0x03, 0x04, 0x10,  0xFC, 0x1F,  0xF8, 0x0F,  
	/* '*' (2a), width 05 from +106 byte */
	0x05, 0x90, 0x00,  0x60, 0x00,  0xF8, 0x01,  0x60, 0x00,  0x90, 0x00,  
	/* '+' (2b), width 07 from +117 byte */
	0x07, 0x00, 0x01,  0x00, 0x01,  0x00, 0x01,  0xC0, 0x07,  0x00, 0x01,  0x00, 0x01,  0x00, 0x01,  
	/* ',' (2c), width 02 from +132 byte */
	0x02, 0x00, 0x2C,  0x00, 0x1C,  
	/* '-' (2d), width 05 from +137 byte */
	0x05, 0x00, 0x01,  0x00, 0x01,  0x00, 0x01,  0x00, 0x01,  0x00, 0x01,  
	/* '.' (2e), width 02 from +148 byte */
	0x02, 0x00, 0x0C,  0x00, 0x0C,  
	/* '/' (2f), width 05 from +153 byte */
	0x05, 0x00, 0x08,  0x00, 0x07,  0xC0, 0x00,  0x38, 0x00,  0x04, 0x00,  
	/* '0' (30), width 06 from +164 byte */
	0x06, 0xF0, 0x07,  0xF8, 0x0F,  0x88, 0x09,  0xE8, 0x08,  0xF8, 0x0F,  0xF0, 0x07,  
	/* '1' (31), width 02 from +177 byte */
	0x02, 0xF0, 0x0F,  0xF8, 0x0F,  
	/* '2' (32), width 06 from +182 byte */
	0x06, 0x10, 0x0C,  0x08, 0x0E,  0x08, 0x0B,  0x88, 0x09,  0xF8, 0x08,  0x70, 0x08,  
	/* '3' (33), width 06 from +195 byte */
	0x06, 0x08, 0x04,  0x48, 0x08,  0x68, 0x08,  0x78, 0x08,  0xD8, 0x0F,  0x88, 0x07,  
	/* '4' (34), width 07 from +208 byte */
	0x07, 0x80, 0x01,  0xC0, 0x01,  0x20, 0x01,  0x10, 0x01,  0xF8, 0x0F,  0xF8, 0x0F,  0x00, 0x01,  
	/* '5' (35), width 06 from +223 byte */
	0x06, 0x78, 0x04,  0x78, 0x08,  0x48, 0x08,  0x48, 0x08,  0xC8, 0x0F,  0x88, 0x07,  
	/* '6' (36), width 06 from +236 byte */
	0x06, 0xE0, 0x07,  0xF0, 0x0F,  0x58, 0x08,  0x48, 0x08,  0xC8, 0x0F,  0x80, 0x07,  
	/* '7' (37), width 07 from +249 byte */
	0x07, 0x08, 0x00,  0x08, 0x00,  0x08, 0x00,  0x08, 0x0F,  0xC8, 0x0F,  0xF8, 0x00,  0x38, 0x00,  
	/* '8' (38), width 06 from +264 byte */
	0x06, 0x70, 0x07,  0x78, 0x0F,  0x88, 0x08,  0x88, 0x08,  0x78, 0x0F,  0x70, 0x07,  
	/* '9' (39), width 06 from +277 byte */
	0x06, 0xF0, 0x00,  0xF8, 0x09,  0x08, 0x09,  0x08, 0x0D,  0xF8, 0x07,  0xF0, 0x03,  
	/* ':' (3a), width 02 from +290 byte */
	0x02, 0x60, 0x0C,  0x60, 0x0C,  
	/* ';' (3b), width 02 from +295 byte */
	0x02, 0x60, 0x2C,  0x60, 0x1C,  
	/* '<' (3c), width 05 from +300 byte */
	0x05, 0x80, 0x00,  0xC0, 0x01,  0x60, 0x03,  0x30, 0x06,  0x10, 0x04,  
	/* '=' (3d), width 06 from +311 byte */
	0x06, 0x80, 0x02,  0x80, 0x02,  0x80, 0x02,  0x80, 0x02,  0x80, 0x02,  0x80, 0x02,  
	/* '>' (3e), width 06 from +324 byte */
	0x06, 0x00, 0x00,  0x10, 0x04,  0x20, 0x02,  0x40, 0x01,  0x80, 0x00,  0x80, 0x00,  
	/* '?' (3f), width 06 from +337 byte */
	0x06, 0x10, 0x00,  0x08, 0x00,  0x88, 0x0D,  0xC8, 0x0D,  0x78, 0x00,  0x30, 0x00,  
	/* '@' (40), width 09 from +350 byte */
	0x09, 0xE0, 0x03,  0x10, 0x04,  0xC8, 0x09,  0x28, 0x0A,  0x28, 0x0A,  0xE8, 0x0B,  0x08, 0x0A,  0x10, 0x02,  0xE0, 0x03,  
	/* 'A' (41), width 06 from +369 byte */
	0x06, 0xF0, 0x0F,  0xF8, 0x0F,  0x88, 0x00,  0x88, 0x00,  0xF8, 0x0F,  0xF0, 0x0F,  
	/* 'B' (42), width 06 from +382 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x88, 0x08,  0x88, 0x08,  0x78, 0x0F,  0x70, 0x07,  
	/* 'C' (43), width 06 from +395 byte */
	0x06, 0xF0, 0x07,  0xF8, 0x0F,  0x08, 0x08,  0x08, 0x08,  0x08, 0x08,  0x10, 0x04,  
	/* 'D' (44), width 06 from +408 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x08, 0x08,  0x08, 0x08,  0xF8, 0x0F,  0xF0, 0x07,  
	/* 'E' (45), width 05 from +421 byte */
	0x05, 0xF8, 0x0F,  0xF8, 0x0F,  0x88, 0x08,  0x88, 0x08,  0x08, 0x08,  
	/* 'F' (46), width 05 from +432 byte */
	0x05, 0xF8, 0x0F,  0xF8, 0x0F,  0x88, 0x00,  0x88, 0x00,  0x08, 0x00,  
	/* 'G' (47), width 06 from +443 byte */
	0x06, 0xF0, 0x07,  0xF8, 0x0F,  0x08, 0x08,  0x08, 0x08,  0x88, 0x0F,  0x90, 0x07,  
	/* 'H' (48), width 06 from +456 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x80, 0x00,  0x80, 0x00,  0xF8, 0x0F,  0xF8, 0x0F,  
	/* 'I' (49), width 02 from +469 byte */
	0x02, 0xF8, 0x0F,  0xF8, 0x0F,  
	/* 'J' (4a), width 06 from +474 byte */
	0x06, 0x00, 0x07,  0x00, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xF8, 0x0F,  0xF8, 0x07,  
	/* 'K' (4b), width 06 from +487 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0xC0, 0x01,  0x20, 0x02,  0x10, 0x04,  0x08, 0x08,  
	/* 'L' (4c), width 05 from +500 byte */
	0x05, 0xF8, 0x0F,  0xF8, 0x0F,  0x00, 0x08,  0x00, 0x08,  0x00, 0x08,  
	/* 'M' (4d), width 0A from +511 byte */
	0x0A, 0xF8, 0x0F,  0x70, 0x00,  0xE0, 0x00,  0xC0, 0x01,  0x80, 0x03,  0xC0, 0x01,  0xE0, 0x00,  0x70, 0x00,  0xF8, 0x0F,  0xF8, 0x0F,  
	/* 'N' (4e), width 07 from +532 byte */
	0x07, 0xF8, 0x0F,  0x70, 0x00,  0xE0, 0x00,  0xC0, 0x01,  0x80, 0x03,  0x00, 0x07,  0xF8, 0x0F,  
	/* 'O' (4f), width 06 from +547 byte */
	0x06, 0xF0, 0x07,  0xF8, 0x0F,  0x08, 0x08,  0x08, 0x08,  0xF8, 0x0F,  0xF0, 0x07,  
	/* 'P' (50), width 06 from +560 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x88, 0x00,  0x88, 0x00,  0xF8, 0x00,  0x70, 0x00,  
	/* 'Q' (51), width 06 from +573 byte */
	0x06, 0xF0, 0x07,  0xF8, 0x0F,  0x08, 0x08,  0x08, 0x08,  0xF8, 0x1F,  0xF0, 0x17,  
	/* 'R' (52), width 06 from +586 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x88, 0x00,  0x88, 0x00,  0xF8, 0x0F,  0x70, 0x0F,  
	/* 'S' (53), width 05 from +599 byte */
	0x05, 0x70, 0x04,  0xF8, 0x08,  0xC8, 0x09,  0x88, 0x0F,  0x10, 0x07,  
	/* 'T' (54), width 08 from +610 byte */
	0x08, 0x08, 0x00,  0x08, 0x00,  0x08, 0x00,  0xF8, 0x0F,  0xF8, 0x0F,  0x08, 0x00,  0x08, 0x00,  0x08, 0x00,  
	/* 'U' (55), width 06 from +627 byte */
	0x06, 0xF8, 0x07,  0xF8, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xF8, 0x0F,  0xF8, 0x07,  
	/* 'V' (56), width 06 from +640 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xF8, 0x07,  0xF8, 0x03,  
	/* 'W' (57), width 0A from +653 byte */
	0x0A, 0xF8, 0x0F,  0xF8, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xF8, 0x0F,  0xF8, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xF8, 0x07,  0xF8, 0x03,  
	/* 'X' (58), width 06 from +674 byte */
	0x06, 0x78, 0x0F,  0x78, 0x0F,  0x80, 0x00,  0x80, 0x00,  0x78, 0x0F,  0x78, 0x0F,  
	/* 'Y' (59), width 06 from +687 byte */
	0x06, 0x78, 0x00,  0xF8, 0x00,  0x80, 0x0F,  0x80, 0x0F,  0xF8, 0x00,  0x78, 0x00,  
	/* 'Z' (5a), width 06 from +700 byte */
	0x06, 0x08, 0x0C,  0x08, 0x0F,  0xC8, 0x0B,  0xF8, 0x08,  0x78, 0x08,  0x18, 0x08,  
	/* '[' (5b), width 02 from +713 byte */
	0x02, 0xFC, 0x1F,  0xFC, 0x1F,  
	/* '\' (5c), width 05 from +718 byte */
	0x05, 0x04, 0x00,  0x38, 0x00,  0xC0, 0x00,  0x00, 0x07,  0x00, 0x08,  
	/* ']' (5d), width 02 from +729 byte */
	0x02, 0xFC, 0x1F,  0xFC, 0x1F,  
	/* '^' (5e), width 06 from +734 byte */
	0x06, 0x20, 0x00,  0x30, 0x00,  0x18, 0x00,  0x18, 0x00,  0x30, 0x00,  0x20, 0x00,  
	/* '_' (5f), width 08 from +747 byte */
	0x08, 0x00, 0x10,  0x00, 0x10,  0x00, 0x10,  0x00, 0x10,  0x00, 0x10,  0x00, 0x10,  0x00, 0x10,  0x00, 0x10,  
	/* '`' (60), width 02 from +764 byte */
	0x02, 0x04, 0x00,  0x08, 0x00,  
	/* 'a' (61), width 06 from +769 byte */
	0x06, 0x40, 0x06,  0x20, 0x0F,  0x20, 0x09,  0x20, 0x09,  0xE0, 0x0F,  0xC0, 0x0F,  
	/* 'b' (62), width 06 from +782 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x20, 0x08,  0x20, 0x08,  0xE0, 0x0F,  0xC0, 0x07,  
	/* 'c' (63), width 05 from +795 byte */
	0x05, 0xC0, 0x07,  0xE0, 0x0F,  0x20, 0x08,  0x20, 0x08,  0x40, 0x04,  
	/* 'd' (64), width 06 from +806 byte */
	0x06, 0xC0, 0x07,  0xE0, 0x0F,  0x20, 0x08,  0x20, 0x08,  0xF8, 0x0F,  0xF8, 0x0F,  
	/* 'e' (65), width 06 from +819 byte */
	0x06, 0xC0, 0x07,  0xE0, 0x0F,  0x20, 0x09,  0x20, 0x09,  0xE0, 0x09,  0xC0, 0x05,  
	/* 'f' (66), width 05 from +832 byte */
	0x05, 0x20, 0x00,  0xF0, 0x0F,  0xF8, 0x0F,  0x28, 0x00,  0x08, 0x00,  
	/* 'g' (67), width 06 from +843 byte */
	0x06, 0xC0, 0x27,  0xE0, 0x4F,  0x20, 0x48,  0x20, 0x48,  0xE0, 0x7F,  0xE0, 0x3F,  
	/* 'h' (68), width 06 from +856 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x20, 0x00,  0x20, 0x00,  0xE0, 0x0F,  0xC0, 0x0F,  
	/* 'i' (69), width 02 from +869 byte */
	0x02, 0xE8, 0x0F,  0xE8, 0x0F,  
	/* 'j' (6a), width 05 from +874 byte */
	0x05, 0x00, 0x10,  0x00, 0x20,  0x00, 0x20,  0xE8, 0x3F,  0xE8, 0x1F,  
	/* 'k' (6b), width 06 from +885 byte */
	0x06, 0xF8, 0x0F,  0xF8, 0x0F,  0x80, 0x02,  0xC0, 0x06,  0x60, 0x0C,  0x20, 0x08,  
	/* 'l' (6c), width 02 from +898 byte */
	0x02, 0xF8, 0x0F,  0xF8, 0x0F,  
	/* 'm' (6d), width 0A from +903 byte */
	0x0A, 0xE0, 0x0F,  0xE0, 0x0F,  0x20, 0x00,  0x20, 0x00,  0xE0, 0x0F,  0xC0, 0x0F,  0x20, 0x00,  0x20, 0x00,  0xE0, 0x0F,  0xC0, 0x0F,  
	/* 'n' (6e), width 06 from +924 byte */
	0x06, 0xE0, 0x0F,  0xE0, 0x0F,  0x20, 0x00,  0x20, 0x00,  0xE0, 0x0F,  0xC0, 0x0F,  
	/* 'o' (6f), width 06 from +937 byte */
	0x06, 0xC0, 0x07,  0xE0, 0x0F,  0x20, 0x08,  0x20, 0x08,  0xE0, 0x0F,  0xC0, 0x07,  
	/* 'p' (70), width 06 from +950 byte */
	0x06, 0xE0, 0x3F,  0xE0, 0x3F,  0x20, 0x08,  0x20, 0x08,  0xE0, 0x0F,  0xC0, 0x07,  
	/* 'q' (71), width 06 from +963 byte */
	0x06, 0xC0, 0x07,  0xE0, 0x0F,  0x20, 0x08,  0x20, 0x08,  0xE0, 0x3F,  0xE0, 0x3F,  
	/* 'r' (72), width 05 from +976 byte */
	0x05, 0xE0, 0x0F,  0xE0, 0x0F,  0x40, 0x00,  0x60, 0x00,  0x60, 0x00,  
	/* 's' (73), width 05 from +987 byte */
	0x05, 0xC0, 0x04,  0xE0, 0x09,  0xA0, 0x0B,  0x20, 0x0F,  0x40, 0x06,  
	/* 't' (74), width 04 from +998 byte */
	0x04, 0x20, 0x00,  0xF8, 0x07,  0xF8, 0x0F,  0x20, 0x08,  
	/* 'u' (75), width 06 from +1007 byte */
	0x06, 0xE0, 0x07,  0xE0, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xE0, 0x0F,  0xE0, 0x0F,  
	/* 'v' (76), width 06 from +1020 byte */
	0x06, 0xE0, 0x0F,  0xE0, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xE0, 0x07,  0xE0, 0x03,  
	/* 'w' (77), width 0A from +1033 byte */
	0x0A, 0xE0, 0x0F,  0xE0, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xE0, 0x0F,  0xE0, 0x0F,  0x00, 0x08,  0x00, 0x08,  0xE0, 0x07,  0xE0, 0x03,  
	/* 'x' (78), width 06 from +1054 byte */
	0x06, 0xE0, 0x0E,  0xE0, 0x0E,  0x00, 0x01,  0x00, 0x01,  0xE0, 0x0E,  0xE0, 0x0E,  
	/* 'y' (79), width 06 from +1067 byte */
	0x06, 0xE0, 0x27,  0xE0, 0x4F,  0x00, 0x48,  0x00, 0x48,  0xE0, 0x7F,  0xE0, 0x3F,  
	/* 'z' (7a), width 06 from +1080 byte */
	0x06, 0x20, 0x0C,  0x20, 0x0E,  0x20, 0x09,  0xA0, 0x08,  0x60, 0x08,  0x20, 0x08,  
	/* '{' (7b), width 03 from +1093 byte */
	0x03, 0x80, 0x00,  0x78, 0x0F,  0x04, 0x10,  
	/* '|' (7c), width 01 from +1100 byte */
	0x01, 0xFC, 0x1F,  
	/* '}' (7d), width 03 from +1103 byte */
	0x03, 0x04, 0x10,  0x78, 0x0F,  0x80, 0x00,  
	/* '~' (7e), width 06 from +1110 byte */
	0x06, 0x40, 0x00,  0x20, 0x00,  0x20, 0x00,  0x40, 0x00,  0x40, 0x00,  0x20, 0x00,  
	/* '' (7f), width 05 from +1123 byte */
	0x05, 0xFF, 0x0F,  0x01, 0x08,  0x01, 0x08,  0x01, 0x08,  0xFF, 0x0F,  
	};
	

byte Fixed_12w8[]= {
	0x08, 0x0C, 'F', // maxwidth, height, proprtional
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ' '
0x00, 0x00, 0xfe, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '!'
0x0e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '"'
0x50, 0x00, 0x50, 0x03, 0xf8, 0x00, 0x56, 0x00, 0x50, 0x03, 0xf8, 0x00, 0x56, 0x00, 0x00, 0x00, // '#'
0x9c, 0x01, 0x22, 0x02, 0xff, 0x07, 0x22, 0x02, 0xc4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '$'
0x1c, 0x00, 0x22, 0x00, 0x22, 0x02, 0x9c, 0x01, 0x40, 0x00, 0x30, 0x00, 0xcc, 0x01, 0x22, 0x02, // '%'
0x00, 0x00, 0xc0, 0x01, 0x3c, 0x02, 0x22, 0x02, 0x52, 0x02, 0x8c, 0x01, 0xc0, 0x03, 0x00, 0x02, // '&'
0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '''
0x00, 0x00, 0xf0, 0x03, 0x0c, 0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '('
0x02, 0x00, 0x0c, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ')'
0x14, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '*'
0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xf8, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, // '+'
0x00, 0x08, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ','
0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '-'
0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '.'
0x00, 0x03, 0xf0, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '/'
0xf8, 0x00, 0x04, 0x01, 0x02, 0x02, 0x04, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '0'
0x08, 0x00, 0x04, 0x00, 0xfe, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '1'
0x0c, 0x03, 0x82, 0x02, 0x42, 0x02, 0x24, 0x02, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '2'
0x84, 0x01, 0x02, 0x02, 0x22, 0x02, 0x54, 0x01, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '3'
0xc0, 0x00, 0xb0, 0x00, 0x8c, 0x00, 0xfe, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '4'
0xb8, 0x01, 0x16, 0x02, 0x12, 0x02, 0x22, 0x01, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '5'
0xf8, 0x00, 0x24, 0x01, 0x12, 0x02, 0x22, 0x01, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '6'
0x02, 0x00, 0x82, 0x03, 0x72, 0x00, 0x0a, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '7'
0x88, 0x00, 0x54, 0x01, 0x22, 0x02, 0x54, 0x01, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '8'
0x18, 0x01, 0x24, 0x02, 0x42, 0x02, 0x24, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '9'
0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ':'
0x00, 0x08, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ';'
0x20, 0x00, 0x50, 0x00, 0x50, 0x00, 0x88, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '<'
0x48, 0x00, 0x48, 0x00, 0x48, 0x00, 0x48, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '='
0x04, 0x01, 0x88, 0x00, 0x50, 0x00, 0x50, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '>'
0x0c, 0x00, 0x06, 0x00, 0xc2, 0x02, 0x22, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '?'
0xf0, 0x03, 0x08, 0x04, 0xf4, 0x09, 0x0a, 0x02, 0x0a, 0x02, 0x0a, 0x01, 0xf2, 0x03, 0x1a, 0x02, // '@'
0x00, 0x03, 0xe0, 0x00, 0x5c, 0x00, 0x42, 0x00, 0x5c, 0x00, 0xe0, 0x00, 0x00, 0x03, 0x00, 0x00, // 'A'
0x00, 0x00, 0xfe, 0x03, 0x22, 0x02, 0x22, 0x02, 0x22, 0x02, 0xdc, 0x01, 0x00, 0x00, 0x00, 0x00, // 'B'
0x00, 0x00, 0xf8, 0x00, 0x04, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x8c, 0x01, 0x00, 0x00, // 'C'
0x00, 0x00, 0xfe, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x01, 0xf8, 0x00, 0x00, 0x00, // 'D'
0x00, 0x00, 0xfe, 0x03, 0x22, 0x02, 0x22, 0x02, 0x22, 0x02, 0x22, 0x02, 0x00, 0x00, 0x00, 0x00, // 'E'
0x00, 0x00, 0xfe, 0x03, 0x22, 0x00, 0x22, 0x00, 0x22, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 'F'
0x00, 0x00, 0xf8, 0x00, 0x04, 0x01, 0x02, 0x02, 0x22, 0x02, 0x22, 0x02, 0xec, 0x01, 0x00, 0x00, // 'G'
0x00, 0x00, 0xfe, 0x03, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xfe, 0x03, 0x00, 0x00, // 'H'
0x00, 0x00, 0xfe, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'I'
0x80, 0x01, 0x00, 0x02, 0x00, 0x02, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'J'
0x00, 0x00, 0xfe, 0x03, 0x20, 0x00, 0x78, 0x00, 0x84, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // 'K'
0x00, 0x00, 0xfe, 0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // 'L'
0x00, 0x00, 0xfe, 0x03, 0x1c, 0x00, 0xe0, 0x01, 0x00, 0x02, 0xe0, 0x01, 0x1c, 0x00, 0xfe, 0x03, // 'M'
0x00, 0x00, 0xfe, 0x03, 0x0c, 0x00, 0x30, 0x00, 0x40, 0x00, 0x80, 0x01, 0xfe, 0x03, 0x00, 0x00, // 'N'
0x00, 0x00, 0xf8, 0x00, 0x04, 0x01, 0x02, 0x02, 0x02, 0x02, 0x04, 0x01, 0xf8, 0x00, 0x00, 0x00, // 'O'
0x00, 0x00, 0xfe, 0x03, 0x22, 0x00, 0x22, 0x00, 0x22, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, // 'P'
0x00, 0x00, 0xf8, 0x00, 0x04, 0x01, 0x02, 0x02, 0x02, 0x03, 0x04, 0x01, 0xf8, 0x06, 0x00, 0x00, // 'Q'
0x00, 0x00, 0xfe, 0x03, 0x22, 0x00, 0x22, 0x00, 0x62, 0x00, 0xa2, 0x00, 0x1c, 0x01, 0x00, 0x02, // 'R'
0x00, 0x00, 0x9c, 0x01, 0x22, 0x02, 0x22, 0x02, 0x22, 0x02, 0xcc, 0x01, 0x00, 0x00, 0x00, 0x00, // 'S'
0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0xfe, 0x03, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 'T'
0x00, 0x00, 0xfe, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, // 'U'
0x06, 0x00, 0x38, 0x00, 0xc0, 0x01, 0x00, 0x02, 0xc0, 0x01, 0x38, 0x00, 0x06, 0x00, 0x00, 0x00, // 'V'
0x06, 0x00, 0xf8, 0x01, 0x00, 0x02, 0xfc, 0x01, 0x02, 0x00, 0xfc, 0x01, 0x00, 0x02, 0xf0, 0x01, // 'W'
0x02, 0x02, 0x04, 0x01, 0xd8, 0x00, 0x20, 0x00, 0xd8, 0x00, 0x04, 0x01, 0x02, 0x02, 0x00, 0x00, // 'X'
0x02, 0x00, 0x0c, 0x00, 0x10, 0x00, 0xe0, 0x03, 0x10, 0x00, 0x0c, 0x00, 0x02, 0x00, 0x00, 0x00, // 'Y'
0x02, 0x03, 0x82, 0x02, 0x62, 0x02, 0x12, 0x02, 0x0a, 0x02, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, // 'Z'
0x00, 0x00, 0xfe, 0x0f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '['
0x06, 0x00, 0xf8, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '\'
0x02, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ']'
0x20, 0x00, 0x1c, 0x00, 0x02, 0x00, 0x1c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '^'
0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, // '_'
0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '`'
0x90, 0x01, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'a'
0xfe, 0x03, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'b'
0xf0, 0x01, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'c'
0xf0, 0x01, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0xfe, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'd'
0xf0, 0x01, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'e'
0xfe, 0x03, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'f'
0xf0, 0x09, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0xf8, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'g'
0xfe, 0x03, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'h'
0xfa, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'i'
0xfa, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'j'
0xfe, 0x03, 0x20, 0x00, 0xd0, 0x00, 0x08, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'k'
0xfe, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'l'
0xf8, 0x03, 0x10, 0x00, 0x08, 0x00, 0xf0, 0x03, 0x10, 0x00, 0x08, 0x00, 0xf0, 0x03, 0x00, 0x00, // 'm'
0xf8, 0x03, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'n'
0xf0, 0x01, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'o'
0xf8, 0x0f, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'p'
0xf0, 0x01, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0xf8, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'q'
0xf8, 0x03, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'r'
0x30, 0x01, 0x48, 0x02, 0x48, 0x02, 0x90, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 's'
0xfe, 0x03, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 't'
0xf8, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'u'
0x18, 0x00, 0xe0, 0x01, 0x00, 0x02, 0xe0, 0x01, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'v'
0xf8, 0x01, 0x00, 0x02, 0xe0, 0x01, 0x18, 0x00, 0xe0, 0x01, 0x00, 0x02, 0xf8, 0x01, 0x00, 0x00, // 'w'
0x08, 0x02, 0xb0, 0x01, 0x40, 0x00, 0xb0, 0x01, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'x'
0x18, 0x00, 0xe0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'y'
0x08, 0x03, 0xc8, 0x02, 0x28, 0x02, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 'z'
0x40, 0x00, 0xbc, 0x0f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '{'
0x00, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '|'
0x02, 0x00, 0xbc, 0x0f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '}'
0x30, 0x00, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '~'
};

byte Fixed_8w8[] = {
	0x07, 0x08, 'F', // maxwidth, height, proprtional
// 20 ( ) 
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 21 (!) 
0x06, // 00000110
0x5f, // 01011111
0x5f, // 01011111
0x06, // 00000110
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 22 (") 
0x07, // 00000111
0x07, // 00000111
0x00, // 00000000
0x07, // 00000111
0x07, // 00000111
0x00, // 00000000
0x00, // 00000000

// 23 (#) 
0x7f, // 01111111
0x7f, // 01111111
0x14, // 00010100
0x7f, // 01111111
0x7f, // 01111111
0x14, // 00010100
0x00, // 00000000

// 24 ($) 
0x24, // 00100100
0x2e, // 00101110
0x6b, // 01101011
0x6b, // 01101011
0x3a, // 00111010
0x12, // 00010010
0x00, // 00000000

// 25 (%) 
0x46, // 01000110
0x66, // 01100110
0x30, // 00110000
0x18, // 00011000
0x0c, // 00001100
0x66, // 01100110
0x62, // 01100010

// 26 (&) 
0x30, // 00110000
0x7a, // 01111010
0x4f, // 01001111
0x5d, // 01011101
0x37, // 00110111
0x7a, // 01111010
0x48, // 01001000

// 27 (') 
0x04, // 00000100
0x07, // 00000111
0x03, // 00000011
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 28 (() 
0x00, // 00000000
0x1c, // 00011100
0x3e, // 00111110
0x63, // 01100011
0x41, // 01000001
0x00, // 00000000
0x00, // 00000000

// 29 ()) 
0x00, // 00000000
0x41, // 01000001
0x63, // 01100011
0x3e, // 00111110
0x1c, // 00011100
0x00, // 00000000
0x00, // 00000000

// 2a (*) 
0x2a, // 00101010
0x3e, // 00111110
0x1c, // 00011100
0x1c, // 00011100
0x3e, // 00111110
0x2a, // 00101010
0x08, // 00001000

// 2b (+) 
0x08, // 00001000
0x3e, // 00111110
0x3e, // 00111110
0x08, // 00001000
0x08, // 00001000
0x00, // 00000000
0x00, // 00000000

// 2c (,) 
0x00, // 00000000
0x80, // 10000000
0xe0, // 11100000
0x60, // 01100000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 2d (-) 
0x08, // 00001000
0x08, // 00001000
0x08, // 00001000
0x08, // 00001000
0x08, // 00001000
0x08, // 00001000
0x00, // 00000000

// 2e (.) 
0x00, // 00000000
0x00, // 00000000
0x60, // 01100000
0x60, // 01100000
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 2f (/) 
0x60, // 01100000
0x30, // 00110000
0x18, // 00011000
0x0c, // 00001100
0x06, // 00000110
0x03, // 00000011
0x01, // 00000001

// 30 (0) 
0x3e, // 00111110
0x7f, // 01111111
0x41, // 01000001
0x49, // 01001001
0x41, // 01000001
0x7f, // 01111111
0x3e, // 00111110

// 31 (1) 
0x44, // 01000100
0x42, // 01000010
0x7f, // 01111111
0x7f, // 01111111
0x40, // 01000000
0x40, // 01000000
0x00, // 00000000

// 32 (2) 
0x62, // 01100010
0x73, // 01110011
0x59, // 01011001
0x49, // 01001001
0x6f, // 01101111
0x66, // 01100110
0x00, // 00000000

// 33 (3) 
0x22, // 00100010
0x63, // 01100011
0x49, // 01001001
0x49, // 01001001
0x7f, // 01111111
0x36, // 00110110
0x00, // 00000000

// 34 (4) 
0x18, // 00011000
0x1c, // 00011100
0x16, // 00010110
0x53, // 01010011
0x7f, // 01111111
0x7f, // 01111111
0x50, // 01010000

// 35 (5) 
0x27, // 00100111
0x67, // 01100111
0x45, // 01000101
0x45, // 01000101
0x7d, // 01111101
0x39, // 00111001
0x00, // 00000000

// 36 (6) 
0x3c, // 00111100
0x7e, // 01111110
0x4b, // 01001011
0x49, // 01001001
0x79, // 01111001
0x30, // 00110000
0x00, // 00000000

// 37 (7) 
0x03, // 00000011
0x03, // 00000011
0x71, // 01110001
0x79, // 01111001
0x0f, // 00001111
0x07, // 00000111
0x00, // 00000000

// 38 (8) 
0x36, // 00110110
0x7f, // 01111111
0x49, // 01001001
0x49, // 01001001
0x7f, // 01111111
0x36, // 00110110
0x00, // 00000000

// 39 (9) 
0x06, // 00000110
0x4f, // 01001111
0x49, // 01001001
0x69, // 01101001
0x3f, // 00111111
0x1e, // 00011110
0x00, // 00000000

// 3a (:) 
0x00, // 00000000
0x00, // 00000000
0x66, // 01100110
0x66, // 01100110
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 3b (;) 
0x00, // 00000000
0x80, // 10000000
0xe6, // 11100110
0x66, // 01100110
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000

// 3c (<) 
0x08, // 00001000
0x1c, // 00011100
0x36, // 00110110
0x63, // 01100011
0x41, // 01000001
0x00, // 00000000
0x00, // 00000000

// 3d (=) 
0x24, // 00100100
0x24, // 00100100
0x24, // 00100100
0x24, // 00100100
0x24, // 00100100
0x24, // 00100100
0x00, // 00000000

// 3e (>) 
0x00, // 00000000
0x41, // 01000001
0x63, // 01100011
0x36, // 00110110
0x1c, // 00011100
0x08, // 00001000
0x00, // 00000000

// 3f (?) 
0x02, // 00000010
0x03, // 00000011
0x51, // 01010001
0x59, // 01011001
0x0f, // 00001111
0x06, // 00000110
0x00, // 00000000

// 40 (@) 
0x3e, // 00111110
0x7f, // 01111111
0x41, // 01000001
0x5d, // 01011101
0x55, // 01010101
0x57, // 01010111
0x1e, // 00011110

// 41 (A) 
0x7c, // 01111100
0x7e, // 01111110
0x13, // 00010011
0x13, // 00010011
0x7e, // 01111110
0x7c, // 01111100
0x00, // 00000000

// 42 (B) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x49, // 01001001
0x49, // 01001001
0x7f, // 01111111
0x36, // 00110110

// 43 (C) 
0x1c, // 00011100
0x3e, // 00111110
0x63, // 01100011
0x41, // 01000001
0x41, // 01000001
0x63, // 01100011
0x22, // 00100010

// 44 (D) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x41, // 01000001
0x63, // 01100011
0x3e, // 00111110
0x1c, // 00011100

// 45 (E) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x49, // 01001001
0x5d, // 01011101
0x41, // 01000001
0x63, // 01100011

// 46 (F) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x49, // 01001001
0x1d, // 00011101
0x01, // 00000001
0x03, // 00000011

// 47 (G) 
0x1c, // 00011100
0x3e, // 00111110
0x63, // 01100011
0x41, // 01000001
0x51, // 01010001
0x73, // 01110011
0x72, // 01110010

// 48 (H) 
0x7f, // 01111111
0x7f, // 01111111
0x08, // 00001000
0x08, // 00001000
0x7f, // 01111111
0x7f, // 01111111
0x00, // 00000000

// 49 (I) 
0x00, // 00000000
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x41, // 01000001
0x00, // 00000000
0x00, // 00000000

// 4a (J) 
0x30, // 00110000
0x70, // 01110000
0x40, // 01000000
0x41, // 01000001
0x7f, // 01111111
0x3f, // 00111111
0x01, // 00000001

// 4b (K) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x08, // 00001000
0x1c, // 00011100
0x77, // 01110111
0x63, // 01100011

// 4c (L) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x41, // 01000001
0x40, // 01000000
0x60, // 01100000
0x70, // 01110000

// 4d (M) 
0x7f, // 01111111
0x7f, // 01111111
0x0e, // 00001110
0x1c, // 00011100
0x0e, // 00001110
0x7f, // 01111111
0x7f, // 01111111

// 4e (N) 
0x7f, // 01111111
0x7f, // 01111111
0x06, // 00000110
0x0c, // 00001100
0x18, // 00011000
0x7f, // 01111111
0x7f, // 01111111

// 4f (O) 
0x3e, // 00111110
0x7f, // 01111111
0x41, // 01000001
0x41, // 01000001
0x41, // 01000001
0x7f, // 01111111
0x3e, // 00111110

// 50 (P) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x49, // 01001001
0x09, // 00001001
0x0f, // 00001111
0x06, // 00000110

// 51 (Q) 
0x1e, // 00011110
0x3f, // 00111111
0x21, // 00100001
0x71, // 01110001
0x7f, // 01111111
0x5e, // 01011110
0x00, // 00000000

// 52 (R) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x09, // 00001001
0x19, // 00011001
0x7f, // 01111111
0x66, // 01100110

// 53 (S) 
0x22, // 00100010
0x67, // 01100111
0x4d, // 01001101
0x59, // 01011001
0x73, // 01110011
0x22, // 00100010
0x00, // 00000000

// 54 (T) 
0x03, // 00000011
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x41, // 01000001
0x03, // 00000011
0x00, // 00000000

// 55 (U) 
0x7f, // 01111111
0x7f, // 01111111
0x40, // 01000000
0x40, // 01000000
0x7f, // 01111111
0x7f, // 01111111
0x00, // 00000000

// 56 (V) 
0x1f, // 00011111
0x3f, // 00111111
0x60, // 01100000
0x60, // 01100000
0x3f, // 00111111
0x1f, // 00011111
0x00, // 00000000

// 57 (W) 
0x7f, // 01111111
0x7f, // 01111111
0x30, // 00110000
0x18, // 00011000
0x30, // 00110000
0x7f, // 01111111
0x7f, // 01111111

// 58 (X) 
0x43, // 01000011
0x67, // 01100111
0x3c, // 00111100
0x18, // 00011000
0x3c, // 00111100
0x67, // 01100111
0x43, // 01000011

// 59 (Y) 
0x07, // 00000111
0x4f, // 01001111
0x78, // 01111000
0x78, // 01111000
0x4f, // 01001111
0x07, // 00000111
0x00, // 00000000

// 5a (Z) 
0x47, // 01000111
0x63, // 01100011
0x71, // 01110001
0x59, // 01011001
0x4d, // 01001101
0x67, // 01100111
0x73, // 01110011

// 5b ([) 
0x00, // 00000000
0x7f, // 01111111
0x7f, // 01111111
0x41, // 01000001
0x41, // 01000001
0x00, // 00000000
0x00, // 00000000

// 5c (\) 
0x01, // 00000001
0x03, // 00000011
0x06, // 00000110
0x0c, // 00001100
0x18, // 00011000
0x30, // 00110000
0x60, // 01100000

// 5d (]) 
0x00, // 00000000
0x41, // 01000001
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x00, // 00000000
0x00, // 00000000

// 5e (^) 
0x08, // 00001000
0x0c, // 00001100
0x06, // 00000110
0x03, // 00000011
0x06, // 00000110
0x0c, // 00001100
0x08, // 00001000

// 5f (_) 
0x80, // 10000000
0x80, // 10000000
0x80, // 10000000
0x80, // 10000000
0x80, // 10000000
0x80, // 10000000
0x80, // 10000000

// 60 (`) 
0x00, // 00000000
0x00, // 00000000
0x03, // 00000011
0x07, // 00000111
0x04, // 00000100
0x00, // 00000000
0x00, // 00000000

// 61 (a) 
0x20, // 00100000
0x74, // 01110100
0x54, // 01010100
0x54, // 01010100
0x3c, // 00111100
0x78, // 01111000
0x40, // 01000000

// 62 (b) 
0x41, // 01000001
0x7f, // 01111111
0x3f, // 00111111
0x44, // 01000100
0x44, // 01000100
0x7c, // 01111100
0x38, // 00111000

// 63 (c) 
0x38, // 00111000
0x7c, // 01111100
0x44, // 01000100
0x44, // 01000100
0x6c, // 01101100
0x28, // 00101000
0x00, // 00000000

// 64 (d) 
0x38, // 00111000
0x7c, // 01111100
0x44, // 01000100
0x45, // 01000101
0x3f, // 00111111
0x7f, // 01111111
0x40, // 01000000

// 65 (e) 
0x38, // 00111000
0x7c, // 01111100
0x54, // 01010100
0x54, // 01010100
0x5c, // 01011100
0x18, // 00011000
0x00, // 00000000

// 66 (f) 
0x48, // 01001000
0x7e, // 01111110
0x7f, // 01111111
0x49, // 01001001
0x03, // 00000011
0x02, // 00000010
0x00, // 00000000

// 67 (g) 
0x98, // 10011000
0xbc, // 10111100
0xa4, // 10100100
0xa4, // 10100100
0xf8, // 11111000
0x7c, // 01111100
0x04, // 00000100

// 68 (h) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x08, // 00001000
0x04, // 00000100
0x7c, // 01111100
0x78, // 01111000

// 69 (i) 
0x00, // 00000000
0x44, // 01000100
0x7d, // 01111101
0x7d, // 01111101
0x40, // 01000000
0x00, // 00000000
0x00, // 00000000

// 6a (j) 
0x60, // 01100000
0xe0, // 11100000
0x80, // 10000000
0x80, // 10000000
0xfd, // 11111101
0x7d, // 01111101
0x00, // 00000000

// 6b (k) 
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x10, // 00010000
0x38, // 00111000
0x6c, // 01101100
0x44, // 01000100

// 6c (l) 
0x00, // 00000000
0x41, // 01000001
0x7f, // 01111111
0x7f, // 01111111
0x40, // 01000000
0x00, // 00000000
0x00, // 00000000

// 6d (m) 
0x7c, // 01111100
0x7c, // 01111100
0x18, // 00011000
0x38, // 00111000
0x1c, // 00011100
0x7c, // 01111100
0x78, // 01111000

// 6e (n) 
0x7c, // 01111100
0x7c, // 01111100
0x04, // 00000100
0x04, // 00000100
0x7c, // 01111100
0x78, // 01111000
0x00, // 00000000

// 6f (o) 
0x38, // 00111000
0x7c, // 01111100
0x44, // 01000100
0x44, // 01000100
0x7c, // 01111100
0x38, // 00111000
0x00, // 00000000

// 70 (p) 
0x84, // 10000100
0xfc, // 11111100
0xf8, // 11111000
0xa4, // 10100100
0x24, // 00100100
0x3c, // 00111100
0x18, // 00011000

// 71 (q) 
0x18, // 00011000
0x3c, // 00111100
0x24, // 00100100
0xa4, // 10100100
0xf8, // 11111000
0xfc, // 11111100
0x84, // 10000100

// 72 (r) 
0x44, // 01000100
0x7c, // 01111100
0x78, // 01111000
0x4c, // 01001100
0x04, // 00000100
0x1c, // 00011100
0x18, // 00011000

// 73 (s) 
0x48, // 01001000
0x5c, // 01011100
0x54, // 01010100
0x54, // 01010100
0x74, // 01110100
0x24, // 00100100
0x00, // 00000000

// 74 (t) 
0x00, // 00000000
0x04, // 00000100
0x3e, // 00111110
0x7f, // 01111111
0x44, // 01000100
0x24, // 00100100
0x00, // 00000000

// 75 (u) 
0x3c, // 00111100
0x7c, // 01111100
0x40, // 01000000
0x40, // 01000000
0x3c, // 00111100
0x7c, // 01111100
0x40, // 01000000

// 76 (v) 
0x1c, // 00011100
0x3c, // 00111100
0x60, // 01100000
0x60, // 01100000
0x3c, // 00111100
0x1c, // 00011100
0x00, // 00000000

// 77 (w) 
0x3c, // 00111100
0x7c, // 01111100
0x70, // 01110000
0x38, // 00111000
0x70, // 01110000
0x7c, // 01111100
0x3c, // 00111100

// 78 (x) 
0x44, // 01000100
0x6c, // 01101100
0x38, // 00111000
0x10, // 00010000
0x38, // 00111000
0x6c, // 01101100
0x44, // 01000100

// 79 (y) 
0x9c, // 10011100
0xbc, // 10111100
0xa0, // 10100000
0xa0, // 10100000
0xfc, // 11111100
0x7c, // 01111100
0x00, // 00000000

// 7a (z) 
0x4c, // 01001100
0x64, // 01100100
0x74, // 01110100
0x5c, // 01011100
0x4c, // 01001100
0x64, // 01100100
0x00, // 00000000

// 7b ({) 
0x08, // 00001000
0x08, // 00001000
0x3e, // 00111110
0x77, // 01110111
0x41, // 01000001
0x41, // 01000001
0x00, // 00000000

// 7c (|) 
0x00, // 00000000
0x00, // 00000000
0x00, // 00000000
0x77, // 01110111
0x77, // 01110111
0x00, // 00000000
0x00, // 00000000

// 7d (}) 
0x41, // 01000001
0x41, // 01000001
0x77, // 01110111
0x3e, // 00111110
0x08, // 00001000
0x08, // 00001000
0x00, // 00000000

// 7e (~) 
0x02, // 00000010
0x03, // 00000011
0x01, // 00000001
0x03, // 00000011
0x02, // 00000010
0x03, // 00000011
0x01, // 00000001

// 7f () 
0x00, // 00000000
0x06, // 00000110
0x0f, // 00001111
0x09, // 00001001
0x0f, // 00001111
0x06, // 00000110
0x00, // 00000000
};
