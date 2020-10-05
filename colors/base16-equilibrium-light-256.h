// Base16 Equilibrium Light dark - simple terminal color setup
// Carlo Abelli
static const char *colorname[] = {
	/* Normal colors */
	"#f5f0e7", /*  0: Base 00 - Black   */
	"#d02023", /*  1: Base 08 - Red     */
	"#637200", /*  2: Base 0B - Green   */
	"#9d6f00", /*  3: Base 0A - Yellow  */
	"#0073b5", /*  4: Base 0D - Blue    */
	"#4e66b6", /*  5: Base 0E - Magenta */
	"#007a72", /*  6: Base 0C - Cyan    */
	"#43474e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#73777f", /*  8: Base 03 - Bright Black */
	"#d02023", /*  9: Base 08 - Red          */
	"#637200", /* 10: Base 0B - Green        */
	"#9d6f00", /* 11: Base 0A - Yellow       */
	"#0073b5", /* 12: Base 0D - Blue         */
	"#4e66b6", /* 13: Base 0E - Magenta      */
	"#007a72", /* 14: Base 0C - Cyan         */
	"#181c22", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#bf3e05", /* 16: Base 09 */
	"#c42775", /* 17: Base 0F */
	"#e7e2d9", /* 18: Base 01 */
	"#d8d4cb", /* 19: Base 02 */
	"#5a5f66", /* 20: Base 04 */
	"#2c3138", /* 21: Base 06 */

	[255] = 0,

	[256] = "#43474e", /* default fg: Base 05 */
	[257] = "#f5f0e7", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
