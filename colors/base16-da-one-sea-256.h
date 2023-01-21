// Base16 Da One Sea dark - simple terminal color setup
// NNB (https://github.com/NNBnh)
static const char *colorname[] = {
	/* Normal colors */
	"#22273d", /*  0: Base 00 - Black   */
	"#fa7883", /*  1: Base 08 - Red     */
	"#98c379", /*  2: Base 0B - Green   */
	"#ff9470", /*  3: Base 0A - Yellow  */
	"#6bb8ff", /*  4: Base 0D - Blue    */
	"#e799ff", /*  5: Base 0E - Magenta */
	"#8af5ff", /*  6: Base 0C - Cyan    */
	"#ffffff", /*  7: Base 05 - White   */

	/* Bright colors */
	"#878d96", /*  8: Base 03 - Bright Black */
	"#fa7883", /*  9: Base 08 - Red          */
	"#98c379", /* 10: Base 0B - Green        */
	"#ff9470", /* 11: Base 0A - Yellow       */
	"#6bb8ff", /* 12: Base 0D - Blue         */
	"#e799ff", /* 13: Base 0E - Magenta      */
	"#8af5ff", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ffc387", /* 16: Base 09 */
	"#b3684f", /* 17: Base 0F */
	"#374059", /* 18: Base 01 */
	"#525866", /* 19: Base 02 */
	"#c8c8c8", /* 20: Base 04 */
	"#ffffff", /* 21: Base 06 */

	[255] = 0,

	[256] = "#ffffff", /* default fg: Base 05 */
	[257] = "#22273d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
