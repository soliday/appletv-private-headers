/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPEffectInternal : NSObject {
	float opacity;	// 4 = 0x4
	CGPoint position;	// 8 = 0x8
	float zPosition;	// 16 = 0x10
	CGSize size;	// 20 = 0x14
	float rotationAngle;	// 28 = 0x1c
	float xRotationAngle;	// 32 = 0x20
	float yRotationAngle;	// 36 = 0x24
	float scale;	// 40 = 0x28
	double timeIn;	// 44 = 0x2c
	double phaseInDuration;	// 52 = 0x34
	double phaseOutDuration;	// 60 = 0x3c
	double mainDuration;	// 68 = 0x44
	NSString *effectID;	// 76 = 0x4c
	NSString *presetID;	// 80 = 0x50
	int audioPriority;	// 84 = 0x54
	int randomSeed;	// 88 = 0x58
	NSString *uuid;	// 92 = 0x5c
	int liveIndex;	// 96 = 0x60
	BOOL cleaningUp;	// 100 = 0x64
}
@property(assign, nonatomic) int audioPriority;	// G=0x32063419; S=0x32063429; @synthesize
@property(assign, nonatomic) BOOL cleaningUp;	// G=0x320634cd; S=0x320634dd; @synthesize
@property(copy, nonatomic) NSString *effectID;	// G=0x320633b1; S=0x320633c1; @synthesize
@property(assign, nonatomic) int liveIndex;	// G=0x320634ad; S=0x320634bd; @synthesize
@property(assign, nonatomic) double mainDuration;	// G=0x32063385; S=0x3206339d; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x32063201; S=0x32063211; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x3206332d; S=0x32063345; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x32063359; S=0x32063371; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x32063221; S=0x3206323d; @synthesize
@property(copy, nonatomic) NSString *presetID;	// G=0x320633e5; S=0x320633f5; @synthesize
@property(assign, nonatomic) int randomSeed;	// G=0x32063439; S=0x32063449; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x320632a1; S=0x320632b1; @synthesize
@property(assign, nonatomic) float scale;	// G=0x3206348d; S=0x3206349d; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x32063271; S=0x3206328d; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x32063301; S=0x32063319; @synthesize
@property(copy, nonatomic) NSString *uuid;	// G=0x32063459; S=0x32063469; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x320632c1; S=0x320632d1; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x320632e1; S=0x320632f1; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x32063251; S=0x32063261; @synthesize
- (id)init;	// 0x32063111
// declared property getter: - (int)audioPriority;	// 0x32063419
// declared property getter: - (BOOL)cleaningUp;	// 0x320634cd
- (void)dealloc;	// 0x3206316d
// declared property getter: - (id)effectID;	// 0x320633b1
// declared property getter: - (int)liveIndex;	// 0x320634ad
// declared property getter: - (double)mainDuration;	// 0x32063385
// declared property getter: - (float)opacity;	// 0x32063201
// declared property getter: - (double)phaseInDuration;	// 0x3206332d
// declared property getter: - (double)phaseOutDuration;	// 0x32063359
// declared property getter: - (CGPoint)position;	// 0x32063221
// declared property getter: - (id)presetID;	// 0x320633e5
// declared property getter: - (int)randomSeed;	// 0x32063439
// declared property getter: - (float)rotationAngle;	// 0x320632a1
// declared property getter: - (float)scale;	// 0x3206348d
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x32063429
// declared property setter: - (void)setCleaningUp:(BOOL)up;	// 0x320634dd
// declared property setter: - (void)setEffectID:(id)anId;	// 0x320633c1
// declared property setter: - (void)setLiveIndex:(int)index;	// 0x320634bd
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x3206339d
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x32063211
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x32063345
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32063371
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x3206323d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x320633f5
// declared property setter: - (void)setRandomSeed:(int)seed;	// 0x32063449
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x320632b1
// declared property setter: - (void)setScale:(float)scale;	// 0x3206349d
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3206328d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x32063319
// declared property setter: - (void)setUuid:(id)uuid;	// 0x32063469
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x320632d1
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x320632f1
// declared property setter: - (void)setZPosition:(float)position;	// 0x32063261
// declared property getter: - (CGSize)size;	// 0x32063271
// declared property getter: - (double)timeIn;	// 0x32063301
// declared property getter: - (id)uuid;	// 0x32063459
// declared property getter: - (float)xRotationAngle;	// 0x320632c1
// declared property getter: - (float)yRotationAngle;	// 0x320632e1
// declared property getter: - (float)zPosition;	// 0x32063251
@end

