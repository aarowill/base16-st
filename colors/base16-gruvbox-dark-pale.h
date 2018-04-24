// Base16 Gruvbox dark, pale dark - simple terminal color setup
// Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
static const char *colorname[] = {
	/* Normal colors */
	"#262626", /*  0: Base 00 - Black   */
	"#d75f5f", /*  1: Base 08 - Red     */
	"#afaf00", /*  2: Base 0B - Green   */
	"#ffaf00", /*  3: Base 0A - Yellow  */
	"#83adad", /*  4: Base 0D - Blue    */
	"#d485ad", /*  5: Base 0E - Magenta */
	"#85ad85", /*  6: Base 0C - Cyan    */
	"#dab997", /*  7: Base 05 - White   */

	/* Bright colors */
	"#8a8a8a", /*  8: Base 03 - Bright Black */
	"#ff8700", /* 16: Base 09 */
	"#3a3a3a", /* 18: Base 01 */
	"#4e4e4e", /* 19: Base 02 */
	"#949494", /* 20: Base 04 */
	"#d5c4a1", /* 21: Base 06 */
	"#d65d0e", /* 17: Base 0F */
	"#ebdbb2", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#dab997", /* default fg: Base 05 */
	[257] = "#262626", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
