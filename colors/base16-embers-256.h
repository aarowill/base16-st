// Base16 Embers dark - simple terminal color setup
// Jannik Siebert (https://github.com/janniks)
static const char *colorname[] = {
	/* Normal colors */
	"#16130f", /*  0: Base 00 - Black   */
	"#826d57", /*  1: Base 08 - Red     */
	"#57826d", /*  2: Base 0B - Green   */
	"#6d8257", /*  3: Base 0A - Yellow  */
	"#6d5782", /*  4: Base 0D - Blue    */
	"#82576d", /*  5: Base 0E - Magenta */
	"#576d82", /*  6: Base 0C - Cyan    */
	"#a39a90", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5a5047", /*  8: Base 03 - Bright Black */
	"#826d57", /*  9: Base 08 - Red          */
	"#57826d", /* 10: Base 0B - Green        */
	"#6d8257", /* 11: Base 0A - Yellow       */
	"#6d5782", /* 12: Base 0D - Blue         */
	"#82576d", /* 13: Base 0E - Magenta      */
	"#576d82", /* 14: Base 0C - Cyan         */
	"#dbd6d1", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#828257", /* 16: Base 09 */
	"#825757", /* 17: Base 0F */
	"#2c2620", /* 18: Base 01 */
	"#433b32", /* 19: Base 02 */
	"#8a8075", /* 20: Base 04 */
	"#beb6ae", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a39a90", /* default fg: Base 05 */
	[257] = "#16130f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
