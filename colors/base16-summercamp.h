// Base16 summercamp dark - simple terminal color setup
// zoe firi (zoefiri.github.io)
static const char *colorname[] = {
	/* Normal colors */
	"#1c1810", /*  0: Base 00 - Black   */
	"#e35142", /*  1: Base 08 - Red     */
	"#5ceb5a", /*  2: Base 0B - Green   */
	"#f2ff27", /*  3: Base 0A - Yellow  */
	"#489bf0", /*  4: Base 0D - Blue    */
	"#ff8080", /*  5: Base 0E - Magenta */
	"#5aebbc", /*  6: Base 0C - Cyan    */
	"#736e55", /*  7: Base 05 - White   */

	/* Bright colors */
	"#504b38", /*  8: Base 03 - Bright Black */
	"#fba11b", /* 16: Base 09 */
	"#2a261c", /* 18: Base 01 */
	"#3a3527", /* 19: Base 02 */
	"#5f5b45", /* 20: Base 04 */
	"#bab696", /* 21: Base 06 */
	"#f69be7", /* 17: Base 0F */
	"#f8f5de", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#736e55", /* default fg: Base 05 */
	[257] = "#1c1810", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
