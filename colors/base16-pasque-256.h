// Base16 Pasque dark - simple terminal color setup
// Gabriel Fontes (https://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#271c3a", /*  0: Base 00 - Black   */
	"#a92258", /*  1: Base 08 - Red     */
	"#c6914b", /*  2: Base 0B - Green   */
	"#804ead", /*  3: Base 0A - Yellow  */
	"#8e7dc6", /*  4: Base 0D - Blue    */
	"#953b9d", /*  5: Base 0E - Magenta */
	"#7263aa", /*  6: Base 0C - Cyan    */
	"#dedcdf", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5d5766", /*  8: Base 03 - Bright Black */
	"#a92258", /*  9: Base 08 - Red          */
	"#c6914b", /* 10: Base 0B - Green        */
	"#804ead", /* 11: Base 0A - Yellow       */
	"#8e7dc6", /* 12: Base 0D - Blue         */
	"#953b9d", /* 13: Base 0E - Magenta      */
	"#7263aa", /* 14: Base 0C - Cyan         */
	"#bbaadd", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#918889", /* 16: Base 09 */
	"#59325c", /* 17: Base 0F */
	"#100323", /* 18: Base 01 */
	"#3e2d5c", /* 19: Base 02 */
	"#bebcbf", /* 20: Base 04 */
	"#edeaef", /* 21: Base 06 */

	[255] = 0,

	[256] = "#dedcdf", /* default fg: Base 05 */
	[257] = "#271c3a", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
