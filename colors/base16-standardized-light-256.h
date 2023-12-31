// Base16 standardized-light dark - simple terminal color setup
// ali (https://github.com/ali-githb/base16-standardized-scheme)
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#d03e3e", /*  1: Base 08 - Red     */
	"#31861f", /*  2: Base 0B - Green   */
	"#ad8200", /*  3: Base 0A - Yellow  */
	"#3173c5", /*  4: Base 0D - Blue    */
	"#9e57c2", /*  5: Base 0E - Magenta */
	"#00998f", /*  6: Base 0C - Cyan    */
	"#444444", /*  7: Base 05 - White   */

	/* Bright colors */
	"#767676", /*  8: Base 03 - Bright Black */
	"#d03e3e", /*  9: Base 08 - Red          */
	"#31861f", /* 10: Base 0B - Green        */
	"#ad8200", /* 11: Base 0A - Yellow       */
	"#3173c5", /* 12: Base 0D - Blue         */
	"#9e57c2", /* 13: Base 0E - Magenta      */
	"#00998f", /* 14: Base 0C - Cyan         */
	"#222222", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d7691d", /* 16: Base 09 */
	"#895025", /* 17: Base 0F */
	"#eeeeee", /* 18: Base 01 */
	"#cccccc", /* 19: Base 02 */
	"#767676", /* 20: Base 04 */
	"#333333", /* 21: Base 06 */

	[255] = 0,

	[256] = "#444444", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
