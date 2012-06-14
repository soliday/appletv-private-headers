/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, OADGraphicProperties, CHDTitle;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject <EDKeyedObject> {
@private
	bool mReverseOrder;	// 4 = 0x4
	bool mSecondary;	// 5 = 0x5
	bool mDateTimeFormattingFlag;	// 6 = 0x6
	bool mLineVisible;	// 7 = 0x7
	bool mDeleted;	// 8 = 0x8
	bool mAutoMinimumValue;	// 9 = 0x9
	bool mAutoMaximumValue;	// 10 = 0xa
	bool mAutoCrossValue;	// 11 = 0xb
	bool mContentFormatDerived;	// 12 = 0xc
	int mAxisId;	// 16 = 0x10
	unsigned mContentFormatId;	// 20 = 0x14
	int mFontIndex;	// 24 = 0x18
	double mScalingMaximum;	// 28 = 0x1c
	double mScalingMinimum;	// 36 = 0x24
	int mOrientation;	// 44 = 0x2c
	double mCrossAxisId;	// 48 = 0x30
	double mCrossesAt;	// 56 = 0x38
	int mMajorTickMark;	// 64 = 0x40
	int mMinorTickMark;	// 68 = 0x44
	int mAxisPosition;	// 72 = 0x48
	int mAxisType;	// 76 = 0x4c
	int mTickLabelPosition;	// 80 = 0x50
	CHDTitle *mTitle;	// 84 = 0x54
	OADGraphicProperties *mMinorGridLinesGraphicProperties;	// 88 = 0x58
	OADGraphicProperties *mMajorGridLinesGraphicProperties;	// 92 = 0x5c
	OADGraphicProperties *mAxisGraphicProperties;	// 96 = 0x60
	int mCrossBetween;	// 100 = 0x64
	int mCrosses;	// 104 = 0x68
	double mTickLabelRotation;	// 108 = 0x6c
	bool mIsAutoRotation;	// 116 = 0x74
	int mTickLabelColorIndex;	// 120 = 0x78
	EDResources *mResources;	// 124 = 0x7c
}
@property(retain) id axisGraphicProperties;	// G=0x345d84ed; S=0x344dee1d; converted property
@property(assign) int axisId;	// G=0x345d83a1; S=0x344de7f1; converted property
@property(assign) int axisPosition;	// G=0x344eb6e1; S=0x344de835; converted property
@property(assign) int axisType;	// G=0x345d8495; S=0x344de801; converted property
@property(retain) id contentFormat;	// G=0x344e9a1d; S=0x344e9b5d; converted property
@property(assign) unsigned contentFormatId;	// G=0x345d856d; S=0x34527a59; converted property
@property(assign) double crossAxisId;	// G=0x345d8431; S=0x345d8449; converted property
@property(assign) int crossBetween;	// G=0x345d84fd; S=0x344e553d; converted property
@property(assign) int crosses;	// G=0x345d850d; S=0x345595f5; converted property
@property(assign) double crossesAt;	// G=0x345d845d; S=0x344e550d; converted property
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// G=0x345d8521; S=0x345d8531; converted property
@property(assign, getter=isDeleted) bool deleted;	// G=0x345d83c1; S=0x344e557d; converted property
@property(retain) id font;	// G=0x344ec2a9; S=0x3456f0d5; converted property
@property(assign) int fontIndex;	// G=0x345d857d; S=0x344de845; converted property
@property(assign) bool isContentFormatDerivedFromDataPoints;	// G=0x345d8401; S=0x344e9bf1; converted property
@property(assign, getter=isLineVisible) bool lineVisible;	// G=0x345d83b1; S=0x344e556d; converted property
@property(retain) id majorGridLinesGraphicProperties;	// G=0x344ec269; S=0x344df01d; converted property
@property(assign) int majorTickMark;	// G=0x345d8475; S=0x344dee65; converted property
@property(retain) id minorGridLinesGraphicProperties;	// G=0x345d84dd; S=0x344def95; converted property
@property(assign) int minorTickMark;	// G=0x345d8485; S=0x344dee75; converted property
@property(assign) int orientation;	// G=0x345d8411; S=0x345d8421; converted property
@property(assign, getter=isReverseOrder) bool reverseOrder;	// G=0x344e7981; S=0x344de799; converted property
@property(assign) double scalingMaximum;	// G=0x344ec291; S=0x344de749; converted property
@property(assign) double scalingMinimum;	// G=0x344ec279; S=0x344df6e9; converted property
@property(assign, getter=isSecondary) bool secondary;	// G=0x344eb6f1; S=0x3455bad5; converted property
@property(assign, getter=isTickLabelAutoRotation) bool tickLabelAutoRotation;	// G=0x345d8559; S=0x344dee9d; converted property
@property(assign) int tickLabelColorIndex;	// G=0x345d858d; S=0x344deec1; converted property
@property(assign) int tickLabelPosition;	// G=0x345d84a5; S=0x344dee85; converted property
@property(assign) double tickLabelRotationAngle;	// G=0x345d8541; S=0x344deead; converted property
@property(retain) id title;	// G=0x345d84cd; S=0x344dfbd1; converted property
- (id)initWithResources:(id)resources;	// 0x344de529
- (void)adjustAxisPositionForHorizontalChart;	// 0x345d8569
// converted property getter: - (id)axisGraphicProperties;	// 0x345d84ed
// converted property getter: - (int)axisId;	// 0x345d83a1
// converted property getter: - (int)axisPosition;	// 0x344eb6e1
// converted property getter: - (int)axisType;	// 0x345d8495
// converted property getter: - (id)contentFormat;	// 0x344e9a1d
// converted property getter: - (unsigned)contentFormatId;	// 0x345d856d
// converted property getter: - (double)crossAxisId;	// 0x345d8431
// converted property getter: - (int)crossBetween;	// 0x345d84fd
// converted property getter: - (int)crosses;	// 0x345d850d
// converted property getter: - (double)crossesAt;	// 0x345d845d
- (void)dealloc;	// 0x344eebcd
- (id)defaultDateTimeContentFormat;	// 0x345d859d
// converted property getter: - (id)font;	// 0x344ec2a9
// converted property getter: - (int)fontIndex;	// 0x345d857d
- (bool)isAutoCrossValue;	// 0x345d83f1
- (bool)isAutoMaximumValue;	// 0x345d83e1
- (bool)isAutoMinimumValue;	// 0x345d83d1
// converted property getter: - (bool)isContentFormatDerivedFromDataPoints;	// 0x345d8401
- (bool)isDate;	// 0x345d851d
// converted property getter: - (bool)isDateTimeFormattingFlag;	// 0x345d8521
// converted property getter: - (bool)isDeleted;	// 0x345d83c1
- (bool)isHorizontalPosition;	// 0x345598bd
// converted property getter: - (bool)isLineVisible;	// 0x345d83b1
// converted property getter: - (bool)isReverseOrder;	// 0x344e7981
// converted property getter: - (bool)isSecondary;	// 0x344eb6f1
// converted property getter: - (bool)isTickLabelAutoRotation;	// 0x345d8559
- (bool)isTickLabelVisible;	// 0x345d84b5
- (unsigned)key;	// 0x344df42d
// converted property getter: - (id)majorGridLinesGraphicProperties;	// 0x344ec269
// converted property getter: - (int)majorTickMark;	// 0x345d8475
// converted property getter: - (id)minorGridLinesGraphicProperties;	// 0x345d84dd
// converted property getter: - (int)minorTickMark;	// 0x345d8485
// converted property getter: - (int)orientation;	// 0x345d8411
// converted property getter: - (double)scalingMaximum;	// 0x344ec291
// converted property getter: - (double)scalingMinimum;	// 0x344ec279
// converted property setter: - (void)setAxisGraphicProperties:(id)properties;	// 0x344dee1d
// converted property setter: - (void)setAxisId:(int)anId;	// 0x344de7f1
// converted property setter: - (void)setAxisPosition:(int)position;	// 0x344de835
// converted property setter: - (void)setAxisType:(int)type;	// 0x344de801
// converted property setter: - (void)setContentFormat:(id)format;	// 0x344e9b5d
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x34527a59
// converted property setter: - (void)setCrossAxisId:(double)anId;	// 0x345d8449
// converted property setter: - (void)setCrossBetween:(int)between;	// 0x344e553d
// converted property setter: - (void)setCrosses:(int)crosses;	// 0x345595f5
// converted property setter: - (void)setCrossesAt:(double)at;	// 0x344e550d
// converted property setter: - (void)setDateTimeFormattingFlag:(bool)flag;	// 0x345d8531
// converted property setter: - (void)setDeleted:(bool)deleted;	// 0x344e557d
// converted property setter: - (void)setFont:(id)font;	// 0x3456f0d5
// converted property setter: - (void)setFontIndex:(int)index;	// 0x344de845
// converted property setter: - (void)setIsContentFormatDerivedFromDataPoints:(bool)dataPoints;	// 0x344e9bf1
// converted property setter: - (void)setLineVisible:(bool)visible;	// 0x344e556d
// converted property setter: - (void)setMajorGridLinesGraphicProperties:(id)properties;	// 0x344df01d
// converted property setter: - (void)setMajorTickMark:(int)mark;	// 0x344dee65
// converted property setter: - (void)setMinorGridLinesGraphicProperties:(id)properties;	// 0x344def95
// converted property setter: - (void)setMinorTickMark:(int)mark;	// 0x344dee75
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x345d8421
// converted property setter: - (void)setReverseOrder:(bool)order;	// 0x344de799
// converted property setter: - (void)setScalingMaximum:(double)maximum;	// 0x344de749
// converted property setter: - (void)setScalingMinimum:(double)minimum;	// 0x344df6e9
// converted property setter: - (void)setSecondary:(bool)secondary;	// 0x3455bad5
// converted property setter: - (void)setTickLabelAutoRotation:(bool)rotation;	// 0x344dee9d
// converted property setter: - (void)setTickLabelColorIndex:(int)index;	// 0x344deec1
// converted property setter: - (void)setTickLabelPosition:(int)position;	// 0x344dee85
// converted property setter: - (void)setTickLabelRotationAngle:(double)angle;	// 0x344deead
// converted property setter: - (void)setTitle:(id)title;	// 0x344dfbd1
- (id)tickLabelColor;	// 0x345d85d5
// converted property getter: - (int)tickLabelColorIndex;	// 0x345d858d
// converted property getter: - (int)tickLabelPosition;	// 0x345d84a5
// converted property getter: - (double)tickLabelRotationAngle;	// 0x345d8541
// converted property getter: - (id)title;	// 0x345d84cd
@end

