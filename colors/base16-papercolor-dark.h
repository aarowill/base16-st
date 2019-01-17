// Base16 PaperColor Dark dark - simple terminal color setup
// Jon Leopard (http://github.com/jonleopard) based on PaperColor Theme (https://github.com/NLKNguyen/papercolor-theme)
static const char *colorname[] = {
	/* Normal colors */
	"#1c1c1c", /*  0: Base 00 - Black   */
	"#585858", /*  1: Base 08 - Red     */
	"#af87d7", /*  2: Base 0B - Green   */
	"#afd700", /*  3: Base 0A - Yellow  */
	"#ff5faf", /*  4: Base 0D - Blue    */
	"#00afaf", /*  5: Base 0E - Magenta */
	"#ffaf00", /*  6: Base 0C - Cyan    */
	"#808080", /*  7: Base 05 - White   */

	/* Bright colors */
	"#d7af5f", /*  8: Base 03 - Bright Black */
	"#5faf5f", /* 16: Base 09 */
	"#af005f", /* 18: Base 01 */
	"#5faf00", /* 19: Base 02 */
	"#5fafd7", /* 20: Base 04 */
	"#d7875f", /* 21: Base 06 */
	"#5f8787", /* 17: Base 0F */
	"#d0d0d0", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#808080", /* default fg: Base 05 */
	[257] = "#1c1c1c", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
