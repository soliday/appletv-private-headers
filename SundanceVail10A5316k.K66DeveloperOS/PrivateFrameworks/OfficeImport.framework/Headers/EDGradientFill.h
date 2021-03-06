/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDGradientFill : EDFill {
@private
	int mType;	// 8 = 0x8
	NSMutableDictionary *mStops;	// 12 = 0xc
	double mDegree;	// 16 = 0x10
	CGRect mFocusRect;	// 24 = 0x18
}
@property(assign) double degree;	// G=0x3122d69d; S=0x3122ba5d; converted property
@property(assign) CGRect focusRect;	// G=0x3122d6c5; S=0x3122ba75; converted property
@property(retain) id stops;	// G=0x3122d6b5; S=0x3122ba95; converted property
@property(assign) int type;	// G=0x3122d68d; S=0x3122ba49; converted property
+ (id)gradientWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x3122d8dd
+ (id)gradientWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x3122d7f1
- (id)initWithResources:(id)resources;	// 0x3122d439
- (id)initWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x3122d865
- (id)initWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x3122d70d
- (id).cxx_construct;	// 0x3122d709
- (id)colorForStopAtPosition:(id)position;	// 0x3122d6e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3122d501
- (void)dealloc;	// 0x3122d4b5
// converted property getter: - (double)degree;	// 0x3122d69d
// converted property getter: - (CGRect)focusRect;	// 0x3122d6c5
- (unsigned)hash;	// 0x3122d65d
- (bool)isEmpty;	// 0x3122d689
- (BOOL)isEqual:(id)equal;	// 0x3122d601
- (BOOL)isEqualToGradientFill:(id)gradientFill;	// 0x3122d555
// converted property setter: - (void)setDegree:(double)degree;	// 0x3122ba5d
// converted property setter: - (void)setFocusRect:(CGRect)rect;	// 0x3122ba75
- (void)setStopColor:(id)color atPosition:(id)position;	// 0x3122bad9
// converted property setter: - (void)setStops:(id)stops;	// 0x3122ba95
// converted property setter: - (void)setType:(int)type;	// 0x3122ba49
// converted property getter: - (id)stops;	// 0x3122d6b5
// converted property getter: - (int)type;	// 0x3122d68d
@end

