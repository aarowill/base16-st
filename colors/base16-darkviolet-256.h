// Base16 Dark Violet dark - simple terminal color setup
// ruler501 (https://github.com/ruler501/base16-darkviolet)
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#a82ee6", /*  1: Base 08 - Red     */
	"#4595e6", /*  2: Base 0B - Green   */
	"#f29df2", /*  3: Base 0A - Yellow  */
	"#4136d9", /*  4: Base 0D - Blue    */
	"#7e5ce6", /*  5: Base 0E - Magenta */
	"#40dfff", /*  6: Base 0C - Cyan    */
	"#b08ae6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#593380", /*  8: Base 03 - Bright Black */
	"#a82ee6", /*  9: Base 08 - Red          */
	"#4595e6", /* 10: Base 0B - Green        */
	"#f29df2", /* 11: Base 0A - Yellow       */
	"#4136d9", /* 12: Base 0D - Blue         */
	"#7e5ce6", /* 13: Base 0E - Magenta      */
	"#40dfff", /* 14: Base 0C - Cyan         */
	"#a366ff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#bb66cc", /* 16: Base 09 */
	"#a886bf", /* 17: Base 0F */
	"#231a40", /* 18: Base 01 */
	"#432d59", /* 19: Base 02 */
	"#00ff00", /* 20: Base 04 */
	"#9045e6", /* 21: Base 06 */

	[255] = 0,

	[256] = "#b08ae6", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
