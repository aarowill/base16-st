// Base16 Black Metal (Khold) dark - simple terminal color setup
// metalelf0 (https://github.com/metalelf0)
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#5f8787", /*  1: Base 08 - Red     */
	"#eceee3", /*  2: Base 0B - Green   */
	"#974b46", /*  3: Base 0A - Yellow  */
	"#888888", /*  4: Base 0D - Blue    */
	"#999999", /*  5: Base 0E - Magenta */
	"#aaaaaa", /*  6: Base 0C - Cyan    */
	"#c1c1c1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#333333", /*  8: Base 03 - Bright Black */
	"#aaaaaa", /* 16: Base 09 */
	"#121212", /* 18: Base 01 */
	"#222222", /* 19: Base 02 */
	"#999999", /* 20: Base 04 */
	"#999999", /* 21: Base 06 */
	"#444444", /* 17: Base 0F */
	"#c1c1c1", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c1c1c1", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
