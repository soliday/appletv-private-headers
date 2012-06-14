/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject {
@private
	unsigned mOriginal : 1;	// 4 = 0x4
	unsigned mTracked : 1;	// 4 = 0x4
	unsigned mResolved : 1;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDText *mEvenPageHeader;	// 16 = 0x10
	WDText *mOddPageHeader;	// 20 = 0x14
	WDText *mFirstPageHeader;	// 24 = 0x18
	WDText *mEvenPageFooter;	// 28 = 0x1c
	WDText *mOddPageFooter;	// 32 = 0x20
	WDText *mFirstPageFooter;	// 36 = 0x24
	XXStruct_FH8jNC mOriginalProperties;	// 40 = 0x28
	XXStruct_FH8jNC mTrackedProperties;	// 176 = 0xb0
}
@property(assign) int borderDepth;	// G=0x313772c5; S=0x3121f9bd; converted property
@property(assign) int borderDisplay;	// G=0x3137740d; S=0x3121fa15; converted property
@property(assign) int borderOffset;	// G=0x31377555; S=0x3121fa6d; converted property
@property(assign) unsigned long bottomMargin;	// G=0x3121a479; S=0x31218f79; converted property
@property(assign) int breakType;	// G=0x31235101; S=0x3121f90d; converted property
@property(assign) int chapterNumberSeparator;	// G=0x31377fb1; S=0x31378041; converted property
@property(assign) unsigned short columnCount;	// G=0x31378151; S=0x3121fb7d; converted property
@property(assign) long columnSpace;	// G=0x31378281; S=0x3121fd3d; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x313781e5; S=0x31238bd5; converted property
@property(assign) unsigned long footerMargin;	// G=0x31376b11; S=0x312349b1; converted property
@property(retain) id formattingChangeDate;	// G=0x31378865; S=0x313789ad; converted property
@property(assign) BOOL formattingChanged;	// G=0x31378505; S=0x313785a1; converted property
@property(assign) unsigned long gutterMargin;	// G=0x31376c5d; S=0x31218fd1; converted property
@property(assign) unsigned long headerMargin;	// G=0x3121a9f1; S=0x3121f965; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x313786c1; S=0x31378755; converted property
@property(assign) unsigned long leftMargin;	// G=0x31183881; S=0x31218e71; converted property
@property(assign) short lineNumberDistance;	// G=0x31377935; S=0x31238b7d; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x313777e9; S=0x3125fc55; converted property
@property(assign) int lineNumberRestart;	// G=0x31377a81; S=0x3125fcad; converted property
@property(assign) short lineNumberStart;	// G=0x3137769d; S=0x312f3ff1; converted property
@property(assign) unsigned long pageHeight;	// G=0x31183bc9; S=0x31218e19; converted property
@property(assign) int pageNumberFormat;	// G=0x31377bc9; S=0x312a8651; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x31377e5d; S=0x3121fb1d; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x31377d11; S=0x3121fac5; converted property
@property(assign) int pageOrientation;	// G=0x31376911; S=0x31296785; converted property
@property(assign) unsigned long pageScale;	// G=0x31376771; S=0x31376801; converted property
@property(assign) unsigned long pageWidth;	// G=0x3121a0d5; S=0x31218dc1; converted property
@property(assign) int resolveMode;	// G=0x31219029; S=0x31218799; converted property
@property(assign) unsigned long rightMargin;	// G=0x3121a3e5; S=0x31218ec9; converted property
@property(assign) BOOL titlePage;	// G=0x3121ae79; S=0x31219129; converted property
@property(assign) unsigned long topMargin;	// G=0x311837ed; S=0x31218f21; converted property
@property(assign) int verticalJustification;	// G=0x313783bd; S=0x312ce2a5; converted property
- (id)initWithDocument:(id)document;	// 0x312140dd
- (void)appendColumnSpace:(unsigned long)space;	// 0x31238e15
- (void)appendColumnWidth:(unsigned long)width;	// 0x31238c91
// converted property getter: - (int)borderDepth;	// 0x313772c5
// converted property getter: - (int)borderDisplay;	// 0x3137740d
// converted property getter: - (int)borderOffset;	// 0x31377555
- (id)bottomBorder;	// 0x31377035
// converted property getter: - (unsigned long)bottomMargin;	// 0x3121a479
// converted property getter: - (int)breakType;	// 0x31235101
// converted property getter: - (int)chapterNumberSeparator;	// 0x31377fb1
// converted property getter: - (unsigned short)columnCount;	// 0x31378151
// converted property getter: - (long)columnSpace;	// 0x31378281
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x31378a75
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x31378c35
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x313781e5
- (void)dealloc;	// 0x31186a39
- (id)document;	// 0x31376761
- (id)evenPageFooter;	// 0x31183569
- (id)evenPageHeader;	// 0x31184065
- (id)firstPageFooter;	// 0x311834b5
- (id)firstPageHeader;	// 0x31184045
// converted property getter: - (unsigned long)footerMargin;	// 0x31376b11
// converted property getter: - (id)formattingChangeDate;	// 0x31378865
// converted property getter: - (BOOL)formattingChanged;	// 0x31378505
// converted property getter: - (unsigned long)gutterMargin;	// 0x31376c5d
// converted property getter: - (unsigned long)headerMargin;	// 0x3121a9f1
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x313786c1
- (BOOL)isBorderDepthOverridden;	// 0x31377355
- (BOOL)isBorderDisplayOverridden;	// 0x3137749d
- (BOOL)isBorderOffsetOverridden;	// 0x313775e5
- (BOOL)isBottomBorderOverridden;	// 0x313770c5
- (BOOL)isBottomMarginOverridden;	// 0x3121ab21
- (BOOL)isBreakTypeOverridden;	// 0x31183611
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x31378099
- (BOOL)isColumnCountOverridden;	// 0x31219071
- (BOOL)isColumnSpaceOverridden;	// 0x31378315
- (BOOL)isColumnsEqualWidthOverridden;	// 0x3127bc89
- (BOOL)isFooterMarginOverridden;	// 0x31376ba5
- (BOOL)isFormattingChangeDateOverridden;	// 0x313788f5
- (BOOL)isFormattingChangedOverridden;	// 0x31378609
- (BOOL)isGutterMarginOverridden;	// 0x31376ced
- (BOOL)isHeaderMarginOverridden;	// 0x31376a59
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x313787ad
- (BOOL)isLastColumnWidthDefined;	// 0x31378b6d
- (BOOL)isLeftBorderOverridden;	// 0x31376f7d
- (BOOL)isLeftMarginOverridden;	// 0x3121a5a9
- (BOOL)isLineNumberDistanceOverridden;	// 0x313779c9
- (BOOL)isLineNumberIncrementOverridden;	// 0x3137787d
- (BOOL)isLineNumberRestartOverridden;	// 0x31377b11
- (BOOL)isLineNumberStartOverridden;	// 0x31377731
- (BOOL)isPageHeightOverridden;	// 0x3121a165
- (BOOL)isPageNumberFormatOverridden;	// 0x31377c59
- (BOOL)isPageNumberRestartOverridden;	// 0x31377ef9
- (BOOL)isPageNumberStartOverridden;	// 0x31377da5
- (BOOL)isPageOrientationOverridden;	// 0x313769a1
- (BOOL)isPageScaleOverridden;	// 0x31376859
- (BOOL)isPageWidthOverridden;	// 0x3121a01d
- (BOOL)isRightBorderOverridden;	// 0x3137720d
- (BOOL)isRightMarginOverridden;	// 0x3121a6fd
- (BOOL)isTitlePageOverridden;	// 0x31183915
- (BOOL)isTopBorderOverridden;	// 0x31376e35
- (BOOL)isTopMarginOverridden;	// 0x3121a851
- (BOOL)isVerticalJustificationOverridden;	// 0x3137844d
- (id)leftBorder;	// 0x31376eed
// converted property getter: - (unsigned long)leftMargin;	// 0x31183881
// converted property getter: - (short)lineNumberDistance;	// 0x31377935
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x313777e9
// converted property getter: - (int)lineNumberRestart;	// 0x31377a81
// converted property getter: - (short)lineNumberStart;	// 0x3137769d
- (id)mutableBottomBorder;	// 0x312dff79
- (id)mutableLeftBorder;	// 0x312dfea5
- (id)mutableRightBorder;	// 0x312e004d
- (id)mutableTopBorder;	// 0x312dfdd1
- (id)oddPageFooter;	// 0x31183559
- (id)oddPageHeader;	// 0x31184055
// converted property getter: - (unsigned long)pageHeight;	// 0x31183bc9
// converted property getter: - (int)pageNumberFormat;	// 0x31377bc9
// converted property getter: - (BOOL)pageNumberRestart;	// 0x31377e5d
// converted property getter: - (unsigned short)pageNumberStart;	// 0x31377d11
// converted property getter: - (int)pageOrientation;	// 0x31376911
// converted property getter: - (unsigned long)pageScale;	// 0x31376771
// converted property getter: - (unsigned long)pageWidth;	// 0x3121a0d5
// converted property getter: - (int)resolveMode;	// 0x31219029
- (id)rightBorder;	// 0x3137717d
// converted property getter: - (unsigned long)rightMargin;	// 0x3121a3e5
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x3121f9bd
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x3121fa15
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x3121fa6d
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x31218f79
// converted property setter: - (void)setBreakType:(int)type;	// 0x3121f90d
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x31378041
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x3121fb7d
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x3121fd3d
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x31238bd5
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x312349b1
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x313789ad
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x313785a1
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x31218fd1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x3121f965
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x31378755
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x31218e71
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x31238b7d
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x3125fc55
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x3125fcad
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x312f3ff1
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x31218e19
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x312a8651
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x3121fb1d
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x3121fac5
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x31296785
// converted property setter: - (void)setPageScale:(unsigned long)scale;	// 0x31376801
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x31218dc1
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x31218799
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x31218ec9
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x31219129
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x31218f21
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x312ce2a5
- (id)text;	// 0x31183ccd
// converted property getter: - (BOOL)titlePage;	// 0x3121ae79
- (id)topBorder;	// 0x31376da5
// converted property getter: - (unsigned long)topMargin;	// 0x311837ed
// converted property getter: - (int)verticalJustification;	// 0x313783bd
@end

