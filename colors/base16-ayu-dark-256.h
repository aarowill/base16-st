// Base16 Ayu Dark dark - simple terminal color setup
// Khue Nguyen &lt;Z5483Y@gmail.com&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#0f1419", /*  0: Base 00 - Black   */
	"#f07178", /*  1: Base 08 - Red     */
	"#b8cc52", /*  2: Base 0B - Green   */
	"#ffb454", /*  3: Base 0A - Yellow  */
	"#59c2ff", /*  4: Base 0D - Blue    */
	"#d2a6ff", /*  5: Base 0E - Magenta */
	"#95e6cb", /*  6: Base 0C - Cyan    */
	"#e6e1cf", /*  7: Base 05 - White   */

	/* Bright colors */
	"#3e4b59", /*  8: Base 03 - Bright Black */
	"#f07178", /*  9: Base 08 - Red          */
	"#b8cc52", /* 10: Base 0B - Green        */
	"#ffb454", /* 11: Base 0A - Yellow       */
	"#59c2ff", /* 12: Base 0D - Blue         */
	"#d2a6ff", /* 13: Base 0E - Magenta      */
	"#95e6cb", /* 14: Base 0C - Cyan         */
	"#f3f4f5", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff8f40", /* 16: Base 09 */
	"#e6b673", /* 17: Base 0F */
	"#131721", /* 18: Base 01 */
	"#272d38", /* 19: Base 02 */
	"#bfbdb6", /* 20: Base 04 */
	"#e6e1cf", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e6e1cf", /* default fg: Base 05 */
	[257] = "#0f1419", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
