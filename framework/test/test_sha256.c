/*
 * test_sha256.c
 *
 *  Created on: May 21, 2013
 *      Author: thomas
 */

#include "hash/hashing.h"
#include "types.h"

int main(void) {
	byte var_res[16];
	bigint_t var_res_bi;

#if PRECISION == 256
	{
		static fp12_t var_a =  {  {  { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} } ,
	 { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} }  } ,
	 {  { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} } ,
	 { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} }  } ,
	 {  { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} } ,
	 { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} }  }  } ;
		static const byte var_expected[] = {0xA1, 0xA4, 0xF5, 0x72, 0x1C, 0x1C, 0x46, 0x10, 0xAF, 0x7F, 0x71, 0x07, 0x8F, 0x3A, 0x68, 0xC3};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 1 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x50CA90CA, 0x08EBC8AB, 0x1B3C7E1B, 0x11F4098C, 0x07D7C6F6, 0x703609F1, 0x5C1CAE3A, 0x30E9521C},
	{0xA6363A0F, 0x68BC3D18, 0x768A8DD1, 0x167027F5, 0xE55F86FF, 0x795E2E4C, 0x47B40BA0, 0x63BA1898} } ,
	 { {0x872C5885, 0x6583409B, 0xF273E558, 0xEA898027, 0xCB9D77E5, 0x6B100677, 0x8D122553, 0x08E3CC50},
	{0xD3FC4880, 0x770FC4FE, 0xAD2F4C31, 0x15CF6F6F, 0xFCE08D37, 0x69F00A3C, 0xF2D293DB, 0x36760594} }  } ,
	 {  { {0x0C97C6D1, 0x87F24FDF, 0xE4902C64, 0x49590DF6, 0x368251F7, 0xD97DED82, 0x4166B507, 0xA96CE6D6},
	{0xCF1BC747, 0x7BD13BFB, 0x6D3B2A34, 0xE7040328, 0x33E32064, 0xD8C5DA77, 0xC50853F4, 0x3A7D61E9} } ,
	 { {0x48C96B66, 0xA63E118A, 0x5F3FB544, 0xE051F17F, 0xCD6ABE6F, 0xADC570B7, 0x11514B07, 0x04994CFB},
	{0xC1CB85DA, 0x53092571, 0x6D16B6BE, 0xCEDFE5EF, 0xDA399C78, 0x5ADCC483, 0x39A546A5, 0x42F817F2} }  } ,
	 {  { {0x6F7ABA42, 0x379D5EC9, 0x5FD71F83, 0xF00017FB, 0xA429C233, 0x0632DE66, 0xD711ECF9, 0x2E4F8329},
	{0x226EB4A9, 0x0A514F0B, 0x47FC730E, 0xE37BDC15, 0x2235ACC8, 0xA5E02BC5, 0x073EEA18, 0x36173AE9} } ,
	 { {0x315EE801, 0xEE2DA35E, 0x7A1DD9FE, 0xD2F509D8, 0x6A3E1CD4, 0x501FDE65, 0x2BC1BF03, 0x0B9ECDBE},
	{0xFE12989F, 0xFB2EFC21, 0x09866929, 0xF9037080, 0x316F2CA3, 0xC8D4D425, 0x676F413A, 0x22B9E39E} }  }  } ;
		static const byte var_expected[] = {0x06, 0xC5, 0x8C, 0x99, 0x9D, 0xF9, 0x14, 0x3C, 0x4E, 0x77, 0x25, 0x49, 0xD5, 0x3D, 0x0B, 0xC0};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 2 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x0444EA31, 0xBFE3D6BE, 0xD4A12BA0, 0x70F9929C, 0x5A3444A5, 0x2091F8AE, 0xE69C30E4, 0xA608DF9E},
	{0x2866C773, 0xBAA051DB, 0x4E60F3C6, 0x71489CB7, 0xBB95E61C, 0x078A4987, 0xD3C286D2, 0x3F15089B} } ,
	 { {0xF0359C5F, 0xE2900627, 0x07296F68, 0x66217AD1, 0xA6F7A17D, 0x6E586BC0, 0x61403009, 0x347350D7},
	{0x50E638B1, 0x1CC551B7, 0x218418BA, 0xD834C02E, 0x620E98AD, 0xE50B7907, 0xC4A25BD8, 0x49283097} }  } ,
	 {  { {0xEDFBA59C, 0xC944033E, 0xB6CE234A, 0x1D93AFC8, 0x0B4AA23C, 0x50AD8074, 0xF5EAC083, 0x4010F298},
	{0x6820B455, 0x361A4813, 0xC93EA4DD, 0xFAB1B08A, 0x06E916A4, 0x27517036, 0xF30965CC, 0x3D98C126} } ,
	 { {0x0F701F9E, 0x2A4BE031, 0x4EDD0841, 0x01A4DDF9, 0x8AF63B0A, 0x2FBA9B6F, 0x7DD29984, 0x666B8726},
	{0xA1BF319D, 0x5CCDDF37, 0xD1C1E3BA, 0xE47532AC, 0xC8EFD042, 0xD38BAB72, 0x5813509E, 0x59847B98} }  } ,
	 {  { {0xDEBB1688, 0xFA6A0DA5, 0xCDDFE6A3, 0x98BAF8AB, 0xBCC3D4F3, 0xB54CD481, 0x8FDC13B0, 0x1044AD3C},
	{0x6B9D5FA5, 0x250B6E59, 0x00B3E79A, 0xE4D3878C, 0x0AB72E3A, 0x2D795B3C, 0x2D8A1A1C, 0x1955C770} } ,
	 { {0x4F418B5F, 0x6FDC47EC, 0xEF83C648, 0xE47818B0, 0x76F49D10, 0xC5055518, 0xC5C03624, 0x15CA8FE4},
	{0x78D1483A, 0x634F707F, 0x61BC49AB, 0x878C1299, 0x6CADDAC1, 0xBBB19E24, 0xEB799F04, 0x3B8CDD59} }  }  } ;
		static const byte var_expected[] = {0xD1, 0x70, 0x4C, 0xDC, 0xA7, 0xFA, 0x94, 0x59, 0xED, 0x51, 0x21, 0x54, 0x17, 0xEA, 0x90, 0x2B};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 3 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0xD2D10216, 0xFEF1E46D, 0x0BD38064, 0xFE33229D, 0x25E800AE, 0x86C8A724, 0x7902002D, 0x1805BE89},
	{0x5694ECC2, 0x2FC6B4D7, 0x66A496D8, 0x878B5CDA, 0x7B49631C, 0x469951D2, 0x0B9F8AED, 0x00811FE4} } ,
	 { {0x3B95CC00, 0x5B132FE4, 0x331F02B7, 0x7914CAAD, 0x7196CC4D, 0x56EF055B, 0x03180157, 0x2A0C883E},
	{0xFB0603BB, 0xDA58690B, 0x44BD9A30, 0x150096D7, 0x01A36C87, 0xC92DA5C6, 0x0574E28A, 0x1B7F6103} }  } ,
	 {  { {0xDA4ADE85, 0x795D14B3, 0x0D2DE6CA, 0x02A0657F, 0x9D386512, 0xDAB18A3E, 0x7C63295A, 0x286E7A05},
	{0xD8550763, 0xFA4D7FB1, 0xC31D5155, 0x81D211DA, 0x5F17FCAB, 0x8A7C6160, 0x14250AF5, 0x09346B41} } ,
	 { {0x7E455A5C, 0x91FC3A0E, 0xDCD761E3, 0x6075B328, 0x804F0994, 0xFF7EA227, 0xBEC2A048, 0xBA0149B6},
	{0xDADC6F51, 0x66A30351, 0x4131C389, 0x30743707, 0x8C5945BD, 0x18E8EEB6, 0x2F206842, 0x117F7627} }  } ,
	 {  { {0xF83C8A13, 0x162EF1D2, 0xC971BD3D, 0xC16EEC54, 0xDD46A285, 0xEAC75B40, 0x6097D611, 0x3E088B39},
	{0xF0D9DFFE, 0x3310BEBC, 0x0A26D5FA, 0xEFF93D9D, 0x6C0A9211, 0x3701C9A4, 0x1022B2A4, 0x328FEB39} } ,
	 { {0x7D7FE175, 0xBD843310, 0xB8D12E9C, 0xC9815B8B, 0xAF625B04, 0xF4B019FE, 0xFD79C0A6, 0x7F12E88C},
	{0x1283A328, 0xB259F179, 0x4E822D36, 0xF3E34079, 0xC5CDE049, 0xE1D670E6, 0x2FC7125B, 0x1DB77DC8} }  }  } ;
		static const byte var_expected[] = {0x68, 0x9C, 0x11, 0x70, 0xAA, 0x98, 0xB1, 0x9D, 0x2E, 0xBC, 0x4E, 0xE3, 0x92, 0x77, 0x3B, 0xD5};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 4 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x397D9965, 0x7BD00377, 0xD6ABFD87, 0xEDECD50B, 0x3CDB3975, 0xCE0129E0, 0xEEAF4368, 0x2C167141},
	{0xB0638436, 0x7BE612FC, 0xD5CA0D38, 0x87AFC35A, 0xFAC63B09, 0x5FBDD7B9, 0xC6992159, 0x4DE9A83D} } ,
	 { {0x208AD1FF, 0x85C4B024, 0xE1CF41D4, 0x2EBC8B80, 0x59C45487, 0x593591C3, 0xCAF3B873, 0x1C0D08A0},
	{0xB66C91AA, 0x630EF343, 0x021D42F0, 0x12A7E981, 0x03B32929, 0x3CA842CD, 0xCEAB8FED, 0x0D886CD1} }  } ,
	 {  { {0x011544D9, 0x519CBCC7, 0x02628DC1, 0xB73E577B, 0xC6B15CC1, 0xBAE9FEAB, 0x2C694E9A, 0xAC5DD839},
	{0x77E20FEA, 0x7F15BCA6, 0xF110E36D, 0x75023259, 0x155FA0A1, 0x3A55E012, 0x40B9640D, 0x149D047F} } ,
	 { {0xEFE2D8C0, 0x935AB384, 0xA1E2D79B, 0xF7E8A879, 0x86A9C20A, 0x5690466A, 0xEC4B56D6, 0x78BFD783},
	{0x26BBBA9E, 0x24C0519F, 0x2A6BC6FA, 0xBD762C6B, 0x523011F8, 0x5D1D1A87, 0x1540C37D, 0x9D56D903} }  } ,
	 {  { {0x3A1FA7BA, 0x40192BD5, 0x68BE8D2B, 0x9A245BD7, 0xD933B921, 0xD2BDFFEE, 0x24807DD9, 0x5E0BFD2E},
	{0x31DB2A45, 0xE79195FF, 0x7824D06F, 0x3616A4EF, 0x1B160524, 0xEBA4A549, 0x852E3D06, 0x27EC5E1B} } ,
	 { {0x736B9BFF, 0x8D597867, 0x3FDEA3C9, 0x8C201A5E, 0x3F6B99D3, 0x127A94BA, 0x2B22C6D5, 0x7B0BCB3B},
	{0x4C252F95, 0x9C1D5554, 0xE3F9E7C1, 0x6D2031D2, 0x109A13E9, 0x682B2E22, 0x0A7390C8, 0x6F6E2A4B} }  }  } ;
		static const byte var_expected[] = {0xC9, 0x1F, 0x7F, 0xA7, 0x55, 0x6C, 0xBE, 0xB6, 0xB5, 0x76, 0x79, 0x56, 0x35, 0x7A, 0x37, 0x41};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 5 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x6CEFC172, 0xEF531694, 0x4F37AFDF, 0xFCA05FBE, 0x7B0CAC58, 0x3D90C4AF, 0x9C1646BA, 0x2C4B2F46},
	{0x668A48F0, 0x59556C61, 0xB3FC72F7, 0x31D2DEC0, 0x12F0BDDC, 0x99DBF1C1, 0x5D8CA740, 0x7097DA1D} } ,
	 { {0x3469343D, 0x1C48C33D, 0x025B00DD, 0x56CF027F, 0x8C865674, 0xB7DE9CCD, 0x4F9AA95C, 0x0EE7B4C6},
	{0xB1194AA7, 0x72DA1B2B, 0x732251AF, 0x8C35E56F, 0x42062ED9, 0x841B53E7, 0x7719DE85, 0x699AD429} }  } ,
	 {  { {0xBC1177E6, 0x09DEC67F, 0x2C8FE4A2, 0x33F8AF8F, 0x60282285, 0x2947862A, 0x1EB39D1F, 0x43486C84},
	{0x3BE3E88D, 0x7F5F0990, 0x175C7F5B, 0xBBDFC9DF, 0xAEB35028, 0x737C015C, 0x504AAD7D, 0x1DE035BE} } ,
	 { {0xB985B858, 0xE820285A, 0x34B521E1, 0xBCB5FCEF, 0x749C629C, 0x6BDEF224, 0x205C272D, 0x185CE1BF},
	{0xDDEAA864, 0x509EAF43, 0x24827AC8, 0x821BA3B0, 0xF32E099F, 0xDBEA4069, 0x230CC536, 0x75395465} }  } ,
	 {  { {0x75F763EB, 0x328AF8AF, 0xF0B38E14, 0xCEF94EE8, 0x393EA265, 0xB41BB8D5, 0xF0BEFBFA, 0x008074EF},
	{0x5F72DF03, 0xFE5BEDCD, 0x672C0E0A, 0x75044B56, 0xF5504345, 0x903EBBC3, 0xE760836B, 0x42EABF62} } ,
	 { {0x8BCEB79B, 0x99525586, 0x1C0D48D1, 0x27E8D1C4, 0x00727340, 0x57CD44DF, 0x6793FD45, 0x81882F95},
	{0x57CFEC2D, 0xDC048F4A, 0x3CFA1CA7, 0xB60B2C2F, 0x29729B1D, 0x934A7DE4, 0xD527E25A, 0x7B3E8725} }  }  } ;
		static const byte var_expected[] = {0x42, 0xD3, 0x7F, 0xB5, 0x34, 0x9D, 0xE5, 0x35, 0xBA, 0xEA, 0x45, 0x0E, 0xD5, 0x52, 0xF5, 0xD8};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 6 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x2323D470, 0x14C1F2D7, 0xE367D620, 0x36A1D4A4, 0x0D687DCC, 0x06BF68F7, 0xDCE4A34D, 0x4A5A4ABB},
	{0x34988B04, 0x8056F757, 0x6EC6D4BC, 0x8F6DFD15, 0xF013E53B, 0x284D7E63, 0x2811C33A, 0x9BF7FBAF} } ,
	 { {0x31B5BF2F, 0xD6BF5D05, 0x0247F1FD, 0xFDCE36B4, 0x37F0ED9B, 0xA333068A, 0xEAEF9338, 0x319E2BD2},
	{0xA8E17C18, 0xBF9D37BA, 0x05B0A392, 0x9013A234, 0xECD1CA4F, 0xD59F45DC, 0x574DA8B6, 0x613007C9} }  } ,
	 {  { {0x871ECD59, 0x56815279, 0xA3415E16, 0xAA1FA89C, 0x3E19B1C7, 0x5150623F, 0x291B2E27, 0x9529CC85},
	{0x4121EFD2, 0xAF18485B, 0x7632F250, 0x7052C206, 0xA98F3F78, 0x62A6CBE0, 0xDBFEF98C, 0x0F1913FE} } ,
	 { {0x340FDD7C, 0x49BF0283, 0x2E0B0BF3, 0xA826849F, 0x2224488B, 0x76CD1910, 0x72A50DF0, 0x11E32800},
	{0x572048DB, 0xA1ECAFA9, 0xC60C9E3A, 0x781482BD, 0x45F40ECD, 0xC9037974, 0x7061B22A, 0x112A83EE} }  } ,
	 {  { {0x8B5D1088, 0xA20A86A7, 0x4D034DDF, 0xA62C96B9, 0x25947AD9, 0xB8462CC3, 0xDF356F21, 0x83926943},
	{0x3446F5E3, 0x2E2A4C7A, 0x4223E101, 0xBAF43543, 0x24A33DBB, 0x5A20B0BA, 0x8B2B77C4, 0xB52EAE71} } ,
	 { {0x1C161EF1, 0x981BFE6F, 0xE8C5245F, 0x90FF707F, 0xC83E6BBF, 0xFA8A7B45, 0xC76B5B69, 0x08B15B9B},
	{0xED6D8744, 0x296911A8, 0xC7BD3192, 0xD7C39D83, 0x3C231347, 0x96438208, 0xE84C159C, 0x72DA1933} }  }  } ;
		static const byte var_expected[] = {0xDC, 0x82, 0xC4, 0xDE, 0xD2, 0x6E, 0xA2, 0xDD, 0xD4, 0x5B, 0x42, 0x38, 0x1F, 0x2B, 0x58, 0x1C};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 7 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x565F1880, 0xA032E598, 0x5543A6B6, 0x7FB0AE5E, 0x78788842, 0x678C61B4, 0x854FB974, 0x4324A2E1},
	{0x7113D5DC, 0xA972EC60, 0x9EC08E87, 0x9BFD1DEE, 0x6D83F3E2, 0x43FFEEB3, 0x3EE76935, 0x46363823} } ,
	 { {0x0E3AE016, 0x6D24C29A, 0xA42FC234, 0x08AD1F94, 0xDEB28B95, 0x5A308E23, 0x725F71B3, 0x456254DA},
	{0xF1907FB8, 0x017F1225, 0x50B48C4C, 0x14AB158D, 0xD84C5880, 0x66E0417F, 0x87FCB16D, 0x6D84B325} }  } ,
	 {  { {0x338C2446, 0xF6102D48, 0xAAC35963, 0xC41DDB40, 0xE73489F1, 0x7D5EAD9F, 0x6564BB55, 0x30C0BA54},
	{0xDF2E674C, 0xC785FB52, 0xA6550758, 0x8E329CBA, 0xDF9223E5, 0x43BF071D, 0xFBFE4230, 0x6410EF40} } ,
	 { {0x55D82316, 0x6E6AEBA7, 0x522D0B2E, 0xA0088D23, 0x14BDB24E, 0xB4D536C1, 0xB97EC9AC, 0x229F9558},
	{0x8A070E9E, 0xD09F0735, 0xD4AD7833, 0x8415A71F, 0xCE214D86, 0x63AF9C6F, 0xD542AAE1, 0x2FEABD2C} }  } ,
	 {  { {0xAB572CD4, 0x4A4F98E3, 0x971A93EF, 0xDC16BC9C, 0x7A91657E, 0x22722258, 0x46B6C6EB, 0x32323C69},
	{0xA6C92889, 0x310F03EE, 0xCE812ADC, 0xE8089FAE, 0x2F1324AA, 0x84CF75F4, 0x4C0663CF, 0x3D0A03ED} } ,
	 { {0x7D5304B9, 0x4214D942, 0x3B74A059, 0xC021E467, 0x71FD6E47, 0x3307B992, 0x660D29C2, 0x89009378},
	{0x04B93FDC, 0x3DFA8F5A, 0x46134681, 0xB658565C, 0xCD9A17F0, 0xAF58D220, 0x1A5027D8, 0x14A0FD6E} }  }  } ;
		static const byte var_expected[] = {0x11, 0x55, 0xB1, 0x44, 0x7A, 0x16, 0xCA, 0x24, 0xA0, 0x65, 0x55, 0x95, 0xB1, 0x99, 0xA5, 0xFE};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 8 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x1F14B725, 0x4B45201B, 0xE63A963C, 0xF75D3713, 0x3CD68E8F, 0x8D8A07ED, 0x31AD849B, 0x041CEE70},
	{0x127A877D, 0x8C78045F, 0x05900090, 0x3800BC92, 0x0B90B76E, 0x2872E79B, 0x76F23857, 0x2E3F8CF4} } ,
	 { {0xE4F11032, 0x96F06C7B, 0x291BEEB4, 0x9521957A, 0x028AACDA, 0x0A650408, 0x7F75D641, 0x33F22CF4},
	{0xE617096C, 0xF0D87719, 0xEBA1EADD, 0x107A0C3A, 0xDE9185B4, 0x6F7CA3F2, 0x1E205A2F, 0x04A5D693} }  } ,
	 {  { {0xA0AEE297, 0x993FA5CB, 0x2E2222E3, 0xC87F6A18, 0x85A24820, 0xD142A719, 0xEC0F2244, 0x75C4A796},
	{0xAB67192E, 0x8143C7E6, 0x961F40C5, 0xE547485A, 0x7E787341, 0x53E1DED3, 0x467EC24E, 0x1E3B49DA} } ,
	 { {0x3B6394EA, 0x0DD92F01, 0xE0CB3920, 0xC1F31C55, 0xCAF2EFAA, 0x55039E69, 0x8E6068B8, 0x376E5D88},
	{0xF42108FB, 0x9398389D, 0x646B695F, 0xD72E9128, 0x60C2AE04, 0xD5A831AF, 0x2970CD80, 0x74629C94} }  } ,
	 {  { {0x90418CE5, 0xE27C372C, 0x3C4BEF2F, 0x7EEA7B68, 0x6283FF63, 0x27C95E01, 0x804ED758, 0x3FF536E0},
	{0x3441DF90, 0xBA09EDB6, 0x1E24549A, 0x32BFD282, 0xE614ECD3, 0x3A4512DC, 0x002A6835, 0x82F07832} } ,
	 { {0x083C55CA, 0x5050BD49, 0xAC87F448, 0xAE9DA405, 0xD23DDF12, 0x3A0A0BD2, 0x5A9E1A5F, 0x7C46C415},
	{0x1A3E501F, 0xCC5739D0, 0xCD2CA70D, 0x8336E1DB, 0xB02F48AB, 0x0644BC23, 0x436009BC, 0x05140CFC} }  }  } ;
		static const byte var_expected[] = {0xE0, 0x6E, 0x52, 0x3B, 0xEA, 0x67, 0xF4, 0x31, 0xF1, 0xE8, 0xD1, 0x50, 0x76, 0x32, 0xC2, 0xD8};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 9 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0xD8FC8FF4, 0xCC67C4FF, 0x2DD4FA4C, 0x94A039E6, 0x2FB71778, 0xB0FFCA44, 0xF5D9EF28, 0x05DFCF6D},
	{0x34F35B9A, 0xDF341ED3, 0xE5C4BD81, 0x853E5326, 0x4D19F947, 0x033D50AA, 0x6DB8352E, 0x401131EA} } ,
	 { {0x10183779, 0x0971A1A2, 0x2828D6DF, 0x9C5A7BEB, 0x79D42DFC, 0xEC15D765, 0x2B44BC93, 0x773956EA},
	{0xDD8A571F, 0x453A30D1, 0x6E6F5D89, 0x7E1278F6, 0xD69F1E83, 0x280718B6, 0x35F570E2, 0x9F742992} }  } ,
	 {  { {0x0048C618, 0xFEF033DB, 0x4727DBBD, 0x73E8F684, 0xF3BC1D57, 0x959C1FBE, 0x14880F4B, 0xAEB18B74},
	{0x5DD306C2, 0x95EC9EB0, 0xB2D4E6C6, 0x81A44C05, 0xB387629E, 0xC93E46EB, 0x144E8DFB, 0x711DD7CA} } ,
	 { {0xDA519BDB, 0xE0A4C0B6, 0x9F3983A3, 0xF3DA715D, 0xC90825AB, 0x92B5B07E, 0xC92A32BC, 0x0E40F868},
	{0xC80AEE4A, 0xA45736E7, 0x90006C36, 0x2F18F6DB, 0xD97C4272, 0x645FF54E, 0xC53771A0, 0x2BD33784} }  } ,
	 {  { {0x92EE39A3, 0x217DBB41, 0xD47251C6, 0x825C72A1, 0xB7373226, 0xFE89AE9E, 0xA3B2A02E, 0x22B1A117},
	{0xABE584A4, 0x87C9F580, 0x7B23626E, 0x422B8ED9, 0xD4CF9F9B, 0xC5CE45DC, 0xBF385F99, 0x129EC390} } ,
	 { {0x142916A6, 0x799730F2, 0xD373A317, 0x5456463E, 0xC3F394D1, 0x48D06AA2, 0xBB086520, 0x59A637FE},
	{0x61A4FFC1, 0x92BB5152, 0x79F14AC0, 0xFF701A68, 0xC1D4A928, 0xE26DCA95, 0xBC34D34E, 0x90121400} }  }  } ;
		static const byte var_expected[] = {0x6A, 0x5A, 0x9D, 0xF6, 0x7C, 0x10, 0x01, 0x18, 0x4C, 0x20, 0x08, 0x2A, 0x08, 0x9D, 0x47, 0xFB};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 10 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x14202AFF, 0xDDE4A73C, 0x1AA9FB4A, 0x29EB0FDE, 0x82EEEB65, 0x12E6117E, 0x6B376635, 0x4A350155},
	{0xCF45C47B, 0x5CDD80EE, 0x030C0C9A, 0x675C1A93, 0xB2398452, 0x12C8C639, 0xF5A60568, 0x3B3DCFB0} } ,
	 { {0x213D124A, 0x81CEA762, 0x92833778, 0xEEF150B6, 0x758A534F, 0x413B71EB, 0x0B63961C, 0x1150CC8F},
	{0x302256C4, 0xB765FF28, 0x72977CBF, 0x551ABDAA, 0x9859D2D7, 0xCA07BD69, 0xE3FC0D05, 0xB6A98E84} }  } ,
	 {  { {0x0E700C78, 0xDA7427A0, 0x638006F3, 0xD1D612A4, 0x5DCC393C, 0xFB025646, 0x35780DFE, 0x0DAAEB46},
	{0xED440538, 0xBB7292CF, 0xC04D6768, 0x474B3719, 0x02277545, 0xDF3BCF20, 0x3E46A1BF, 0x19E85720} } ,
	 { {0x891231B5, 0x9F10A101, 0x2340A629, 0x2A5A4A1D, 0xE6888225, 0xA822A819, 0x819C2FA4, 0x1F744B30},
	{0xBE325B0A, 0xBA49BDC2, 0xC48BFFFF, 0x99E5C828, 0x63616363, 0x43B68C17, 0x01A5983C, 0x86A3C566} }  } ,
	 {  { {0x09D68E28, 0xBFED137D, 0xF672DF0A, 0xE1B5D7C9, 0x4FE04457, 0xDF66237D, 0xC75AC05F, 0x538F8E3A},
	{0xEF6E4B30, 0x4CA6B670, 0xCCDBCA5A, 0x5D05F187, 0x2062C243, 0x4BAD921C, 0xA21214F6, 0x4E45D06A} } ,
	 { {0xF917CD04, 0x7665A527, 0x4AB0EEAB, 0xA8C205A3, 0x1C77E7CB, 0x94091B7A, 0xA3FAD345, 0x98973C10},
	{0x313CA60B, 0x46610A7E, 0xE133E1A1, 0x20668881, 0xDA0445D5, 0x7C562060, 0x9D26605C, 0x2D8ADF4A} }  }  } ;
		static const byte var_expected[] = {0x4A, 0x1D, 0xC5, 0x1B, 0x4E, 0xAE, 0xDC, 0xAD, 0x23, 0xB6, 0x9D, 0xEE, 0xC8, 0xAB, 0x0B, 0xCE};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 11 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x8CAD9992, 0x3584BC3F, 0x1BBFE6A7, 0xC1720EDE, 0x615D52E9, 0xE7CBE869, 0xEB48B796, 0x05799D1B},
	{0x9AB1A4F0, 0xB9BB0B8B, 0xC985F624, 0xE9373CBB, 0x6BB220AF, 0x8B310414, 0x6AA68609, 0x4E57886E} } ,
	 { {0xD4159DAD, 0xB3AEBCBD, 0xD3C9FE90, 0x984C1E37, 0x20B37F92, 0x3D616625, 0x7A8BB530, 0x36DDA52C},
	{0xD40E8F56, 0xFF63188A, 0xBAA02E3D, 0x793954BC, 0xA8A36ED6, 0x9198E15B, 0x01DD89A1, 0x07BAE199} }  } ,
	 {  { {0x20B65160, 0xE5E0AFFB, 0x1A67218D, 0xD94BF497, 0x9B9AA53D, 0x3B200599, 0x6830CB21, 0x090FECB4},
	{0x75346B61, 0xA9C8FDF7, 0xFD4E6213, 0x5585C7F9, 0xEC48739A, 0xC5541357, 0x5CE086A5, 0x02DA9923} } ,
	 { {0x03EA4991, 0xFEFD1AF5, 0xD929A0B6, 0x73B169C2, 0x51483B40, 0xC652FDD2, 0x0E5E4033, 0x9CCA5284},
	{0xCDD6B760, 0x8F331AD3, 0xC4BF2562, 0xF89B7F54, 0x84A04408, 0xAFC47D54, 0xB4C99C80, 0x43E6501B} }  } ,
	 {  { {0x4D131ACE, 0x75208664, 0x3B31EB50, 0x92D38DEC, 0x04136266, 0x0286F13B, 0x068307D1, 0x4A0D0846},
	{0x2F89BC4A, 0xC3A3DAE5, 0x2EE60FBD, 0x419B2753, 0xA69D7C46, 0x1376718F, 0x0101B6DB, 0x805C6148} } ,
	 { {0x0FAAE6E4, 0xFDE9B893, 0xA6B84CDA, 0xA3ED55DB, 0xB583B276, 0x56DA057F, 0x27E6DFC5, 0xB0E5D77A},
	{0x08FFCE0B, 0x9D817F13, 0x1BB209C6, 0x18BEAEB1, 0xCAC2F0A9, 0xFC90981B, 0xBD302059, 0x827BA11B} }  }  } ;
		static const byte var_expected[] = {0x97, 0xB0, 0x3F, 0x04, 0x1F, 0x26, 0xA5, 0x9A, 0x0C, 0x41, 0x15, 0x88, 0x4D, 0x49, 0xD0, 0xD1};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 12 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x9A4C963D, 0x8DD3AAF3, 0xC6A7A843, 0x53F0E048, 0xA4656D83, 0x66536BE6, 0x8C363C85, 0xAD43D3ED},
	{0x2A1BE610, 0xB07D02F9, 0x276FA1D0, 0xDD8E3A82, 0xA6842641, 0xAB68BC67, 0x6191DD13, 0x8085C9F7} } ,
	 { {0x7FCFA723, 0x5A7D27D1, 0x822240D7, 0x90514FA3, 0x54D6102A, 0x17285F31, 0x8E1BEDFB, 0x5CC84AE0},
	{0x475356A3, 0xD229CD07, 0x5C7537CC, 0x1C74795E, 0xDACF5710, 0xA64BF249, 0x66FCA0A1, 0x384280A8} }  } ,
	 {  { {0x904DAC71, 0xD7FE26BB, 0x03197997, 0x85DC2E71, 0x85555122, 0x8D129E28, 0xC4C48F20, 0x1C961D6A},
	{0x4FEBB0BE, 0x183755D3, 0x04310685, 0xA3916400, 0x47FB0637, 0xB23384BC, 0x859B5A55, 0xA6E25192} } ,
	 { {0xDC37654F, 0xBB36DA6F, 0xB3D7A91E, 0xA0817AE8, 0x37D576BD, 0x2FA04B76, 0x097AC0BC, 0x88205CCB},
	{0x7405948E, 0xD7C562D5, 0xA6B2CFBB, 0x7E9869AB, 0x0FD8ED77, 0xD31572ED, 0xB6782C66, 0x07D1DC67} }  } ,
	 {  { {0xB66586F3, 0xF91A6B65, 0x3A97E848, 0x8F262E85, 0xACC91D37, 0xA0814D86, 0x752B1128, 0x7EFC3EAC},
	{0xC58669A5, 0xA4C7005E, 0x38C7307D, 0xE884FBD2, 0x3EDF4725, 0x52D28B05, 0xF2EFC7D3, 0x1F6D3400} } ,
	 { {0xAE241C9A, 0xC8087143, 0x820CDF30, 0x3D766EAC, 0x66395CF8, 0xC7DA1A74, 0x6201C4ED, 0x1BB07188},
	{0xB5D454E0, 0x540752D3, 0x6C67CF0A, 0x93B6986F, 0x1ECAABF4, 0xAE0446D0, 0x35B75516, 0x1E2B2DC2} }  }  } ;
		static const byte var_expected[] = {0x1C, 0x0B, 0x2B, 0x3C, 0x36, 0xF2, 0xAB, 0xD2, 0xA3, 0x52, 0x76, 0xF3, 0xC2, 0xDE, 0xE6, 0x75};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 13 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x331C6085, 0x9E259031, 0xDF80C201, 0xC69E9808, 0xD0EAC079, 0xCC32A2DE, 0x27CD6D6D, 0x016F1300},
	{0x390C600C, 0xF9D2C6B2, 0x8AF0405F, 0x4D66CF25, 0x8E3BFF46, 0xA873584A, 0x35DCF3B6, 0x0201F407} } ,
	 { {0x1A0F3D5D, 0x2C6B78F3, 0x6341AD50, 0xBC6A41EE, 0x94FD679F, 0x0C4476B2, 0x1F16A8E4, 0x4339215B},
	{0xBB11E69A, 0xEC4B298C, 0x72B4BD55, 0xFD75B735, 0x0AC6EBA7, 0x5161FB1A, 0x6B4AB0A5, 0x9236819F} }  } ,
	 {  { {0x51E15DC6, 0x6A5E448E, 0xE25F411F, 0xB8A01533, 0x9FAC10E2, 0x2F0BCA50, 0x21EEF435, 0x02350CD5},
	{0x0E7A1676, 0xC15CA3AB, 0xC3E0C4DE, 0x029BE19F, 0x4571F862, 0xE8BA095D, 0x51FC2226, 0x079809E2} } ,
	 { {0xCF85321D, 0x8A05654E, 0x1A9AE9E0, 0xBC32A4A3, 0xC5C98327, 0x16FCDD02, 0xCA1DC7BF, 0x16E165E4},
	{0xE4ECCDC9, 0x4D5110A4, 0x842F630A, 0xEAE54463, 0xE03BA8A4, 0xF3E8C27D, 0x600D892F, 0x1EF7A5AF} }  } ,
	 {  { {0x9C30800A, 0x0597ED32, 0x8C92637B, 0xCEB31745, 0x2162FBE9, 0xF1674A22, 0x2F18D822, 0x6882B804},
	{0xCB346233, 0xA525B100, 0x2C777C6A, 0x6E92F4E9, 0x682BA5CC, 0x3B1EF98A, 0x114A95AC, 0x17FB4C47} } ,
	 { {0x2E71D95D, 0x8F597A31, 0x742FE81B, 0x6E8FD91D, 0x071CDB1E, 0x1E17AD3B, 0x694694CA, 0x4F6A83B6},
	{0x1B2897C4, 0x1D81BF3E, 0xBE91F63C, 0xD5314B72, 0xFBCC8067, 0xB78C007A, 0x1D5CD15C, 0x6353B61B} }  }  } ;
		static const byte var_expected[] = {0xAD, 0x65, 0xCA, 0x16, 0x79, 0x7C, 0xB8, 0x18, 0x2F, 0xD3, 0xD1, 0x07, 0xC9, 0x0B, 0x10, 0x50};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 14 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0xD590AF63, 0x1B3D69C9, 0x7B4B9D59, 0x49951616, 0xB7BD69E0, 0x4314343E, 0x941AC796, 0xA77755BB},
	{0x1F07A9CA, 0x4BB02EE6, 0x893E503D, 0x32C60554, 0xFD6344B6, 0xBAEB287E, 0xFC215DFF, 0x4BC2CE0D} } ,
	 { {0x22CF0C00, 0xE01878A8, 0x8BBD6855, 0x4CDA3275, 0xB41FA09D, 0x455D69F3, 0x06BF5004, 0x8FFA5632},
	{0xEA3D8EE2, 0x034B53FC, 0x69603177, 0x2647F8C5, 0x64DBAAB3, 0xC491629E, 0x68772476, 0x49B25985} }  } ,
	 {  { {0xE671BE5B, 0x52FB8CCB, 0xCDE8E7F6, 0xA588257F, 0xBD3CD2EF, 0x49331687, 0x5AA6C418, 0x62848882},
	{0x6C9B4EB3, 0x5BD9B8BF, 0xA6366752, 0x7E17B219, 0x10652A69, 0x9BDF6DE4, 0x1A2973A4, 0x59A323E9} } ,
	 { {0xD0A8EDD5, 0x278BA8F0, 0xD4D48C4F, 0xAC9DBBBF, 0x805F32B7, 0xB90A3DA3, 0x27FCF089, 0x04A3B6D0},
	{0xD68CB7DA, 0xA81261B2, 0xCB64A1D1, 0x46E744C8, 0x236D1D24, 0x43F12804, 0x0AA4F5FB, 0xB80EBDCA} }  } ,
	 {  { {0x587B9B62, 0x5102C849, 0xC814F65C, 0x48147D35, 0x3A9EF355, 0x2BBBB7D4, 0x49D14CF8, 0x80187C49},
	{0x3900CC44, 0x803F251B, 0xCC0AF435, 0xB971C5B7, 0xA8C6BBE7, 0x078E188C, 0x3366454A, 0x2A22CC4E} } ,
	 { {0x84F06F45, 0x0939DC84, 0x4031629C, 0x1AEE559A, 0x1C313291, 0x97AF7503, 0x175477B2, 0x0BC7A6D8},
	{0x6A579111, 0xB52F817F, 0x2DAC1AE7, 0x9CA7EE6B, 0x3F2C3301, 0x5C580F9E, 0xCC2AE226, 0x99F7ECBC} }  }  } ;
		static const byte var_expected[] = {0xCF, 0xC3, 0xF3, 0x28, 0xD9, 0xB1, 0x9B, 0x0B, 0x16, 0x00, 0x9F, 0x89, 0x4B, 0x01, 0x32, 0x64};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 15 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x508C5352, 0xC307ED26, 0xE1C5E691, 0x8900B4D2, 0xE3E2B68C, 0x16764174, 0xEA16E6C5, 0x2FA379CC},
	{0xD286BD58, 0x5F500308, 0xE8994872, 0x71B9083F, 0x768C05BA, 0x1BFE02DB, 0x8E22ACD7, 0x1A8174B0} } ,
	 { {0xC9A3C8D2, 0x30410222, 0x1663C1BB, 0x01100E4F, 0x8F4931BC, 0x0A505153, 0x9B62C303, 0x8BB45819},
	{0xCA98A154, 0xD1FF4EB9, 0x040F4A22, 0x7EDFC493, 0x6C83C2DA, 0x3BC7DAD9, 0x343927D0, 0x197B9049} }  } ,
	 {  { {0x7D991824, 0x4AF1ADF2, 0xDD954FEB, 0x09B25A24, 0xBBB8C291, 0x23E23525, 0xC3EFFF48, 0x86FA9E9E},
	{0xC0015473, 0x9F91822D, 0x46174509, 0x0F7F0290, 0x8293B75B, 0x022B89FA, 0xF56C50D2, 0x126D51EC} } ,
	 { {0xFD9ECE6D, 0x4569E90D, 0x22569655, 0x8D6631E3, 0xE6DA8B3C, 0x45045FEA, 0xBBE9BEBB, 0x3E8FA5BF},
	{0xA4DD3CC2, 0xA18CA416, 0x128D84D5, 0x8C02043D, 0xAF0E7156, 0xFC7511FD, 0xCC7D4060, 0x4E8E5EE3} }  } ,
	 {  { {0x40F13936, 0x947E0219, 0x87133E7B, 0xF57472B6, 0xCFA3FAB2, 0x8871FF99, 0xDEA2EB41, 0x3E8C4121},
	{0xC7D8960D, 0xEBA07CE4, 0x840A546A, 0xD4087B4F, 0x2B9C46A6, 0xEB03F32E, 0xAF1974B9, 0x85FDF9B7} } ,
	 { {0xD02D47C1, 0xEE855F25, 0x268CF2B9, 0x61121551, 0x25889EFE, 0x64585E1E, 0x01EB2D63, 0x3A0BC050},
	{0xF9660A07, 0xD351383E, 0x511D9F85, 0xE2D9E032, 0xC0D8692D, 0xD7A9EC97, 0x5AD0C4C0, 0x3929A305} }  }  } ;
		static const byte var_expected[] = {0x35, 0xBA, 0x41, 0xFB, 0x13, 0xD6, 0x35, 0xD6, 0x0E, 0xF6, 0xFD, 0x6B, 0x60, 0x50, 0x46, 0x69};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 16 hash");
	}
	{
		static fp12_t var_a =  {  {  { {0x22CAFB40, 0x47B0CB58, 0x26F8BB80, 0xB71FBD70, 0x26F33959, 0x6DEA5A61, 0x01552AE5, 0x3F1920C2},
	{0xD1D7AA3F, 0xEAD92BAA, 0xBDA6AFAB, 0x3BA34DD7, 0xCDB0BF8E, 0xF94BAC44, 0xC55E1AFE, 0x151C5D48} } ,
	 { {0xC976930A, 0xD30EA7F0, 0x6FE16266, 0xE453BADA, 0x53755969, 0x8DECA52A, 0x358E0772, 0x68B2B61C},
	{0xD9B4D4E7, 0x092F3784, 0x57BD7888, 0x3493A104, 0xF7A20E7F, 0xE363AC08, 0xA8069E85, 0xA97DE616} }  } ,
	 {  { {0xD1479979, 0x09C89DB2, 0x812C819B, 0xEF12F72C, 0xC5C03599, 0xEE667CD7, 0xB60D0418, 0x9FB0FCB6},
	{0x648343B9, 0x449E1193, 0x3BEBDAA6, 0xAD5D33B7, 0x719DC2B4, 0x551A3DB4, 0xFD5664DC, 0xAB311F20} } ,
	 { {0xACB165D7, 0x9E174B7F, 0x990401D1, 0x599D3E88, 0xD11F225C, 0xF3D4327A, 0x9D4064FD, 0x3BF92CD6},
	{0xA5FB3CA4, 0xF075C348, 0xF26654F6, 0xB2B17DBB, 0x5EA78F65, 0x55B21736, 0xBC1F75DD, 0x58C0FECF} }  } ,
	 {  { {0xAEE17078, 0x86E1B04F, 0x6188D342, 0xCD96FBDA, 0xB8FC85F5, 0x3FF503B4, 0x049D52EE, 0x19FF9EB6},
	{0x0B44190C, 0xA1438908, 0x451B7258, 0x911BE923, 0x1FD22D37, 0x273A10DC, 0x202140D2, 0x2D3B131B} } ,
	 { {0x65FB4CA8, 0xF5F0158C, 0xC1D20250, 0x39E8EC8D, 0xFAD3EBD6, 0xB9791B2D, 0x4251D7F9, 0x56A69045},
	{0xE5D5870A, 0x2E35D8D3, 0x68C006A7, 0xC3C3513F, 0x0066E738, 0x567B01FD, 0x607C9D90, 0x2DF89740} }  }  } ;
		static const byte var_expected[] = {0xCE, 0x20, 0x8C, 0xBA, 0xAE, 0x36, 0x3B, 0xF4, 0x60, 0xEC, 0x68, 0x21, 0x72, 0x74, 0xB1, 0x6A};
		hash_key(var_res, var_a);
		assert_bytearr_equal(var_expected, var_res, 16, "hash_key 17 hash");
	}
	{
		static const char *var_a = "homer";
		static const bigint_t var_expected = {0x95B7AA2A, 0x046983B3, 0x6CFC2EF8, 0x925D28A2, 0x2075ED7A, 0xDAE11462, 0xEB183438, 0x2F05C990};
		hash_id(var_res_bi, var_a);
		assert_bi_equal(var_expected, var_res_bi, "hash_id 18 hash");
	}
	{
		static const char *var_a = "sheldon";
		static const bigint_t var_expected = {0x0DFDFE38, 0xD012AD2D, 0x88595FB1, 0x3C9737F8, 0xF25544D0, 0x3EA96D6E, 0x0F9EE59F, 0xD44A1F9B};
		hash_id(var_res_bi, var_a);
		assert_bi_equal(var_expected, var_res_bi, "hash_id 19 hash");
	}
	{
		static const char *var_a = "vince";
		static const bigint_t var_expected = {0xAD61C408, 0xC7E6FC70, 0x0F8E9A1A, 0x9F2F4A82, 0xB59DA654, 0x95F07986, 0x2B1B54EA, 0x91AF1924};
		hash_id(var_res_bi, var_a);
		assert_bi_equal(var_expected, var_res_bi, "hash_id 20 hash");
	}
	{
		static const char *var_a = "j.d.";
		static const bigint_t var_expected = {0x8DC41DDB, 0x18FDA2AE, 0x9FA9168A, 0x4899E366, 0x494DA2F5, 0xFF9996B2, 0xDFEAF71F, 0x6CA656B9};
		hash_id(var_res_bi, var_a);
		assert_bi_equal(var_expected, var_res_bi, "hash_id 21 hash");
	}
	{
		static const char *var_a = "ted";
		static const bigint_t var_expected = {0xADA5B5EF, 0x6C092275, 0x82DD39D3, 0xD339CD90, 0xCDAFB846, 0x3F8BEE0B, 0xE786D073, 0x7D90DC91};
		hash_id(var_res_bi, var_a);
		assert_bi_equal(var_expected, var_res_bi, "hash_id 22 hash");
	}
	{
		static const char *var_a = "dexter";
		static const bigint_t var_expected = {0x7BC93B8C, 0x137FD136, 0xEFDFD50B, 0xC2559965, 0x8E1402AC, 0xEABBC45A, 0xA8DACD87, 0xEE0564F7};
		hash_id(var_res_bi, var_a);
		assert_bi_equal(var_expected, var_res_bi, "hash_id 23 hash");
	}
#endif


	return 0;
}

