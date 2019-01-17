// Base16 Fruit Soda dark - simple terminal color setup
// jozip
static const char *colorname[] = {
	/* Normal colors */
	"#f1ecf1", /*  0: Base 00 - Black   */
	"#fe3e31", /*  1: Base 08 - Red     */
	"#47f74c", /*  2: Base 0B - Green   */
	"#f7e203", /*  3: Base 0A - Yellow  */
	"#2931df", /*  4: Base 0D - Blue    */
	"#611fce", /*  5: Base 0E - Magenta */
	"#0f9cfd", /*  6: Base 0C - Cyan    */
	"#515151", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b5b4b6", /*  8: Base 03 - Bright Black */
	"#fe3e31", /*  9: Base 08 - Red          */
	"#47f74c", /* 10: Base 0B - Green        */
	"#f7e203", /* 11: Base 0A - Yellow       */
	"#2931df", /* 12: Base 0D - Blue         */
	"#611fce", /* 13: Base 0E - Magenta      */
	"#0f9cfd", /* 14: Base 0C - Cyan         */
	"#2d2c2c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fe6d08", /* 16: Base 09 */
	"#b16f40", /* 17: Base 0F */
	"#e0dee0", /* 18: Base 01 */
	"#d8d5d5", /* 19: Base 02 */
	"#979598", /* 20: Base 04 */
	"#474545", /* 21: Base 06 */

	[255] = 0,

	[256] = "#515151", /* default fg: Base 05 */
	[257] = "#f1ecf1", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
