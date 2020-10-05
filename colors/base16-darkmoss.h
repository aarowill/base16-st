// Base16 darkmoss dark - simple terminal color setup
// Gabriel Avanzi (https://github.com/avanzzzi)
static const char *colorname[] = {
	/* Normal colors */
	"#171e1f", /*  0: Base 00 - Black   */
	"#ff4658", /*  1: Base 08 - Red     */
	"#499180", /*  2: Base 0B - Green   */
	"#fdb11f", /*  3: Base 0A - Yellow  */
	"#498091", /*  4: Base 0D - Blue    */
	"#9bc0c8", /*  5: Base 0E - Magenta */
	"#66d9ef", /*  6: Base 0C - Cyan    */
	"#c7c7a5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#555e5f", /*  8: Base 03 - Bright Black */
	"#e6db74", /* 16: Base 09 */
	"#252c2d", /* 18: Base 01 */
	"#373c3d", /* 19: Base 02 */
	"#818f80", /* 20: Base 04 */
	"#e3e3c8", /* 21: Base 06 */
	"#d27b53", /* 17: Base 0F */
	"#e1eaef", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c7c7a5", /* default fg: Base 05 */
	[257] = "#171e1f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
