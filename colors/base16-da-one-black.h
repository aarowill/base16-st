// Base16 Da One Black dark - simple terminal color setup
// NNB (https://github.com/NNBnh)
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#fa7883", /*  1: Base 08 - Red     */
	"#98c379", /*  2: Base 0B - Green   */
	"#ff9470", /*  3: Base 0A - Yellow  */
	"#6bb8ff", /*  4: Base 0D - Blue    */
	"#e799ff", /*  5: Base 0E - Magenta */
	"#8af5ff", /*  6: Base 0C - Cyan    */
	"#ffffff", /*  7: Base 05 - White   */

	/* Bright colors */
	"#888888", /*  8: Base 03 - Bright Black */
	"#ffc387", /* 16: Base 09 */
	"#282828", /* 18: Base 01 */
	"#585858", /* 19: Base 02 */
	"#c8c8c8", /* 20: Base 04 */
	"#ffffff", /* 21: Base 06 */
	"#b3684f", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#ffffff", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
