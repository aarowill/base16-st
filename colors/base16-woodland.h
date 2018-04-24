// Base16 Woodland dark - simple terminal color setup
// Jay Cornwall (https://jcornwall.com)
static const char *colorname[] = {
	/* Normal colors */
	"#231e18", /*  0: Base 00 - Black   */
	"#d35c5c", /*  1: Base 08 - Red     */
	"#b7ba53", /*  2: Base 0B - Green   */
	"#e0ac16", /*  3: Base 0A - Yellow  */
	"#88a4d3", /*  4: Base 0D - Blue    */
	"#bb90e2", /*  5: Base 0E - Magenta */
	"#6eb958", /*  6: Base 0C - Cyan    */
	"#cabcb1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9d8b70", /*  8: Base 03 - Bright Black */
	"#ca7f32", /* 16: Base 09 */
	"#302b25", /* 18: Base 01 */
	"#48413a", /* 19: Base 02 */
	"#b4a490", /* 20: Base 04 */
	"#d7c8bc", /* 21: Base 06 */
	"#b49368", /* 17: Base 0F */
	"#e4d4c8", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#cabcb1", /* default fg: Base 05 */
	[257] = "#231e18", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
