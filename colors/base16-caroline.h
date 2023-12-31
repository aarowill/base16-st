// Base16 caroline dark - simple terminal color setup
// ed (https://codeberg.org/ed)
static const char *colorname[] = {
	/* Normal colors */
	"#1c1213", /*  0: Base 00 - Black   */
	"#c24f57", /*  1: Base 08 - Red     */
	"#806c61", /*  2: Base 0B - Green   */
	"#f28171", /*  3: Base 0A - Yellow  */
	"#684c59", /*  4: Base 0D - Blue    */
	"#a63650", /*  5: Base 0E - Magenta */
	"#6b6566", /*  6: Base 0C - Cyan    */
	"#a87569", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6d4745", /*  8: Base 03 - Bright Black */
	"#a63650", /* 16: Base 09 */
	"#3a2425", /* 18: Base 01 */
	"#563837", /* 19: Base 02 */
	"#8b5d57", /* 20: Base 04 */
	"#c58d7b", /* 21: Base 06 */
	"#893f45", /* 17: Base 0F */
	"#e3a68c", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a87569", /* default fg: Base 05 */
	[257] = "#1c1213", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
