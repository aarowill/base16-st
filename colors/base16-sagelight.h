// Base16 Sagelight dark - simple terminal color setup
// Carter Veldhuizen
static const char *colorname[] = {
	/* Normal colors */
	"#f8f8f8", /*  0: Base 00 - Black   */
	"#fa8480", /*  1: Base 08 - Red     */
	"#a0d2c8", /*  2: Base 0B - Green   */
	"#ffdc61", /*  3: Base 0A - Yellow  */
	"#a0a7d2", /*  4: Base 0D - Blue    */
	"#c8a0d2", /*  5: Base 0E - Magenta */
	"#a2d6f5", /*  6: Base 0C - Cyan    */
	"#383838", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b8b8b8", /*  8: Base 03 - Bright Black */
	"#ffaa61", /* 16: Base 09 */
	"#e8e8e8", /* 18: Base 01 */
	"#d8d8d8", /* 19: Base 02 */
	"#585858", /* 20: Base 04 */
	"#282828", /* 21: Base 06 */
	"#d2b2a0", /* 17: Base 0F */
	"#181818", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#383838", /* default fg: Base 05 */
	[257] = "#f8f8f8", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
