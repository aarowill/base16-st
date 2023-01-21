// Base16 ShadeSmear Light dark - simple terminal color setup
// Kyle Giammarco (http://kyle.giammar.co)
static const char *colorname[] = {
	/* Normal colors */
	"#dbdbdb", /*  0: Base 00 - Black   */
	"#cc5450", /*  1: Base 08 - Red     */
	"#71983b", /*  2: Base 0B - Green   */
	"#307878", /*  3: Base 0A - Yellow  */
	"#376388", /*  4: Base 0D - Blue    */
	"#d7ab54", /*  5: Base 0E - Magenta */
	"#c57d42", /*  6: Base 0C - Cyan    */
	"#232323", /*  7: Base 05 - White   */

	/* Bright colors */
	"#4e4e4e", /*  8: Base 03 - Bright Black */
	"#a64270", /* 16: Base 09 */
	"#e4e4e4", /* 18: Base 01 */
	"#c0c0c0", /* 19: Base 02 */
	"#1c1c1c", /* 20: Base 04 */
	"#1c1c1c", /* 21: Base 06 */
	"#6d6d6d", /* 17: Base 0F */
	"#e4e4e4", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#232323", /* default fg: Base 05 */
	[257] = "#dbdbdb", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
