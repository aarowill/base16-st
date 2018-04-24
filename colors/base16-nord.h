// Base16 Nord dark - simple terminal color setup
// arcticicestudio
static const char *colorname[] = {
	/* Normal colors */
	"#2e3440", /*  0: Base 00 - Black   */
	"#88c0d0", /*  1: Base 08 - Red     */
	"#bf616a", /*  2: Base 0B - Green   */
	"#5e81ac", /*  3: Base 0A - Yellow  */
	"#ebcb8b", /*  4: Base 0D - Blue    */
	"#a3be8c", /*  5: Base 0E - Magenta */
	"#d08770", /*  6: Base 0C - Cyan    */
	"#e5e9f0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#4c566a", /*  8: Base 03 - Bright Black */
	"#81a1c1", /* 16: Base 09 */
	"#3b4252", /* 18: Base 01 */
	"#434c5e", /* 19: Base 02 */
	"#d8dee9", /* 20: Base 04 */
	"#eceff4", /* 21: Base 06 */
	"#b48ead", /* 17: Base 0F */
	"#8fbcbb", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#e5e9f0", /* default fg: Base 05 */
	[257] = "#2e3440", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
