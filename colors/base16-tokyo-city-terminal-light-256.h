// Base16 Tokyo City Terminal Light dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#fbfbfd", /*  0: Base 00 - Black   */
	"#8c4351", /*  1: Base 08 - Red     */
	"#33635c", /*  2: Base 0B - Green   */
	"#8f5e15", /*  3: Base 0A - Yellow  */
	"#34548a", /*  4: Base 0D - Blue    */
	"#5a4a78", /*  5: Base 0E - Magenta */
	"#0f4b6e", /*  6: Base 0C - Cyan    */
	"#28323a", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b7c5d3", /*  8: Base 03 - Bright Black */
	"#8c4351", /*  9: Base 08 - Red          */
	"#33635c", /* 10: Base 0B - Green        */
	"#8f5e15", /* 11: Base 0A - Yellow       */
	"#34548a", /* 12: Base 0D - Blue         */
	"#5a4a78", /* 13: Base 0E - Magenta      */
	"#0f4b6e", /* 14: Base 0C - Cyan         */
	"#171d23", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#965027", /* 16: Base 09 */
	"#7e5140", /* 17: Base 0F */
	"#f6f6f8", /* 18: Base 01 */
	"#d8e2ec", /* 19: Base 02 */
	"#526270", /* 20: Base 04 */
	"#1d252c", /* 21: Base 06 */

	[255] = 0,

	[256] = "#28323a", /* default fg: Base 05 */
	[257] = "#fbfbfd", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
