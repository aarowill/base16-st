// Base16 standardized-dark dark - simple terminal color setup
// ali (https://github.com/ali-githb/base16-standardized-scheme)
static const char *colorname[] = {
	/* Normal colors */
	"#222222", /*  0: Base 00 - Black   */
	"#e15d67", /*  1: Base 08 - Red     */
	"#5db129", /*  2: Base 0B - Green   */
	"#e1b31a", /*  3: Base 0A - Yellow  */
	"#00a3f2", /*  4: Base 0D - Blue    */
	"#b46ee0", /*  5: Base 0E - Magenta */
	"#21c992", /*  6: Base 0C - Cyan    */
	"#c0c0c0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#898989", /*  8: Base 03 - Bright Black */
	"#e15d67", /*  9: Base 08 - Red          */
	"#5db129", /* 10: Base 0B - Green        */
	"#e1b31a", /* 11: Base 0A - Yellow       */
	"#00a3f2", /* 12: Base 0D - Blue         */
	"#b46ee0", /* 13: Base 0E - Magenta      */
	"#21c992", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fc804e", /* 16: Base 09 */
	"#b87d28", /* 17: Base 0F */
	"#303030", /* 18: Base 01 */
	"#555555", /* 19: Base 02 */
	"#898989", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c0c0c0", /* default fg: Base 05 */
	[257] = "#222222", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
