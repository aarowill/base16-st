// Base16 vice dark - simple terminal color setup
// Thomas Leon Highbaugh thighbaugh@zoho.com
static const char *colorname[] = {
	/* Normal colors */
	"#17191e", /*  0: Base 00 - Black   */
	"#ff29a8", /*  1: Base 08 - Red     */
	"#0badff", /*  2: Base 0B - Green   */
	"#f0ffaa", /*  3: Base 0A - Yellow  */
	"#00eaff", /*  4: Base 0D - Blue    */
	"#00f6d9", /*  5: Base 0E - Magenta */
	"#8265ff", /*  6: Base 0C - Cyan    */
	"#8b9cbe", /*  7: Base 05 - White   */

	/* Bright colors */
	"#383a47", /*  8: Base 03 - Bright Black */
	"#85ffe0", /* 16: Base 09 */
	"#22262d", /* 18: Base 01 */
	"#3c3f4c", /* 19: Base 02 */
	"#555e70", /* 20: Base 04 */
	"#b2bfd9", /* 21: Base 06 */
	"#ff3d81", /* 17: Base 0F */
	"#f4f4f7", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#8b9cbe", /* default fg: Base 05 */
	[257] = "#17191e", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
