// Base16 lime dark - simple terminal color setup
// limelier
static const char *colorname[] = {
	/* Normal colors */
	"#1a1a2f", /*  0: Base 00 - Black   */
	"#ff662a", /*  1: Base 08 - Red     */
	"#8cd97c", /*  2: Base 0B - Green   */
	"#ffd15e", /*  3: Base 0A - Yellow  */
	"#2b926f", /*  4: Base 0D - Blue    */
	"#1b825f", /*  5: Base 0E - Magenta */
	"#4cad83", /*  6: Base 0C - Cyan    */
	"#818175", /*  7: Base 05 - White   */

	/* Bright colors */
	"#313140", /*  8: Base 03 - Bright Black */
	"#ff662a", /*  9: Base 08 - Red          */
	"#8cd97c", /* 10: Base 0B - Green        */
	"#ffd15e", /* 11: Base 0A - Yellow       */
	"#2b926f", /* 12: Base 0D - Blue         */
	"#1b825f", /* 13: Base 0E - Magenta      */
	"#4cad83", /* 14: Base 0C - Cyan         */
	"#fff8e1", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff773a", /* 16: Base 09 */
	"#b4d97c", /* 17: Base 0F */
	"#202030", /* 18: Base 01 */
	"#2a2a3f", /* 19: Base 02 */
	"#515155", /* 20: Base 04 */
	"#fff2d1", /* 21: Base 06 */

	[255] = 0,

	[256] = "#818175", /* default fg: Base 05 */
	[257] = "#1a1a2f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
