// Base16 Gruber dark - simple terminal color setup
// Patel, Nimai &lt;nimai.m.patel@gmail.com&gt;, colors from www.github.com/rexim/gruber-darker-theme
static const char *colorname[] = {
	/* Normal colors */
	"#181818", /*  0: Base 00 - Black   */
	"#f43841", /*  1: Base 08 - Red     */
	"#73c936", /*  2: Base 0B - Green   */
	"#ffdd33", /*  3: Base 0A - Yellow  */
	"#96a6c8", /*  4: Base 0D - Blue    */
	"#9e95c7", /*  5: Base 0E - Magenta */
	"#95a99f", /*  6: Base 0C - Cyan    */
	"#f4f4ff", /*  7: Base 05 - White   */

	/* Bright colors */
	"#52494e", /*  8: Base 03 - Bright Black */
	"#c73c3f", /* 16: Base 09 */
	"#453d41", /* 18: Base 01 */
	"#484848", /* 19: Base 02 */
	"#e4e4ef", /* 20: Base 04 */
	"#f5f5f5", /* 21: Base 06 */
	"#cc8c3c", /* 17: Base 0F */
	"#e4e4ef", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#f4f4ff", /* default fg: Base 05 */
	[257] = "#181818", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
