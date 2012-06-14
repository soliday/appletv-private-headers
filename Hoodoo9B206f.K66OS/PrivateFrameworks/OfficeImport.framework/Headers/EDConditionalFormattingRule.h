/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, EDResources;

__attribute__((visibility("hidden")))
@interface EDConditionalFormattingRule : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mOperator;	// 12 = 0xc
	NSMutableArray *mFormulas;	// 16 = 0x10
	unsigned mDifferentialStyleIndex;	// 20 = 0x14
	bool mStopIfTrue;	// 24 = 0x18
	int mPriority;	// 28 = 0x1c
	bool mAboveAverage;	// 32 = 0x20
	bool mBottom;	// 33 = 0x21
	bool mEqualAverage;	// 34 = 0x22
	bool mPercent;	// 35 = 0x23
	unsigned mRank;	// 36 = 0x24
	int mStdDev;	// 40 = 0x28
	NSString *mText;	// 44 = 0x2c
	int mTimePeriod;	// 48 = 0x30
}
@property(assign) bool aboveAverage;	// G=0x345c16cd; S=0x345c16dd; converted property
@property(assign) bool bottom;	// G=0x345c16ed; S=0x345c16fd; converted property
@property(retain) id differentialStyle;	// G=0x345c1871; S=0x34482c61; converted property
@property(assign) unsigned differentialStyleIndex;	// G=0x345c17bd; S=0x345c17cd; converted property
@property(assign) bool equalAverage;	// G=0x345c170d; S=0x345c171d; converted property
@property(assign) int operatorEnum;	// G=0x345c168d; S=0x34480471; converted property
@property(assign) bool percent;	// G=0x345c172d; S=0x345c173d; converted property
@property(assign) int priority;	// G=0x345c16ad; S=0x345c16bd; converted property
@property(assign) unsigned rank;	// G=0x345c174d; S=0x345c175d; converted property
@property(assign) int stdDev;	// G=0x345c176d; S=0x345c177d; converted property
@property(assign) bool stopIfTrue;	// G=0x345c169d; S=0x34480411; converted property
@property(retain) id text;	// G=0x345c178d; S=0x345c1829; converted property
@property(assign) int timePeriod;	// G=0x345c179d; S=0x345c17ad; converted property
@property(assign) int type;	// G=0x345c167d; S=0x3448042d; converted property
+ (id)conditionalFormattingRuleWithResources:(id)resources;	// 0x345c17dd
- (id)initWithResources:(id)resources;	// 0x344802d5
// converted property getter: - (bool)aboveAverage;	// 0x345c16cd
- (void)addFormula:(id)formula worksheet:(id)worksheet;	// 0x34482705
// converted property getter: - (bool)bottom;	// 0x345c16ed
- (int)compareToOtherRuleUsingPriority:(id)otherRuleUsingPriority;	// 0x345c191d
- (void)dealloc;	// 0x344858c1
// converted property getter: - (id)differentialStyle;	// 0x345c1871
// converted property getter: - (unsigned)differentialStyleIndex;	// 0x345c17bd
// converted property getter: - (bool)equalAverage;	// 0x345c170d
- (id)formulaAtIndex:(unsigned)index;	// 0x345c18b9
- (unsigned)formulaCount;	// 0x345c18fd
// converted property getter: - (int)operatorEnum;	// 0x345c168d
// converted property getter: - (bool)percent;	// 0x345c172d
// converted property getter: - (int)priority;	// 0x345c16ad
// converted property getter: - (unsigned)rank;	// 0x345c174d
// converted property setter: - (void)setAboveAverage:(bool)average;	// 0x345c16dd
// converted property setter: - (void)setBottom:(bool)bottom;	// 0x345c16fd
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x34482c61
// converted property setter: - (void)setDifferentialStyleIndex:(unsigned)index;	// 0x345c17cd
// converted property setter: - (void)setEqualAverage:(bool)average;	// 0x345c171d
// converted property setter: - (void)setOperatorEnum:(int)anEnum;	// 0x34480471
// converted property setter: - (void)setPercent:(bool)percent;	// 0x345c173d
// converted property setter: - (void)setPriority:(int)priority;	// 0x345c16bd
// converted property setter: - (void)setRank:(unsigned)rank;	// 0x345c175d
// converted property setter: - (void)setStdDev:(int)dev;	// 0x345c177d
// converted property setter: - (void)setStopIfTrue:(bool)aTrue;	// 0x34480411
// converted property setter: - (void)setText:(id)text;	// 0x345c1829
// converted property setter: - (void)setTimePeriod:(int)period;	// 0x345c17ad
// converted property setter: - (void)setType:(int)type;	// 0x3448042d
// converted property getter: - (int)stdDev;	// 0x345c176d
// converted property getter: - (bool)stopIfTrue;	// 0x345c169d
// converted property getter: - (id)text;	// 0x345c178d
// converted property getter: - (int)timePeriod;	// 0x345c179d
// converted property getter: - (int)type;	// 0x345c167d
@end

