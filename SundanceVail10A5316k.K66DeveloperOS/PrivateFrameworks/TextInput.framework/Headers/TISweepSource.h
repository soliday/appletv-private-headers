/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface TISweepSource : NSObject {
	NSMutableDictionary *debugValues;	// 4 = 0x4
	int stepCount;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSMutableDictionary *debugValues;	// G=0x31f38b29; @synthesize
@property(assign, nonatomic) int stepCount;	// G=0x31f389d5; S=0x31f389e5; 
+ (id)sharedInstance;	// 0x31f38211
- (void)addValue:(id)value withMin:(float)min withMax:(float)max;	// 0x31f382a9
- (void)addValue:(id)value withValue:(float)value2;	// 0x31f38411
- (void)advanceSweep;	// 0x31f38739
- (void)dealloc;	// 0x31f38259
// declared property getter: - (id)debugValues;	// 0x31f38b29
- (BOOL)finished;	// 0x31f388b9
// declared property setter: - (void)setStepCount:(int)count;	// 0x31f389e5
// declared property getter: - (int)stepCount;	// 0x31f389d5
- (id)sweepStateHeader;	// 0x31f38521
- (id)sweepStateValues;	// 0x31f3860d
@end
