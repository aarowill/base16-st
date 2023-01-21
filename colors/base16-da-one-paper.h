// Base16 Da One Paper dark - simple terminal color setup
// NNB (https://github.com/NNBnh)
static const char *colorname[] = {
	/* Normal colors */
	"#faf0dc", /*  0: Base 00 - Black   */
	"#de5d6e", /*  1: Base 08 - Red     */
	"#76a85d", /*  2: Base 0B - Green   */
	"#b3684f", /*  3: Base 0A - Yellow  */
	"#5890f8", /*  4: Base 0D - Blue    */
	"#c173d1", /*  5: Base 0E - Magenta */
	"#64b5a7", /*  6: Base 0C - Cyan    */
	"#181818", /*  7: Base 05 - White   */

	/* Bright colors */
	"#585858", /*  8: Base 03 - Bright Black */
	"#ff9470", /* 16: Base 09 */
	"#c8c8c8", /* 18: Base 01 */
	"#888888", /* 19: Base 02 */
	"#282828", /* 20: Base 04 */
	"#000000", /* 21: Base 06 */
	"#b3684f", /* 17: Base 0F */
	"#000000", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#181818", /* default fg: Base 05 */
	[257] = "#faf0dc", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
