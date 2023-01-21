// Base16 ShadeSmear Dark dark - simple terminal color setup
// Kyle Giammarco (http://kyle.giammar.co)
static const char *colorname[] = {
	/* Normal colors */
	"#232323", /*  0: Base 00 - Black   */
	"#cc5450", /*  1: Base 08 - Red     */
	"#71983b", /*  2: Base 0B - Green   */
	"#307878", /*  3: Base 0A - Yellow  */
	"#376388", /*  4: Base 0D - Blue    */
	"#d7ab54", /*  5: Base 0E - Magenta */
	"#c57d42", /*  6: Base 0C - Cyan    */
	"#dbdbdb", /*  7: Base 05 - White   */

	/* Bright colors */
	"#c0c0c0", /*  8: Base 03 - Bright Black */
	"#cc5450", /*  9: Base 08 - Red          */
	"#71983b", /* 10: Base 0B - Green        */
	"#307878", /* 11: Base 0A - Yellow       */
	"#376388", /* 12: Base 0D - Blue         */
	"#d7ab54", /* 13: Base 0E - Magenta      */
	"#c57d42", /* 14: Base 0C - Cyan         */
	"#1c1c1c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#a64270", /* 16: Base 09 */
	"#6d6d6d", /* 17: Base 0F */
	"#1c1c1c", /* 18: Base 01 */
	"#4e4e4e", /* 19: Base 02 */
	"#e4e4e4", /* 20: Base 04 */
	"#e4e4e4", /* 21: Base 06 */

	[255] = 0,

	[256] = "#dbdbdb", /* default fg: Base 05 */
	[257] = "#232323", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
