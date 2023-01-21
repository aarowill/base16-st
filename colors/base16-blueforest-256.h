// Base16 Blue Forest dark - simple terminal color setup
// alonsodomin (https://github.com/alonsodomin)
static const char *colorname[] = {
	/* Normal colors */
	"#141f2e", /*  0: Base 00 - Black   */
	"#fffab1", /*  1: Base 08 - Red     */
	"#80ff80", /*  2: Base 0B - Green   */
	"#91ccff", /*  3: Base 0A - Yellow  */
	"#a2cff5", /*  4: Base 0D - Blue    */
	"#0099ff", /*  5: Base 0E - Magenta */
	"#80ff80", /*  6: Base 0C - Cyan    */
	"#ffcc33", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a0ffa0", /*  8: Base 03 - Bright Black */
	"#fffab1", /*  9: Base 08 - Red          */
	"#80ff80", /* 10: Base 0B - Green        */
	"#91ccff", /* 11: Base 0A - Yellow       */
	"#a2cff5", /* 12: Base 0D - Blue         */
	"#0099ff", /* 13: Base 0E - Magenta      */
	"#80ff80", /* 14: Base 0C - Cyan         */
	"#375780", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff8080", /* 16: Base 09 */
	"#e7e7e7", /* 17: Base 0F */
	"#1e5c1e", /* 18: Base 01 */
	"#273e5c", /* 19: Base 02 */
	"#1e5c1e", /* 20: Base 04 */
	"#91ccff", /* 21: Base 06 */

	[255] = 0,

	[256] = "#ffcc33", /* default fg: Base 05 */
	[257] = "#141f2e", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
