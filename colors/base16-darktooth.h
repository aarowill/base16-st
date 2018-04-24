// Base16 Darktooth dark - simple terminal color setup
// Jason Milkins (https://github.com/jasonm23)
static const char *colorname[] = {
	/* Normal colors */
	"#1d2021", /*  0: Base 00 - Black   */
	"#fb543f", /*  1: Base 08 - Red     */
	"#95c085", /*  2: Base 0B - Green   */
	"#fac03b", /*  3: Base 0A - Yellow  */
	"#0d6678", /*  4: Base 0D - Blue    */
	"#8f4673", /*  5: Base 0E - Magenta */
	"#8ba59b", /*  6: Base 0C - Cyan    */
	"#a89984", /*  7: Base 05 - White   */

	/* Bright colors */
	"#665c54", /*  8: Base 03 - Bright Black */
	"#fe8625", /* 16: Base 09 */
	"#32302f", /* 18: Base 01 */
	"#504945", /* 19: Base 02 */
	"#928374", /* 20: Base 04 */
	"#d5c4a1", /* 21: Base 06 */
	"#a87322", /* 17: Base 0F */
	"#fdf4c1", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a89984", /* default fg: Base 05 */
	[257] = "#1d2021", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
