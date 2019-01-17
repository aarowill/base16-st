// Base16 Material Vivid dark - simple terminal color setup
// joshyrobot
static const char *colorname[] = {
	/* Normal colors */
	"#202124", /*  0: Base 00 - Black   */
	"#f44336", /*  1: Base 08 - Red     */
	"#00e676", /*  2: Base 0B - Green   */
	"#ffeb3b", /*  3: Base 0A - Yellow  */
	"#2196f3", /*  4: Base 0D - Blue    */
	"#673ab7", /*  5: Base 0E - Magenta */
	"#00bcd4", /*  6: Base 0C - Cyan    */
	"#80868b", /*  7: Base 05 - White   */

	/* Bright colors */
	"#44464d", /*  8: Base 03 - Bright Black */
	"#f44336", /*  9: Base 08 - Red          */
	"#00e676", /* 10: Base 0B - Green        */
	"#ffeb3b", /* 11: Base 0A - Yellow       */
	"#2196f3", /* 12: Base 0D - Blue         */
	"#673ab7", /* 13: Base 0E - Magenta      */
	"#00bcd4", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff9800", /* 16: Base 09 */
	"#8d6e63", /* 17: Base 0F */
	"#27292c", /* 18: Base 01 */
	"#323639", /* 19: Base 02 */
	"#676c71", /* 20: Base 04 */
	"#9e9e9e", /* 21: Base 06 */

	[255] = 0,

	[256] = "#80868b", /* default fg: Base 05 */
	[257] = "#202124", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
