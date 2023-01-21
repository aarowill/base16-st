// Base16 Blueish dark - simple terminal color setup
// Ben Mayoras
static const char *colorname[] = {
	/* Normal colors */
	"#182430", /*  0: Base 00 - Black   */
	"#4ce587", /*  1: Base 08 - Red     */
	"#c3e88d", /*  2: Base 0B - Green   */
	"#82aaff", /*  3: Base 0A - Yellow  */
	"#82aaff", /*  4: Base 0D - Blue    */
	"#ff84dd", /*  5: Base 0E - Magenta */
	"#5fd1ff", /*  6: Base 0C - Cyan    */
	"#c8e1f8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#616d78", /*  8: Base 03 - Bright Black */
	"#4ce587", /*  9: Base 08 - Red          */
	"#c3e88d", /* 10: Base 0B - Green        */
	"#82aaff", /* 11: Base 0A - Yellow       */
	"#82aaff", /* 12: Base 0D - Blue         */
	"#ff84dd", /* 13: Base 0E - Magenta      */
	"#5fd1ff", /* 14: Base 0C - Cyan         */
	"#8f98a0", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f6a85c", /* 16: Base 09 */
	"#bbd2e8", /* 17: Base 0F */
	"#243c54", /* 18: Base 01 */
	"#46290a", /* 19: Base 02 */
	"#74afe7", /* 20: Base 04 */
	"#ddeaf6", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c8e1f8", /* default fg: Base 05 */
	[257] = "#182430", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
