// Base16 pinky dark - simple terminal color setup
// Benjamin (https://github.com/b3nj5m1n)
static const char *colorname[] = {
	/* Normal colors */
	"#171517", /*  0: Base 00 - Black   */
	"#ffa600", /*  1: Base 08 - Red     */
	"#ff0066", /*  2: Base 0B - Green   */
	"#20df6c", /*  3: Base 0A - Yellow  */
	"#00ffff", /*  4: Base 0D - Blue    */
	"#007fff", /*  5: Base 0E - Magenta */
	"#6600ff", /*  6: Base 0C - Cyan    */
	"#f5f5f5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#383338", /*  8: Base 03 - Bright Black */
	"#00ff66", /* 16: Base 09 */
	"#1b181b", /* 18: Base 01 */
	"#1d1b1d", /* 19: Base 02 */
	"#e7dbdb", /* 20: Base 04 */
	"#ffffff", /* 21: Base 06 */
	"#df206c", /* 17: Base 0F */
	"#f7f3f7", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#f5f5f5", /* default fg: Base 05 */
	[257] = "#171517", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
