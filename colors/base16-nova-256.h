// Base16 Nova dark - simple terminal color setup
// George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
static const char *colorname[] = {
	/* Normal colors */
	"#3c4c55", /*  0: Base 00 - Black   */
	"#83afe5", /*  1: Base 08 - Red     */
	"#7fc1ca", /*  2: Base 0B - Green   */
	"#a8ce93", /*  3: Base 0A - Yellow  */
	"#83afe5", /*  4: Base 0D - Blue    */
	"#9a93e1", /*  5: Base 0E - Magenta */
	"#f2c38f", /*  6: Base 0C - Cyan    */
	"#c5d4dd", /*  7: Base 05 - White   */

	/* Bright colors */
	"#899ba6", /*  8: Base 03 - Bright Black */
	"#83afe5", /*  9: Base 08 - Red          */
	"#7fc1ca", /* 10: Base 0B - Green        */
	"#a8ce93", /* 11: Base 0A - Yellow       */
	"#83afe5", /* 12: Base 0D - Blue         */
	"#9a93e1", /* 13: Base 0E - Magenta      */
	"#f2c38f", /* 14: Base 0C - Cyan         */
	"#556873", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#7fc1ca", /* 16: Base 09 */
	"#f2c38f", /* 17: Base 0F */
	"#556873", /* 18: Base 01 */
	"#6a7d89", /* 19: Base 02 */
	"#899ba6", /* 20: Base 04 */
	"#899ba6", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c5d4dd", /* default fg: Base 05 */
	[257] = "#3c4c55", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
