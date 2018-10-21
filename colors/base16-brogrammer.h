// Base16 Brogrammer dark - simple terminal color setup
// Vik Ramanujam (http://github.com/piggyslasher)
static const char *colorname[] = {
	/* Normal colors */
	"#1f1f1f", /*  0: Base 00 - Black   */
	"#d6dbe5", /*  1: Base 08 - Red     */
	"#f3bd09", /*  2: Base 0B - Green   */
	"#1dd361", /*  3: Base 0A - Yellow  */
	"#5350b9", /*  4: Base 0D - Blue    */
	"#0f7ddb", /*  5: Base 0E - Magenta */
	"#1081d6", /*  6: Base 0C - Cyan    */
	"#4e5ab7", /*  7: Base 05 - White   */

	/* Bright colors */
	"#ecba0f", /*  8: Base 03 - Bright Black */
	"#de352e", /* 16: Base 09 */
	"#f81118", /* 18: Base 01 */
	"#2dc55e", /* 19: Base 02 */
	"#2a84d2", /* 20: Base 04 */
	"#1081d6", /* 21: Base 06 */
	"#ffffff", /* 17: Base 0F */
	"#d6dbe5", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#4e5ab7", /* default fg: Base 05 */
	[257] = "#1f1f1f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
