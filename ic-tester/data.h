
const uint8_t LOGIC_DATA[] PROGMEM = {
	'�', '�', '3', ',', '�', '�', '2', '3', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00011011, 0b11101100, 	// 7      [7]	1 2 4 5 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01011011, 0b01101100,  0b00000000, 0b10000000, 	// 1 2 4 5 7 11 12 14 15      [1, 2, 4, 5, 9, 10, 12, 13, 7]	16      [14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01010010, 0b01001000,  0b00001001, 0b10100100, 	// 2 5 7 12 15      [2, 5, 10, 13, 7]	1 4 11 14 16      [1, 4, 9, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01001001, 0b00100100,  0b00010010, 0b11001000, 	// 1 4 7 11 14      [1, 4, 9, 12, 7]	2 5 12 15 16      [2, 5, 10, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_END,

	'�', '�', '1', '1', ',', '�', '�', '1', '3', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b11111110, 	// 7      [7]	1 2 3 4 5 6 10 11 12 13 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01011011, 0b01101100,  0b00100100, 0b10010010, 	// 1 2 4 5 7 11 12 14 15      [1, 2, 4, 5, 9, 10, 12, 13, 7]	3 6 10 13 16      [14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01010010, 0b01001000,  0b00101101, 0b10110110, 	// 2 5 7 12 15      [2, 5, 10, 13, 7]	1 3 4 6 10 11 13 14 16      [1, 4, 9, 12, 14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01001001, 0b00100100,  0b00110110, 0b11011010, 	// 1 4 7 11 14      [1, 4, 9, 12, 7]	2 3 5 6 10 12 13 15 16      [2, 5, 10, 13, 14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_END,

	'�', '�', '8', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01110110, 0b10110110, 	// 2 3 5 6 7 10 11 13 14 16      [2, 3, 5, 6, 8, 9, 11, 12, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b11111110, 	// 7      [7]	1 2 3 4 5 6 10 11 12 13 14 15 16      [2, 3, 5, 6, 8, 9, 11, 12, 14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01110110, 0b00110110,  0b00001001, 0b11001000, 	// 2 3 5 6 7 10 11 13 14      [2, 3, 5, 6, 8, 9, 11, 12, 7]	1 4 12 15 16      [14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00001001, 0b01001000, 
	CMD_SET_16, 0b01010100, 0b00100100,  0b00011011, 0b11011010, 	// 3 5 7 11 14      [3, 5, 9, 12, 7]	1 2 4 5 10 12 13 15 16      [2, 5, 8, 11, 14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00001001, 0b01001000, 
	CMD_SET_16, 0b01010010, 0b00010010,  0b00011101, 0b11101100, 	// 2 5 7 10 13      [2, 5, 8, 11, 7]	1 3 4 5 11 12 14 15 16      [3, 5, 9, 12, 14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00001001, 0b01001000, 
	CMD_END,

	'�', '�', '1', ',', '�', '�', '6', ',', '�', '�', '1', '6', ',', '�', '�', '2', '2', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00011011, 0b11101100, 	// 7      [7]	1 2 4 5 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14]
	CMD_TEST_16, 0b00100000, 0b00000010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01011011, 0b01101100,  0b00000000, 0b10000000, 	// 1 2 4 5 7 11 12 14 15      [1, 2, 4, 5, 9, 10, 12, 13, 7]	16      [14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01000001, 0b00000100,  0b00011010, 0b11101000, 	// 1 7 11      [1, 9, 7]	2 4 5 12 14 15 16      [2, 4, 5, 10, 12, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01000010, 0b00001000,  0b00011001, 0b11100100, 	// 2 7 12      [2, 10, 7]	1 4 5 11 14 15 16      [1, 4, 5, 9, 12, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01001000, 0b00100000,  0b00010011, 0b11001100, 	// 4 7 14      [4, 12, 7]	1 2 5 11 12 15 16      [1, 2, 5, 9, 10, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01010000, 0b01000000,  0b00001011, 0b10101100, 	// 5 7 15      [5, 13, 7]	1 2 4 11 12 14 16      [1, 2, 4, 9, 10, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_END,

	'�', '�', '7', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111011, 0b11101110, 	// 7      [7]	1 2 4 5 6 10 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 6, 8]
	CMD_TEST_16, 0b00100000, 0b00000010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01011011, 0b01101100,  0b00100000, 0b10000010, 	// 1 2 4 5 7 11 12 14 15      [1, 2, 4, 5, 9, 10, 12, 13, 7]	6 10 16      [14, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01000001, 0b00000100,  0b00111010, 0b11101010, 	// 1 7 11      [1, 9, 7]	2 4 5 6 10 12 14 15 16      [2, 4, 5, 10, 12, 13, 14, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01000010, 0b00001000,  0b00111001, 0b11100110, 	// 2 7 12      [2, 10, 7]	1 4 5 6 10 11 14 15 16      [1, 4, 5, 9, 12, 13, 14, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01001000, 0b00100000,  0b00110011, 0b11001110, 	// 4 7 14      [4, 12, 7]	1 2 5 6 10 11 12 15 16      [1, 2, 5, 9, 10, 13, 14, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01010000, 0b01000000,  0b00101011, 0b10101110, 	// 5 7 15      [5, 13, 7]	1 2 4 6 10 11 12 14 16      [1, 2, 4, 9, 10, 12, 14, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00000010, 
	CMD_END,

	'�', '�', '4', ',', '�', '�', '2', '4', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011111, 0b11011100, 	// 1 2 3 4 5 7 11 12 13 15 16      [1, 2, 13, 3, 4, 5, 9, 10, 11, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00011111, 0b11011100, 	// 7      [7]	1 2 3 4 5 11 12 13 15 16      [1, 2, 13, 3, 4, 5, 9, 10, 11, 14]
	CMD_TEST_16, 0b00100000, 0b00100010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01011111, 0b01011100,  0b00000000, 0b10000000, 	// 1 2 3 4 5 7 11 12 13 15      [1, 2, 13, 3, 4, 5, 9, 10, 11, 7]	16      [14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_SET_16, 0b01000101, 0b00000100,  0b00011010, 0b11011000, 	// 1 3 7 11      [1, 3, 9, 7]	2 4 5 12 13 15 16      [2, 13, 4, 5, 10, 11, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_SET_16, 0b01001010, 0b00001000,  0b00010101, 0b11010100, 	// 2 4 7 12      [2, 4, 10, 7]	1 3 5 11 13 15 16      [1, 13, 3, 5, 9, 11, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_SET_16, 0b01010000, 0b01010000,  0b00001111, 0b10001100, 	// 5 7 13 15      [13, 5, 11, 7]	1 2 3 4 11 12 16      [1, 2, 3, 4, 9, 10, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_END,

	'�', '�', '1', '0', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011111, 0b11011100, 	// 1 2 3 4 5 7 11 12 13 15 16      [1, 2, 13, 3, 4, 5, 9, 10, 11, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b11111110, 	// 7      [7]	1 2 3 4 5 6 10 11 12 13 14 15 16      [1, 2, 13, 3, 4, 5, 9, 10, 11, 14, 12, 6, 8]
	CMD_TEST_16, 0b00100000, 0b00100010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01011111, 0b01011100,  0b00100000, 0b10100010, 	// 1 2 3 4 5 7 11 12 13 15      [1, 2, 13, 3, 4, 5, 9, 10, 11, 7]	6 10 14 16      [14, 12, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_SET_16, 0b01000101, 0b00000100,  0b00111010, 0b11111010, 	// 1 3 7 11      [1, 3, 9, 7]	2 4 5 6 10 12 13 14 15 16      [2, 13, 4, 5, 10, 11, 14, 12, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_SET_16, 0b01001010, 0b00001000,  0b00110101, 0b11110110, 	// 2 4 7 12      [2, 4, 10, 7]	1 3 5 6 10 11 13 14 15 16      [1, 13, 3, 5, 9, 11, 14, 12, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_SET_16, 0b01010000, 0b01010000,  0b00101111, 0b10101110, 	// 5 7 13 15      [13, 5, 11, 7]	1 2 3 4 6 10 11 12 14 16      [1, 2, 3, 4, 9, 10, 14, 12, 6, 8]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100000, 0b00100010, 
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01111111, 0b10110000, 	// 1 2 3 4 5 6 7 13 14 16      [1, 2, 3, 4, 5, 6, 11, 12, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b10110000, 	// 7      [7]	1 2 3 4 5 6 13 14 16      [1, 2, 3, 4, 5, 6, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01111111, 0b00110000,  0b00000000, 0b10000000, 	// 1 2 3 4 5 6 7 13 14      [1, 2, 3, 4, 5, 6, 11, 12, 7]	16      [14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01000001, 0b00000000,  0b00111110, 0b10110000, 	// 1 7      [1, 7]	2 3 4 5 6 13 14 16      [2, 3, 4, 5, 6, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01000010, 0b00000000,  0b00111101, 0b10110000, 	// 2 7      [2, 7]	1 3 4 5 6 13 14 16      [1, 3, 4, 5, 6, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01000100, 0b00000000,  0b00111011, 0b10110000, 	// 3 7      [3, 7]	1 2 4 5 6 13 14 16      [1, 2, 4, 5, 6, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01001000, 0b00000000,  0b00110111, 0b10110000, 	// 4 7      [4, 7]	1 2 3 5 6 13 14 16      [1, 2, 3, 5, 6, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01010000, 0b00000000,  0b00101111, 0b10110000, 	// 5 7      [5, 7]	1 2 3 4 6 13 14 16      [1, 2, 3, 4, 6, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01100000, 0b00000000,  0b00011111, 0b10110000, 	// 6 7      [6, 7]	1 2 3 4 5 13 14 16      [1, 2, 3, 4, 5, 11, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01000000, 0b00010000,  0b00111111, 0b10100000, 	// 7 13      [11, 7]	1 2 3 4 5 6 14 16      [1, 2, 3, 4, 5, 6, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_SET_16, 0b01000000, 0b00100000,  0b00111111, 0b10010000, 	// 7 14      [12, 7]	1 2 3 4 5 6 13 16      [1, 2, 3, 4, 5, 6, 11, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00000010, 
	CMD_END,

	'�', '�', '1', '8', 0,
	CMD_RESET,
	CMD_INIT_16, 0b00001011, 0b11100000, 	// 1 2 4 14 15 16      [1, 2, 6, 7, 8, 4]

	CMD_SET_16, 0b00001000, 0b00000000,  0b00000111, 0b11110000, 	// 4      [4]	1 2 3 13 14 15 16      [1, 2, 6, 7, 8, 3, 5]
	CMD_TEST_16, 0b00000100, 0b00010000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b00001011, 0b01100000,  0b00000100, 0b10010000, 	// 1 2 4 14 15      [1, 2, 6, 7, 4]	3 13 16      [8, 3, 5]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000100, 0b00010000, 
	CMD_SET_16, 0b00001010, 0b01000000,  0b00000101, 0b10110000, 	// 2 4 15      [2, 7, 4]	1 3 13 14 16      [1, 6, 8, 3, 5]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000100, 0b00010000, 
	CMD_SET_16, 0b00001001, 0b00100000,  0b00000110, 0b11010000, 	// 1 4 14      [1, 6, 4]	2 3 13 15 16      [2, 7, 8, 3, 5]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000100, 0b00010000, 
	CMD_END,

	'�', '�', '1', ',', '�', '�', '5', ',', '�', '�', '6', ',', '�', '�', '1', '0', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01110110, 0b10110110, 	// 2 3 5 6 7 10 11 13 14 16      [2, 3, 5, 6, 8, 9, 11, 12, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00110110, 0b10110110, 	// 7      [7]	2 3 5 6 10 11 13 14 16      [2, 3, 5, 6, 8, 9, 11, 12, 14]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01110110, 0b00110110,  0b00000000, 0b10000000, 	// 2 3 5 6 7 10 11 13 14      [2, 3, 5, 6, 8, 9, 11, 12, 7]	16      [14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00001001, 0b01001000, 
	CMD_SET_16, 0b01100100, 0b00100100,  0b00010010, 0b10010010, 	// 3 6 7 11 14      [3, 6, 9, 12, 7]	2 5 10 13 16      [2, 5, 8, 11, 14]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01010010, 0b00010010,  0b00100100, 0b10100100, 	// 2 5 7 10 13      [2, 5, 8, 11, 7]	3 6 11 14 16      [3, 6, 9, 12, 14]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_END,

	'�', '�', '1', '1', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01110110, 0b10110110, 	// 2 3 5 6 7 10 11 13 14 16      [2, 3, 5, 6, 8, 9, 11, 12, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b11111110, 	// 7      [7]	1 2 3 4 5 6 10 11 12 13 14 15 16      [2, 3, 5, 6, 8, 9, 11, 12, 14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01110110, 0b00110110,  0b00001001, 0b11001000, 	// 2 3 5 6 7 10 11 13 14      [2, 3, 5, 6, 8, 9, 11, 12, 7]	1 4 12 15 16      [14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00001001, 0b01001000, 
	CMD_SET_16, 0b01100100, 0b00100100,  0b00011011, 0b11011010, 	// 3 6 7 11 14      [3, 6, 9, 12, 7]	1 2 4 5 10 12 13 15 16      [2, 5, 8, 11, 14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01010010, 0b00010010,  0b00101101, 0b11101100, 	// 2 5 7 10 13      [2, 5, 8, 11, 7]	1 3 4 6 11 12 14 15 16      [3, 6, 9, 12, 14, 1, 4, 10, 13]
	CMD_TEST_16, 0b00001001, 0b01001000,  0b00000000, 0b00000000, 
	CMD_END,

	'�', '�', '1', ',', '�', '�', '4', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00011011, 0b11101010, 	// 7      [7]	1 2 4 5 10 12 14 15 16      [1, 2, 4, 5, 8, 10, 12, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01011011, 0b01101010,  0b00000000, 0b10000000, 	// 1 2 4 5 7 10 12 14 15      [1, 2, 4, 5, 8, 10, 12, 13, 7]	16      [14]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01010010, 0b01001000,  0b00001001, 0b10100100, 	// 2 5 7 12 15      [2, 5, 10, 13, 7]	1 4 11 14 16      [1, 4, 9, 12, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01001001, 0b00100100,  0b00010010, 0b11001000, 	// 1 4 7 11 14      [1, 4, 9, 12, 7]	2 5 12 15 16      [2, 5, 10, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_END,

	'�', '�', '1', ',', '�', '�', '8', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00011011, 0b11101100, 	// 7      [7]	1 2 4 5 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01011011, 0b01101100,  0b00000000, 0b10000000, 	// 1 2 4 5 7 11 12 14 15      [1, 2, 4, 5, 9, 10, 12, 13, 7]	16      [14]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01010010, 0b01001000,  0b00001001, 0b10100100, 	// 2 5 7 12 15      [2, 5, 10, 13, 7]	1 4 11 14 16      [1, 4, 9, 12, 14]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01001001, 0b00100100,  0b00010010, 0b11001000, 	// 1 4 7 11 14      [1, 4, 9, 12, 7]	2 5 12 15 16      [2, 5, 10, 13, 14]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01011011, 0b11101100, 	// 1 2 4 5 7 11 12 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 7]

	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b11111110, 	// 7      [7]	1 2 3 4 5 6 10 11 12 13 14 15 16      [1, 2, 4, 5, 9, 10, 12, 13, 14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00100100, 0b00010010, 
	CMD_SET_16, 0b01011011, 0b01101100,  0b00100100, 0b10010010, 	// 1 2 4 5 7 11 12 14 15      [1, 2, 4, 5, 9, 10, 12, 13, 7]	3 6 10 13 16      [14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01010010, 0b01001000,  0b00101101, 0b10110110, 	// 2 5 7 12 15      [2, 5, 10, 13, 7]	1 3 4 6 10 11 13 14 16      [1, 4, 9, 12, 14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01001001, 0b00100100,  0b00110110, 0b11011010, 	// 1 4 7 11 14      [1, 4, 9, 12, 7]	2 3 5 6 10 12 13 15 16      [2, 5, 10, 13, 14, 3, 6, 8, 11]
	CMD_TEST_16, 0b00100100, 0b00010010,  0b00000000, 0b00000000, 
	CMD_END,

	'1', '5', '5', '�', '�', '1', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01111100, 0b00001000, 	// 3 4 5 6 7 12      [3, 6, 7, 4, 5, 12]

	CMD_SET_16, 0b01101100, 0b00001000,  0b00010000, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b10000000,  0b10000011, 0b01110111, 
	CMD_SET_16, 0b01101000, 0b00001000,  0b00010100, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b01000000,  0b10000011, 0b10110111, 
	CMD_SET_16, 0b01001100, 0b00001000,  0b00110000, 0b00000000, 
	CMD_TEST_16, 0b10000000, 0b00000000,  0b00000011, 0b11110111, 
	CMD_SET_16, 0b01001000, 0b00001000,  0b00110100, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b00000001,  0b10000011, 0b11110110, 
	CMD_SET_16, 0b00101100, 0b00001000,  0b01010000, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b00010000,  0b10000011, 0b11100111, 
	CMD_SET_16, 0b00101000, 0b00001000,  0b01010100, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b00100000,  0b10000011, 0b11010111, 
	CMD_SET_16, 0b00001100, 0b00001000,  0b01110000, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b00000100,  0b10000011, 0b11110011, 
	CMD_SET_16, 0b00001000, 0b00001000,  0b01110100, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b00000010,  0b10000011, 0b11110101, 
	CMD_SET_16, 0b01100100, 0b00001000,  0b00011000, 0b00000000, 
	CMD_TEST_16, 0b00000001, 0b00000000,  0b10000010, 0b11110111, 
	CMD_SET_16, 0b01100000, 0b00001000,  0b00011100, 0b00000000, 
	CMD_TEST_16, 0b00000010, 0b00000000,  0b10000001, 0b11110111, 
	CMD_END,

	'�', '�', '4', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10000111, 0b11110000, 	// 1 2 3 8 13 14 15 16      [1, 2, 13, 3, 15, 14, 16, 8]

	CMD_SET_16, 0b10000000, 0b00000000,  0b00000111, 0b11110000, 
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01111000, 0b00001111, 
	CMD_SET_16, 0b10000110, 0b01110000,  0b00000001, 0b10000000, 
	CMD_TEST_16, 0b01000000, 0b00000001,  0b00111000, 0b00001110, 
	CMD_SET_16, 0b10000110, 0b01100000,  0b00000001, 0b10010000, 
	CMD_TEST_16, 0b00100000, 0b00000010,  0b01011000, 0b00001101, 
	CMD_SET_16, 0b10000010, 0b01110000,  0b00000101, 0b10000000, 
	CMD_TEST_16, 0b00010000, 0b00000100,  0b01101000, 0b00001011, 
	CMD_SET_16, 0b10000010, 0b01100000,  0b00000101, 0b10010000, 
	CMD_TEST_16, 0b00001000, 0b00001000,  0b01110000, 0b00000111, 
	CMD_SET_16, 0b10000101, 0b01110000,  0b00000010, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000001,  0b01111000, 0b00001110, 
	CMD_SET_16, 0b10000100, 0b01110000,  0b00000011, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000001,  0b01111000, 0b00001110, 
	CMD_SET_16, 0b10000110, 0b01010000,  0b00000001, 0b10100000, 
	CMD_TEST_16, 0b01000000, 0b00000000,  0b00111000, 0b00001111, 
	CMD_SET_16, 0b10000110, 0b00110000,  0b00000001, 0b11000000, 
	CMD_TEST_16, 0b01000000, 0b00000000,  0b00111000, 0b00001111, 
	CMD_END,

	'�', '�', '7', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10111111, 0b10000000, 	// 1 2 3 4 5 6 8 16      [1, 2, 3, 4, 5, 6, 16, 8]

	CMD_SET_16, 0b10011111, 0b00000000,  0b00100000, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b01000000,  0b01000000, 0b00111111, 
	CMD_SET_16, 0b10011110, 0b00000000,  0b00100001, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00100000,  0b01000000, 0b01011111, 
	CMD_SET_16, 0b10011101, 0b00000000,  0b00100010, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00010000,  0b01000000, 0b01101111, 
	CMD_SET_16, 0b10011100, 0b00000000,  0b00100011, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00001000,  0b01000000, 0b01110111, 
	CMD_SET_16, 0b10011011, 0b00000000,  0b00100100, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000100,  0b01000000, 0b01111011, 
	CMD_SET_16, 0b10011010, 0b00000000,  0b00100101, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000010,  0b01000000, 0b01111101, 
	CMD_SET_16, 0b10011001, 0b00000000,  0b00100110, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000001,  0b01000000, 0b01111110, 
	CMD_SET_16, 0b10011000, 0b00000000,  0b00100111, 0b10000000, 
	CMD_TEST_16, 0b01000000, 0b00000000,  0b00000000, 0b01111111, 
	CMD_SET_16, 0b10010100, 0b00000000,  0b00101011, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01000000, 0b01111111, 
	CMD_SET_16, 0b10001100, 0b00000000,  0b00110011, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01000000, 0b01111111, 
	CMD_SET_16, 0b10111100, 0b00000000,  0b00000011, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01000000, 0b01111111, 
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01001111, 0b11111000, 	// 1 2 3 4 7 12 13 14 15 16      [4, 2, 3, 1, 10, 12, 11, 13, 14, 7]

	CMD_SET_16, 0b01001110, 0b00111000,  0b00000001, 0b11000000, 
	CMD_TEST_16, 0b00100000, 0b00000010,  0b00010000, 0b00000100, 
	CMD_SET_16, 0b01001000, 0b00001000,  0b00000111, 0b11110000, 
	CMD_TEST_16, 0b00100000, 0b00000010,  0b00010000, 0b00000100, 
	CMD_SET_16, 0b01000111, 0b01110000,  0b00001000, 0b10001000, 
	CMD_TEST_16, 0b00010000, 0b00000100,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01000001, 0b01000000,  0b00001110, 0b10111000, 
	CMD_TEST_16, 0b00010000, 0b00000100,  0b00100000, 0b00000010, 
	CMD_SET_16, 0b01000100, 0b00010000,  0b00001011, 0b11101000, 	// 3 7 13      [3, 11, 7]	1 2 4 12 14 15 16      [4, 2, 1, 10, 12, 13, 14]
	CMD_PULSE_PLUS, 3,
	CMD_TEST_16, 0b00100000, 0b00000100,  0b00010000, 0b00000010, 
	CMD_PULSE_PLUS, 25,
	CMD_TEST_16, 0b00100000, 0b00000010,  0b00010000, 0b00000100, 
	CMD_SET_16, 0b01000010, 0b00100000,  0b00000000, 0b10000000, 	// 2 7 14      [2, 12, 7]	16      [14]
	CMD_PULSE_PLUS, 3,
	CMD_TEST_16, 0b00010000, 0b00000010,  0b00100000, 0b00000100, 
	CMD_PULSE_PLUS, 25,
	CMD_TEST_16, 0b00010000, 0b00000100,  0b00100000, 0b00000010, 
	CMD_END,

	'�', '�', '9', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01010101, 0b11010100, 	// 1 3 5 7 11 13 15 16      [1, 3, 5, 9, 11, 13, 14, 7]

	CMD_SET_16, 0b01010101, 0b01010100,  0b00101010, 0b10101010, 
	CMD_TEST_16, 0b00101010, 0b00101010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b01000000, 0b00000000,  0b00111111, 0b11111110, 
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00101010, 0b00101010, 
	CMD_SET_16, 0b01010001, 0b00010000,  0b00101110, 0b11101110, 
	CMD_TEST_16, 0b00100010, 0b00001000,  0b00001000, 0b00100010, 
	CMD_SET_16, 0b01000100, 0b01000100,  0b00111011, 0b10111010, 
	CMD_TEST_16, 0b00001000, 0b00100010,  0b00100010, 0b00001000, 
	CMD_END,

	'�', '�', '8', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10011001, 0b10011001, 	// 1 4 5 8 9 12 13 16      [4, 5, 12, 13, 9, 1, 16, 8]

	CMD_SET_16, 0b10011001, 0b00011001,  0b00000000, 0b10000000, 
	CMD_TEST_16, 0b01000010, 0b01000010,  0b00100100, 0b00100100, 
	CMD_SET_16, 0b10000000, 0b00000000,  0b00000001, 0b10000000, 	// 8      [8]	1 16      [1, 16]
	CMD_TEST_16, 0b01000010, 0b01000010,  0b00100100, 0b00100100, 
	CMD_SET_16, 0b10000000, 0b00000001,  0b00011001, 0b10011000, 	// 8 9      [9, 8]	1 4 5 12 13 16      [4, 5, 12, 13, 1, 16]
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, 0b00100100, 0b00100100,  0b01000010, 0b01000010, 
	CMD_SET_16, 0b10011000, 0b00011001,  0b00000001, 0b10000000, 	// 4 5 8 9 12 13      [4, 5, 12, 13, 9, 8]	1 16      [1, 16]
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, 0b01000010, 0b01000010,  0b00100100, 0b00100100, 
	CMD_END,

	'�', '�', '9', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10101101, 0b10110101, 	// 1 3 4 6 8 9 11 13 14 16      [3, 4, 6, 11, 13, 14, 9, 1, 16, 8]

	CMD_SET_16, 0b10000000, 0b00000001,  0b00101101, 0b10110100, 
	CMD_TEST_16, 0b01010010, 0b01001010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b10101100, 0b00110101,  0b00000001, 0b10000000, 
	CMD_TEST_16, 0b01010010, 0b01001010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b10000000, 0b00000000,  0b00000001, 0b10000000, 	// 8      [8]	1 16      [1, 16]
	CMD_TEST_16, 0b01010010, 0b01001010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b10000000, 0b00000001,  0b00101101, 0b10110100, 	// 8 9      [9, 8]	1 3 4 6 11 13 14 16      [3, 4, 6, 11, 13, 14, 1, 16]
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01010010, 0b01001010, 
	CMD_SET_16, 0b10101100, 0b00110101,  0b00000001, 0b10000000, 	// 3 4 6 8 9 11 13 14      [3, 4, 6, 11, 13, 14, 9, 8]	1 16      [1, 16]
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, 0b01010010, 0b01001010,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b10100100, 0b00010001,  0b00001001, 0b10100100, 	// 3 6 8 9 13      [3, 6, 13, 9, 8]	1 4 11 14 16      [4, 11, 14, 1, 16]
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, 0b01000010, 0b00001000,  0b00010000, 0b01000010, 
	CMD_END,

	'1', '5', '5', '�', '�', '1', '1', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10101011, 0b11101010, 	// 1 2 4 6 8 10 12 14 15 16      [2, 4, 6, 10, 1, 12, 14, 15, 16, 8]

	CMD_SET_16, 0b10101011, 0b01000010,  0b00000000, 0b10101000, 
	CMD_TEST_16, 0b01010100, 0b00000001,  0b00000000, 0b00010100, 
	CMD_SET_16, 0b10000001, 0b01101000,  0b00101010, 0b10000010, 
	CMD_TEST_16, 0b00000000, 0b00010100,  0b01010100, 0b00000001, 
	CMD_SET_16, 0b10001001, 0b01100010,  0b00100010, 0b10001000, 
	CMD_TEST_16, 0b00010000, 0b00010001,  0b01000100, 0b00000100, 
	CMD_SET_16, 0b10100011, 0b01001000,  0b00001000, 0b10100010, 
	CMD_TEST_16, 0b01000100, 0b00000100,  0b00010000, 0b00010001, 
	CMD_END,

	'�', '�', '2', '3', 0,
	CMD_RESET,
	CMD_INIT_24, 0b11001101, 0b01000010, 0b10110011, 	// 1 3 4 7 8 10 15 17 18 21 22 24      [3, 4, 7, 8, 13, 14, 17, 18, 11, 1, 20, 10]

	CMD_SET_24, 0b11001101, 0b01000010, 0b00110011,  0b00000000, 0b00000000, 0b10000000, 	// 1 3 4 7 8 10 15 17 18 21 22      [3, 4, 7, 8, 13, 14, 17, 18, 11, 1, 10]	24      [20]
	CMD_PULSE_PLUS, 19,
	CMD_TEST_24, 0b00110010, 0b10000001, 0b01001100,  0b00000000, 0b00000000, 0b00000000, 
	CMD_SET_24, 0b00000001, 0b01000010, 0b00000000,  0b11001100, 0b00000000, 0b10110011, 	// 1 10 15      [11, 1, 10]	3 4 7 8 17 18 21 22 24      [3, 4, 7, 8, 13, 14, 17, 18, 20]
	CMD_PULSE_PLUS, 19,
	CMD_TEST_24, 0b00000000, 0b00000000, 0b00000000,  0b00110010, 0b10000001, 0b01001100, 
	CMD_SET_24, 0b10001001, 0b01000010, 0b00100010,  0b01000100, 0b00000000, 0b10010001, 	// 1 4 8 10 15 18 22      [4, 8, 14, 18, 11, 1, 10]	3 7 17 21 24      [3, 7, 13, 17, 20]
	CMD_PULSE_PLUS, 19,
	CMD_TEST_24, 0b00010000, 0b00000001, 0b01000100,  0b00100010, 0b10000000, 0b00001000, 
	CMD_SET_24, 0b01000101, 0b01000010, 0b00010001,  0b10001000, 0b00000000, 0b10100010, 	// 1 3 7 10 15 17 21      [3, 7, 13, 17, 11, 1, 10]	4 8 18 22 24      [4, 8, 14, 18, 20]
	CMD_PULSE_PLUS, 19,
	CMD_TEST_24, 0b00100010, 0b10000000, 0b00001000,  0b00010000, 0b00000001, 0b01000100, 
	CMD_END,

	'�', '�', '9', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10001111, 0b11111110, 	// 1 2 3 4 8 10 11 12 13 14 15 16      [4, 3, 1, 2, 15, 10, 11, 13, 12, 14, 16, 8]

	CMD_SET_16, 0b10000010, 0b01101000,  0b00001101, 0b10010110, 
	CMD_TEST_16, 0b00010000, 0b00000001,  0b01100000, 0b00000000, 
	CMD_SET_16, 0b10000000, 0b00000000,  0b00000000, 0b11100000, 	// 8      [8]	14 15 16      [15, 14, 16]
	CMD_TEST_16, 0b00010000, 0b00000001,  0b01100000, 0b00000000, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00100000, 0b00000001,  0b01010000, 0b00000000, 
	CMD_PULSE_MINUS, 25,
	CMD_TEST_16, 0b01100000, 0b00000000,  0b00010000, 0b00000001, 
	CMD_SET_16, 0b10000100, 0b00000100,  0b00000011, 0b10011000, 	// 3 8 11      [3, 11, 8]	1 2 12 13 16      [1, 13, 2, 12, 16]
	CMD_TEST_16, 0b01100000, 0b00000000,  0b00010000, 0b00000001, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b01010000, 0b00000000,  0b00100000, 0b00000001, 
	CMD_PULSE_MINUS, 25,
	CMD_TEST_16, 0b00010000, 0b00000001,  0b01100000, 0b00000000, 
	CMD_SET_16, 0b10001000, 0b00000010,  0b00000000, 0b10000000, 	// 4 8 10      [4, 10, 8]	16      [16]
	CMD_TEST_16, 0b01100000, 0b00000000,  0b00010000, 0b00000001, 
	CMD_SET_16, 0b10000000, 0b00000000,  0b00001111, 0b10011110, 	// 8      [8]	1 2 3 4 10 11 12 13 16      [3, 2, 11, 12, 1, 13, 4, 10, 16]
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b01010000, 0b00000000,  0b00100000, 0b00000001, 
	CMD_PULSE_MINUS, 25,
	CMD_TEST_16, 0b00010000, 0b00000001,  0b01100000, 0b00000000, 
	CMD_END,

	'�', '�', '5', 0,
	CMD_RESET,
	CMD_INIT_16, 0b00010111, 0b10001000, 	// 1 2 3 5 12 16      [14, 1, 2, 3, 5, 10]

	CMD_SET_16, 0b00000000, 0b00001000,  0b00010111, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00110110,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b00000110, 0b00001000,  0b00010001, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00110110,  0b00000000, 0b00000000, 
	CMD_PULSE_MINUS, 28,
	CMD_TEST_16, 0b00000000, 0b00010110,  0b00000000, 0b00100000, 
	CMD_PULSE_MINUS, 28,
	CMD_TEST_16, 0b00000000, 0b00110110,  0b00000000, 0b00000000, 
	CMD_PULSE_MINUS, 28,
	CMD_TEST_16, 0b00000000, 0b00010110,  0b00000000, 0b00100000, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010010,  0b00000000, 0b00100100, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010100,  0b00000000, 0b00100010, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010000,  0b00000000, 0b00100110, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00000110,  0b00000000, 0b00110000, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00000010,  0b00000000, 0b00110100, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00000100,  0b00000000, 0b00110010, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00000000,  0b00000000, 0b00110110, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010110,  0b00000000, 0b00100000, 
	CMD_END,

	'�', '�', '7', 0,
	CMD_RESET,
	CMD_INIT_16, 0b10011001, 0b11100111, 	// 1 4 5 8 9 10 11 14 15 16      [15, 1, 10, 9, 11, 5, 4, 14, 16, 8]

	CMD_SET_16, 0b10000000, 0b00000000,  0b00000000, 0b10100000, 	// 8      [8]	14 16      [14, 16]
	CMD_TEST_16, 0b01100110, 0b00000000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b10011000, 0b00100100,  0b00000001, 0b11000011, 	// 4 5 8 11 14      [11, 5, 4, 14, 8]	1 9 10 15 16      [15, 1, 10, 9, 16]
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01100110, 0b00000000, 
	CMD_SET_16, 0b10000001, 0b01100111,  0b00011000, 0b10000000, 	// 1 8 9 10 11 14 15      [15, 1, 10, 9, 11, 14, 8]	4 5 16      [5, 4, 16]
	CMD_TEST_16, 0b01100110, 0b00000000,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b10000000, 0b00000000,  0b00000000, 0b10000100, 	// 8      [8]	11 16      [11, 16]
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01100010, 0b00000000,  0b00000100, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01100100, 0b00000000,  0b00000010, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01100000, 0b00000000,  0b00000110, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01000110, 0b00000000,  0b00100000, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01000010, 0b00000000,  0b00100100, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01000100, 0b00000000,  0b00100010, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01000000, 0b00000000,  0b00100110, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00100110, 0b00000000,  0b01000000, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00100010, 0b00000000,  0b01000100, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00100100, 0b00000000,  0b01000010, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00100000, 0b00000000,  0b01000110, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00000110, 0b00000000,  0b01100000, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00000010, 0b00000000,  0b01100100, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00000100, 0b00000000,  0b01100010, 0b00011000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01100110, 0b00011000, 
	CMD_PULSE_MINUS, 5,
	CMD_TEST_16, 0b00000000, 0b00001000,  0b01100110, 0b00010000, 
	CMD_PULSE_PLUS, 5,
	CMD_TEST_16, 0b01100110, 0b00000000,  0b00000000, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01100110, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00000100, 0b00000000,  0b01100010, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00000010, 0b00000000,  0b01100100, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00000110, 0b00000000,  0b01100000, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00100000, 0b00000000,  0b01000110, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00100100, 0b00000000,  0b01000010, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00100010, 0b00000000,  0b01000100, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00100110, 0b00000000,  0b01000000, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01000000, 0b00000000,  0b00100110, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01000100, 0b00000000,  0b00100010, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01000010, 0b00000000,  0b00100100, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01000110, 0b00000000,  0b00100000, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01100000, 0b00000000,  0b00000110, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01100100, 0b00000000,  0b00000010, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01100010, 0b00000000,  0b00000100, 0b00011000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b01100110, 0b00000000,  0b00000000, 0b00011000, 
	CMD_PULSE_MINUS, 4,
	CMD_TEST_16, 0b01100110, 0b00010000,  0b00000000, 0b00001000, 
	CMD_PULSE_PLUS, 4,
	CMD_TEST_16, 0b00000000, 0b00000000,  0b01100110, 0b00011000, 
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, 0b01110111, 0b10001000, 	// 1 2 3 5 6 7 12 16      [6, 7, 14, 1, 2, 3, 5, 10]

	CMD_SET_16, 0b00000111, 0b10001000,  0b01110000, 0b00000000, 
	CMD_TEST_16, 0b00000000, 0b00000110,  0b00000000, 0b00110000, 
	CMD_SET_16, 0b01100000, 0b00001000,  0b00010111, 0b10000000, 
	CMD_TEST_16, 0b00000000, 0b00110110,  0b00000000, 0b00000000, 
	CMD_SET_16, 0b00000110, 0b00001000,  0b00010000, 0b00000000, 	// 2 3 12      [2, 3, 10]	5      [5]
	CMD_PULSE_MINUS, 28,
	CMD_TEST_16, 0b00000000, 0b00010110,  0b00000000, 0b00100000, 
	CMD_PULSE_MINUS, 28,
	CMD_TEST_16, 0b00000000, 0b00110110,  0b00000000, 0b00000000, 
	CMD_PULSE_MINUS, 28,
	CMD_TEST_16, 0b00000000, 0b00010110,  0b00000000, 0b00100000, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010010,  0b00000000, 0b00100100, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010100,  0b00000000, 0b00100010, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010000,  0b00000000, 0b00100110, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00000110,  0b00000000, 0b00110000, 
	CMD_PULSE_MINUS, 1,
	CMD_TEST_16, 0b00000000, 0b00010110,  0b00000000, 0b00100000, 
	CMD_END,

	CMD_END
};
