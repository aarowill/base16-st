// Base16 Humanoid dark dark - simple terminal color setup
// Thomas (tasmo) Friese
static const char *colorname[] = {
	/* Normal colors */
	"#232629", /*  0: Base 00 - Black   */
	"#f11235", /*  1: Base 08 - Red     */
	"#02d849", /*  2: Base 0B - Green   */
	"#ffb627", /*  3: Base 0A - Yellow  */
	"#00a6fb", /*  4: Base 0D - Blue    */
	"#f15ee3", /*  5: Base 0E - Magenta */
	"#0dd9d6", /*  6: Base 0C - Cyan    */
	"#f8f8f2", /*  7: Base 05 - White   */

	/* Bright colors */
	"#60615d", /*  8: Base 03 - Bright Black */
	"#f11235", /*  9: Base 08 - Red          */
	"#02d849", /* 10: Base 0B - Green        */
	"#ffb627", /* 11: Base 0A - Yellow       */
	"#00a6fb", /* 12: Base 0D - Blue         */
	"#f15ee3", /* 13: Base 0E - Magenta      */
	"#0dd9d6", /* 14: Base 0C - Cyan         */
	"#fcfcfc", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff9505", /* 16: Base 09 */
	"#b27701", /* 17: Base 0F */
	"#333b3d", /* 18: Base 01 */
	"#484e54", /* 19: Base 02 */
	"#c0c0bd", /* 20: Base 04 */
	"#fcfcf6", /* 21: Base 06 */

	[255] = 0,

	[256] = "#f8f8f2", /* default fg: Base 05 */
	[257] = "#232629", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
