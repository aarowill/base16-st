// Base16 Windows 10 Light dark - simple terminal color setup
// Fergus Collins (https://github.com/C-Fergus)
static const char *colorname[] = {
	/* Normal colors */
	"#f2f2f2", /*  0: Base 00 - Black   */
	"#c50f1f", /*  1: Base 08 - Red     */
	"#13a10e", /*  2: Base 0B - Green   */
	"#c19c00", /*  3: Base 0A - Yellow  */
	"#0037da", /*  4: Base 0D - Blue    */
	"#881798", /*  5: Base 0E - Magenta */
	"#3a96dd", /*  6: Base 0C - Cyan    */
	"#767676", /*  7: Base 05 - White   */

	/* Bright colors */
	"#cccccc", /*  8: Base 03 - Bright Black */
	"#f9f1a5", /* 16: Base 09 */
	"#e5e5e5", /* 18: Base 01 */
	"#d9d9d9", /* 19: Base 02 */
	"#ababab", /* 20: Base 04 */
	"#414141", /* 21: Base 06 */
	"#16c60c", /* 17: Base 0F */
	"#0c0c0c", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#767676", /* default fg: Base 05 */
	[257] = "#f2f2f2", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
