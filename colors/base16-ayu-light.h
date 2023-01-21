// Base16 Ayu Light dark - simple terminal color setup
// Khue Nguyen &lt;Z5483Y@gmail.com&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#fafafa", /*  0: Base 00 - Black   */
	"#f07178", /*  1: Base 08 - Red     */
	"#86b300", /*  2: Base 0B - Green   */
	"#f2ae49", /*  3: Base 0A - Yellow  */
	"#36a3d9", /*  4: Base 0D - Blue    */
	"#a37acc", /*  5: Base 0E - Magenta */
	"#4cbf99", /*  6: Base 0C - Cyan    */
	"#5c6773", /*  7: Base 05 - White   */

	/* Bright colors */
	"#abb0b6", /*  8: Base 03 - Bright Black */
	"#fa8d3e", /* 16: Base 09 */
	"#f3f4f5", /* 18: Base 01 */
	"#f8f9fa", /* 19: Base 02 */
	"#828c99", /* 20: Base 04 */
	"#242936", /* 21: Base 06 */
	"#e6ba7e", /* 17: Base 0F */
	"#1a1f29", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#5c6773", /* default fg: Base 05 */
	[257] = "#fafafa", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
