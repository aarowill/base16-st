// Base16 Mellow Purple dark - simple terminal color setup
// gidsi
static const char *colorname[] = {
	/* Normal colors */
	"#1e0528", /*  0: Base 00 - Black   */
	"#00d9e9", /*  1: Base 08 - Red     */
	"#05cb0d", /*  2: Base 0B - Green   */
	"#955ae7", /*  3: Base 0A - Yellow  */
	"#550068", /*  4: Base 0D - Blue    */
	"#8991bb", /*  5: Base 0E - Magenta */
	"#b900b1", /*  6: Base 0C - Cyan    */
	"#ffeeff", /*  7: Base 05 - White   */

	/* Bright colors */
	"#320f55", /*  8: Base 03 - Bright Black */
	"#00d9e9", /*  9: Base 08 - Red          */
	"#05cb0d", /* 10: Base 0B - Green        */
	"#955ae7", /* 11: Base 0A - Yellow       */
	"#550068", /* 12: Base 0D - Blue         */
	"#8991bb", /* 13: Base 0E - Magenta      */
	"#b900b1", /* 14: Base 0C - Cyan         */
	"#f8c0ff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#aa00a3", /* 16: Base 09 */
	"#4d6fff", /* 17: Base 0F */
	"#1a092d", /* 18: Base 01 */
	"#331354", /* 19: Base 02 */
	"#873582", /* 20: Base 04 */
	"#ffeeff", /* 21: Base 06 */

	[255] = 0,

	[256] = "#ffeeff", /* default fg: Base 05 */
	[257] = "#1e0528", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
