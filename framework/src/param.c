/*
 * param.c
 *
 *	Parameters that define the type of pairing,  the elliptic curve,
 *	the extension field and the prime.
 *
 *  Created on: Apr 21, 2013
 *      Author: thomas
 */

#include "param.h"

#if BYTES_PER_WORD == 4
  #if PRECISION == 256
  #if (BNCURVE == BN256)
    const structPrime PRIME = {{0x622C349B, 0xFEEE89B1, 0xD477DF46, 0x1311ACA0,
    					  0x53E289B5, 0xFB605C6B, 0x401EDC28, 0xBA139EC2},
    					 {0x0302D742, 0xD6D8380C, 0xCA4B9850, 0xD683E79F,
    					  0x80E2F720, 0x6DAD8102, 0x744EDA0F, 0x6032EF36, 0x00000001},
		  	  	  	  	  -1,
		  	  	  	  	  -1};

    const structMontyParam MONTY_PRIME = {{0x73696E6D, 0xAC3FC985, 0x06D41D7C, 0x4922CABA,
    					  	  	  	  	   0x456E351F, 0x2BF4C8D5, 0xCE341AA8, 0xEFD5FAE5},
    									  {0x5636430A, 0x8EF6DE97, 0xBD8A829D, 0x214654A0,
    									   0xDF0F9586, 0xB826482C, 0x0510FB76, 0x2B6940FA}};

    const structGLVParam GLV_PARAM = {{{0x00000000, 0x00000000, 0x00000000, 0x00000000,
    	    				    0x00000000, 0x00000000, 0x00000000, 0x00000000},
    						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
    						    0x00000000, 0x00000000, 0x00000000, 0x00000000},
    						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
    						    0x00000000, 0x00000000, 0x00000000, 0x00000000}},
      						  {{0x00000000, 0x00000000, 0x00000000, 0x00000000,
            					0x00000000, 0x00000000, 0x00000000, 0x00000000},
      						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
      						    0x00000000, 0x00000000, 0x00000000, 0x00000000},
      						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
      						    0x00000000, 0x00000000, 0x00000000, 0x00000000}},
      						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
      						    0x00000000, 0x00000000, 0x00000000, 0x00000000}};

    const bigint_t OPTATE_LOOP_CONST = {0x00180194, 0x43000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000};

    const bigint_t MOD_INV_EXPONENT = {0x622C3499, 0xFEEE89B1, 0xD477DF46, 0x1311ACA0,
			  	  	  	  	  	  	   0x53E289B5, 0xFB605C6B, 0x401EDC28, 0xBA139EC2};

    const bigint_t BN_INV_CONST = {0x00180191, 0x43000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000};

    #ifdef MONTGOMERY_ARITHMETIC

    const structECParam EC_PARAM = {{0x00000000, 0x00000000, 0x00000000, 0x00000000,
    							0x00000000, 0x00000000, 0x00000000, 0x00000000},
    							{0x774F2D94, 0x0445D93A, 0xAE2082E4, 0xB3B94D7C,
    							0xB075D92B, 0x127E8E52, 0xFF848F5C, 0x17B184F6},
    							{0x00040043, 0x60800000, 0x00000000, 0x00000000,
    							0x00000000, 0x00000000, 0x00000000, 0x00000000},
//    		    			   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
//    		    			   0x00000000, 0x00000000, 0x00000000, 0x00000000},
    		    			   {0x559BCB65, 0xECEE8951, 0xD465C617, 0x38D02CA0,
    		    			    0x53E289B4, 0xFB605C6B, 0x401EDC28, 0xBA139EC2},
    		    			    {0xBEBED793, 0xAA48D8F6, 0x30929D62, 0x739F314A,
    		    			     0x80E2F722, 0x6DAD8102, 0x744EDA0F, 0x6032EF36, 0x00000001}};

    const fp_t EC_PARAM_4B = {0xDD3CB650, 0x111764E9, 0xB8820B90, 0xCEE535F2, 0xC1D764AE, 0x49FA394A, 0xFE123D70, 0x5EC613DB};

    const fp2_t ROOT_RESIDUE_FP4[5] = {
							{ {0x39B16ACD, 0x18684025, 0x0D2E2F44, 0xE89D99FA, 0x5ABE91C1, 0x34B7A757, 0x163F8067, 0x51651375},
								{0x39B16ACD, 0x18684025, 0x0D2E2F44, 0xE89D99FA, 0x5ABE91C1, 0x34B7A757, 0x163F8067, 0x51651375} },
							{ {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
								{0xD056BA87, 0xA3E6FB8C, 0x2028B874, 0xE1FAACCC, 0xAF67BEFF, 0x3C10C5C1, 0x5D520E77, 0xB0451C87} },
							{ {0x094D9DE9, 0x8D1610AB, 0xCB7D6DC4, 0xC0A0FB80, 0x2B63AE2A, 0x4302C31E, 0x811C59A6, 0x51A7A85D},
								{0x58DE96B2, 0x71D87906, 0x08FA7182, 0x5270B120, 0x287EDB8A, 0xB85D994D, 0xBF028282, 0x686BF664} },
							{ {0x2FA94579, 0x5C190473, 0xDFD7478B, 0x1E055333, 0x50984100, 0xC3EF3A3E, 0xA2ADF188, 0x4FBAE378},
								{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} },
							{ {0x42FF08B6, 0xA57E50D0, 0xD8AB9D08, 0xA93E957A, 0x86223FEC, 0x77BA6A75, 0x975BDA0D, 0xA30CBBD2},
								{0x42FF08B6, 0xA57E50D0, 0xD8AB9D08, 0xA93E957A, 0x86223FEC, 0x77BA6A75, 0x975BDA0D, 0xA30CBBD2} }
    						};

    const fp_t FP_ONE = {0x9DD3CB65, 0x0111764E, 0x2B8820B9, 0xECEE535F, 0xAC1D764A, 0x049FA394, 0xBFE123D7, 0x45EC613D};

	#else
    const structECParam EC_PARAM = {{0x00000000, 0x00000000, 0x00000000, 0x00000000,
			  	  	  	  	   0x00000000, 0x00000000, 0x00000000, 0x00000000},
    						  {0x00000003, 0x00000000, 0x00000000, 0x00000000,
    		    			   0x00000000, 0x00000000, 0x00000000, 0x00000000},
    		    			   {0x00040043, 0x60800000, 0x00000000, 0x00000000,
    		    			    0x00000000, 0x00000000, 0x00000000, 0x00000000},
//    		    			   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
//    		    			   0x00000000, 0x00000000, 0x00000000, 0x00000000},
    		    			   {0x559BCB65, 0xECEE8951, 0xD465C617, 0x38D02CA0,
    		    			    0x53E289B4, 0xFB605C6B, 0x401EDC28, 0xBA139EC2},
    		    			    {0xBEBED793, 0xAA48D8F6, 0x30929D62, 0x739F314A,
    		    			     0x80E2F722, 0x6DAD8102, 0x744EDA0F, 0x6032EF36, 0x00000001}};

    const fp_t EC_PARAM_4B = {0x00000012, 0x00000000, 0x00000000, 0x00000000,
			   	   	   	   	  0x00000000, 0x00000000, 0x00000000, 0x00000000};

    const fp_t FP_ONE = {0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,0x00000000, 0x00000000};

    const fp2_t ROOT_RESIDUE_FP4[5] = {
    			{ {0x6A34B2AD, 0x1D63C4D1, 0x6CFF885A, 0x124AED4C, 0xDB70D8A2, 0x86C3B680, 0xA8F7131E, 0x64DFA51E},
    			  {0x6A34B2AD, 0x1D63C4D1, 0x6CFF885A, 0x124AED4C, 0xDB70D8A2, 0x86C3B680, 0xA8F7131E, 0x64DFA51E} },
    			{ {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    			  {0x706C5B37, 0xACEDA662, 0xF9A1A6C6, 0x6C04AB5A, 0x53C3D67A, 0x048F4A2B, 0x401EDC28, 0xBA139EC2} },
    		    { {0x12F70F55, 0xFA3788B3, 0x309A2A72, 0xC0B99292, 0xDA0D98C8, 0xF9C3E1B8, 0x56F51B30, 0x92B7087D},
    		      {0x4F352546, 0x04B700FE, 0xA3DDB4D4, 0x52581A0E, 0x79D4F0EC, 0x019C7AB2, 0xE929C0F8, 0x275C9644} },
    		    { {0xF1BFD965, 0x5200E34E, 0xDAD63880, 0xA70D0145, 0x001EB33A, 0xF6D11240, 0x00000000, 0x00000000},
    		      {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} },
    			{ {0x1AFF8D67, 0x18ACC3D3, 0xC921D386, 0xBFF2D33D, 0x619BE7B5, 0x85273BCE, 0xBFCD5226, 0x3D830ED9},
    			  {0x1AFF8D67, 0x18ACC3D3, 0xC921D386, 0xBFF2D33D, 0x619BE7B5, 0x85273BCE, 0xBFCD5226, 0x3D830ED9} }
    		};
	#endif
  #elif (BNCURVE == BN254)
    	const structPrime PRIME = {{0x00000013, 0xA7000000, 0x00000013, 0x61210000,
    								0x00000008, 0xBA344D80, 0x40000001, 0x25236482},
    							{0x4C735A91, 0x5A5F8D22, 0x3B56F610, 0x24046450,
    							0x7BB36C39, 0x7FCEDBA3, 0x93AF3394, 0xE4A64840, 0x00000006},
    		  	  	  	  	  -1,
    		  	  	  	  	  -1};

    	const bigint_t LAZYR_PRIMEC = {0x00000072, 0xEA000000, 0x00000075, 0x46C60000,
    								  0x00000032, 0x5D39D100, 0x8000000A, 0xDED45B0D};

        const structMontyParam MONTY_PRIME = {{0xD79435E5, 0x08435E50, 0x1104F6C8, 0x6E371BA8,
        									  0xC45B843C, 0x92022379, 0xBA60808C, 0xB65373CC},
        										{0x5370473D, 0xB3E88674, 0x8C1CC3F1, 0x55EFBF6E,
        										0x7F86954F, 0x281E3A1B, 0xF6403A3D, 0x1B0A32FD}};

        const structGLVParam GLV_PARAM = {{{0x00000000, 0x00000000, 0x00000000, 0x00000000,
        	    				    0x00000000, 0x00000000, 0x00000000, 0x00000000},
        						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
        						    0x00000000, 0x00000000, 0x00000000, 0x00000000},
        						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
        						    0x00000000, 0x00000000, 0x00000000, 0x00000000}},
          						  {{0x00000000, 0x00000000, 0x00000000, 0x00000000,
                					0x00000000, 0x00000000, 0x00000000, 0x00000000},
          						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
          						    0x00000000, 0x00000000, 0x00000000, 0x00000000},
          						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
          						    0x00000000, 0x00000000, 0x00000000, 0x00000000}},
          						   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
          						    0x00000000, 0x00000000, 0x00000000, 0x00000000}};

        const bigint_t OPTATE_LOOP_CONST = {0x00000004, 0x83000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000};

        const bigint_t MOD_INV_EXPONENT = {0x00000011, 0xA7000000, 0x00000013, 0x61210000,
										   0x00000008, 0xBA344D80, 0x40000001, 0x25236482};

        const bigint_t BN_INV_CONST = {0x00180191, 0x43000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000};

        #ifdef MONTGOMERY_ARITHMETIC

        const structECParam EC_PARAM = {{0x00000000, 0x00000000, 0x00000000, 0x00000000,
        							0x00000000, 0x00000000, 0x00000000, 0x00000000},
        							{0xFFFFFF09, 0x84FFFFFF, 0xFFFFFF00, 0x1152FFFF,
        							 0xFFFFFF93, 0x8B58107F, 0xBFFFFFE9, 0x1D33E562},
        							 {0x00000001, 0x40800000, 0x00000000, 0x00000000,
        							 0x00000000, 0x00000000, 0x00000000, 0x00000000},
//        		    			   {0x00000000, 0x00000000, 0x00000000, 0x00000000,
//        		    			   0x00000000, 0x00000000, 0x00000000, 0x00000000},
        		    			   {0x0000000D, 0xA1000000, 0x00000010, 0xFF9F8000,
        		    			    0x00000007, 0xBA344D80, 0x40000001, 0x25236482},
        		    			    {0x284DF31B, 0x8CBAA5A3, 0x3AD196E5, 0x3D13303C,
        		    			     0x7BB36C4B, 0x7FCEDBA3, 0x93AF3394, 0xE4A64840, 0x00000006}};

        const fp_t EC_PARAM_4B = {0xFFFFFBEB, 0x1EFFFFFF, 0xFFFFFBC7, 0x21E8FFFF, 0xFFFFFE33, 0xFEC3597F, 0x3FFFFFA0, 0x05656804};

        const fp2_t ROOT_RESIDUE_FP4[5] = {
    							{ {0x75E94F74, 0x27283800, 0xC79B1F6B, 0x144F87F9, 0xD2C92F70, 0xD5910FFE, 0xE92ACF9F, 0x1830373E},
    							  {0x8A16B09F, 0x7FD7C7FF, 0x3864E0A8, 0x4CD17806, 0x2D36D098, 0xE4A33D81, 0x56D53061, 0x0CF32D43} },
    							{ {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    							  {0xE869FD55, 0x056EFC68, 0x38D7BA61, 0x1C922091, 0x594D6466, 0xC0651CD3, 0xBFFFFFEF, 0x22A87DEB} },
    							{ {0x71674777, 0xFD55C5DC, 0x56D9569C, 0xC45A8B4E, 0x2CAE2274, 0x5F011647, 0x1D115E0A, 0x1AA6D99B},
    							  {0x71674777, 0xFD55C5DC, 0x56D9569C, 0xC45A8B4E, 0x2CAE2274, 0x5F011647, 0x1D115E0A, 0x1AA6D99B} },
    							{ {0xE869FCD0, 0x746EFC68, 0x38D7B9D7, 0x74AB2091, 0x594D642B, 0xA8F6FE53, 0xFFFFFFE3, 0x1EB0BE5B},
    							  {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} },
    							{ {0xE75096D8, 0x7D7DFDDC, 0x1E7475F4, 0x77891348, 0xFF7751DC, 0x7A5DD8C5, 0xC63C2DA8, 0x0DB3AC57},
    							  {0x18AF693B, 0x29820223, 0xE18B8A1F, 0xE997ECB7, 0x0088AE2B, 0x3FD674BA, 0x79C3D259, 0x176FB82A} }
        						};

        const fp_t FP_ONE = {0xFFFFFF8E, 0x15FFFFFF, 0xFFFFFF8A, 0xB939FFFF, 0xFFFFFFCD, 0xA2C62EFF, 0x7FFFFFF5, 0x212BA4F2};

   #endif
  #endif
  #elif PRECISION == 160
    	const structPrime PRIME = {{0x4C50525B, 0x1E2D54A0, 0x394AC09E, 0xAF565BE6, 0x24012003},
    							   {0xFEEFA5B1, 0xAE2BD718, 0xE27EF696, 0xFC2AEF85, 0x1C38E49A, 0x00000007},
    							   -1,
    							   -1};

        const structMontyParam MONTY_PRIME = {{0x9FAF722D, 0xFE5C09D8, 0xFDAAF12F, 0x9B4CE70A, 0xD90C790B},
        									  {0x4A6D6815, 0x91C315C0, 0xA9801708, 0xC7BCD9EB, 0x12623E47}};

        const structGLVParam GLV_PARAM = {{{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
        									{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
        									{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000}},
        								{{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
          								{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
          								{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000}},
          								{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000}};

        const bigint_t OPTATE_LOOP_CONST = {0x030000D4, 0x00000180, 0x00000000, 0x00000000, 0x00000000};

        const bigint_t MOD_INV_EXPONENT = {0x4C505259, 0x1E2D54A0, 0x394AC09E, 0xAF565BE6, 0x24012003};

        const bigint_t BN_INV_CONST = {0x030000D1, 0x00000180, 0x00000000, 0x00000000, 0x00000000};

        #ifdef MONTGOMERY_ARITHMETIC

        const structECParam EC_PARAM = {{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
        								{0xD39B7F06, 0x59855F3B, 0xDDE9775A, 0x6946F968, 0x07F03FCC},
        								{0x00800023, 0x00000040, 0x00000000, 0x00000000, 0x00000000},
//        								{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
        								{0x7A5035A5, 0x9E2B6B9F, 0x394A609C, 0xAF565BE6, 0x24012003},
        								{0x10F58660, 0xE38E182A, 0xE291EC37, 0xFC2AEF85, 0x1C38E49A, 0x00000007}};

        const fp_t EC_PARAM_4B = {0x4E6DFC18, 0x66157CEF, 0x77A5DD69, 0xA51BE5A3, 0x1FC0FF31};

        const fp2_t ROOT_RESIDUE_FP4[5] = {
        				{ {0xA2B69B25, 0x78A9B4A8, 0x0134AFBA, 0x1176E46C, 0x0CD6B932},
        		        {0xA999B736, 0xA5839FF7, 0x381610E3, 0x9DDF777A, 0x172A66D1} },
        		        { {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
        		                {0x6BCCE2F3, 0x2A95EC44, 0xA05B75CE, 0x3F372AC8, 0x18C77D07} },
        		        { {0x91C10633, 0xC227B1DB, 0x59197738, 0xCBB93FAC, 0x006C969E},
        		                {0x91C10633, 0xC227B1DB, 0x59197738, 0xCBB93FAC, 0x006C969E} },
        		        { {0x559AA276, 0x57589BE2, 0x0F50317B, 0x73DAA77D, 0x1CBF9CED},
        		                {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000} },
        		        { {0x3477A158, 0x3AD16684, 0x5A4E26F3, 0xDD302418, 0x0D434FD0},
        		                {0x17D8B103, 0xE35BEE1C, 0xDEFC99AA, 0xD22637CD, 0x16BDD032} }};

        const fp_t FP_ONE = {0xE9CDBF83, 0x2CC2AF9D, 0x6EF4BBAD, 0x34A37CB4, 0x03F81FE6};
    #endif
  #endif
#endif
