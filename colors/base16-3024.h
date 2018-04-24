// Base16 3024 dark - simple terminal color setup
// Jan T. Sott (http://github.com/idleberg)
static const char *colorname[] = {
	/* Normal colors */
	"#090300", /*  0: Base 00 - Black   */
	"#db2d20", /*  1: Base 08 - Red     */
	"#01a252", /*  2: Base 0B - Green   */
	"#fded02", /*  3: Base 0A - Yellow  */
	"#01a0e4", /*  4: Base 0D - Blue    */
	"#a16a94", /*  5: Base 0E - Magenta */
	"#b5e4f4", /*  6: Base 0C - Cyan    */
	"#a5a2a2", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5c5855", /*  8: Base 03 - Bright Black */
	"#e8bbd0", /* 16: Base 09 */
	"#3a3432", /* 18: Base 01 */
	"#4a4543", /* 19: Base 02 */
	"#807d7c", /* 20: Base 04 */
	"#d6d5d4", /* 21: Base 06 */
	"#cdab53", /* 17: Base 0F */
	"#f7f7f7", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a5a2a2", /* default fg: Base 05 */
	[257] = "#090300", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
