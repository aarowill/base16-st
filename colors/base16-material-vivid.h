// Base16 Material Vivid dark - simple terminal color setup
// joshyrobot
static const char *colorname[] = {
	/* Normal colors */
	"#263238", /*  0: Base 00 - Black   */
	"#ff1744", /*  1: Base 08 - Red     */
	"#00e676", /*  2: Base 0B - Green   */
	"#ffc400", /*  3: Base 0A - Yellow  */
	"#2979ff", /*  4: Base 0D - Blue    */
	"#651fff", /*  5: Base 0E - Magenta */
	"#00b0ff", /*  6: Base 0C - Cyan    */
	"#b0bec5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#546e7a", /*  8: Base 03 - Bright Black */
	"#ff9100", /* 16: Base 09 */
	"#37474f", /* 18: Base 01 */
	"#455a64", /* 19: Base 02 */
	"#90a4ae", /* 20: Base 04 */
	"#cfd8dc", /* 21: Base 06 */
	"#8d6e63", /* 17: Base 0F */
	"#eceff1", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#b0bec5", /* default fg: Base 05 */
	[257] = "#263238", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
