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
@property(assign, nonatomic) int audioPriority;	// G=0x309bf419; S=0x309bf429; @synthesize
@property(assign, nonatomic) BOOL cleaningUp;	// G=0x309bf4cd; S=0x309bf4dd; @synthesize
@property(copy, nonatomic) NSString *effectID;	// G=0x309bf3b1; S=0x309bf3c1; @synthesize
@property(assign, nonatomic) int liveIndex;	// G=0x309bf4ad; S=0x309bf4bd; @synthesize
@property(assign, nonatomic) double mainDuration;	// G=0x309bf385; S=0x309bf39d; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x309bf201; S=0x309bf211; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x309bf32d; S=0x309bf345; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x309bf359; S=0x309bf371; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x309bf221; S=0x309bf23d; @synthesize
@property(copy, nonatomic) NSString *presetID;	// G=0x309bf3e5; S=0x309bf3f5; @synthesize
@property(assign, nonatomic) int randomSeed;	// G=0x309bf439; S=0x309bf449; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x309bf2a1; S=0x309bf2b1; @synthesize
@property(assign, nonatomic) float scale;	// G=0x309bf48d; S=0x309bf49d; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x309bf271; S=0x309bf28d; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x309bf301; S=0x309bf319; @synthesize
@property(copy, nonatomic) NSString *uuid;	// G=0x309bf459; S=0x309bf469; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x309bf2c1; S=0x309bf2d1; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x309bf2e1; S=0x309bf2f1; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x309bf251; S=0x309bf261; @synthesize
- (id)init;	// 0x309bf111
// declared property getter: - (int)audioPriority;	// 0x309bf419
// declared property getter: - (BOOL)cleaningUp;	// 0x309bf4cd
- (void)dealloc;	// 0x309bf16d
// declared property getter: - (id)effectID;	// 0x309bf3b1
// declared property getter: - (int)liveIndex;	// 0x309bf4ad
// declared property getter: - (double)mainDuration;	// 0x309bf385
// declared property getter: - (float)opacity;	// 0x309bf201
// declared property getter: - (double)phaseInDuration;	// 0x309bf32d
// declared property getter: - (double)phaseOutDuration;	// 0x309bf359
// declared property getter: - (CGPoint)position;	// 0x309bf221
// declared property getter: - (id)presetID;	// 0x309bf3e5
// declared property getter: - (int)randomSeed;	// 0x309bf439
// declared property getter: - (float)rotationAngle;	// 0x309bf2a1
// declared property getter: - (float)scale;	// 0x309bf48d
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x309bf429
// declared property setter: - (void)setCleaningUp:(BOOL)up;	// 0x309bf4dd
// declared property setter: - (void)setEffectID:(id)anId;	// 0x309bf3c1
// declared property setter: - (void)setLiveIndex:(int)index;	// 0x309bf4bd
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x309bf39d
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x309bf211
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x309bf345
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x309bf371
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x309bf23d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x309bf3f5
// declared property setter: - (void)setRandomSeed:(int)seed;	// 0x309bf449
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x309bf2b1
// declared property setter: - (void)setScale:(float)scale;	// 0x309bf49d
// declared property setter: - (void)setSize:(CGSize)size;	// 0x309bf28d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x309bf319
// declared property setter: - (void)setUuid:(id)uuid;	// 0x309bf469
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x309bf2d1
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x309bf2f1
// declared property setter: - (void)setZPosition:(float)position;	// 0x309bf261
// declared property getter: - (CGSize)size;	// 0x309bf271
// declared property getter: - (double)timeIn;	// 0x309bf301
// declared property getter: - (id)uuid;	// 0x309bf459
// declared property getter: - (float)xRotationAngle;	// 0x309bf2c1
// declared property getter: - (float)yRotationAngle;	// 0x309bf2e1
// declared property getter: - (float)zPosition;	// 0x309bf251
@end

