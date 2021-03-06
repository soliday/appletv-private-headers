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
}
@property(assign, nonatomic) int audioPriority;	// G=0x334ba27d; S=0x334ba28d; @synthesize
@property(copy, nonatomic) NSString *effectID;	// G=0x334ba215; S=0x334ba225; @synthesize
@property(assign, nonatomic) int liveIndex;	// G=0x334ba311; S=0x334ba321; @synthesize
@property(assign, nonatomic) double mainDuration;	// G=0x334ba1e9; S=0x334ba201; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x334ba065; S=0x334ba075; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x334ba191; S=0x334ba1a9; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x334ba1bd; S=0x334ba1d5; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x334ba085; S=0x334ba0a1; @synthesize
@property(copy, nonatomic) NSString *presetID;	// G=0x334ba249; S=0x334ba259; @synthesize
@property(assign, nonatomic) int randomSeed;	// G=0x334ba29d; S=0x334ba2ad; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x334ba105; S=0x334ba115; @synthesize
@property(assign, nonatomic) float scale;	// G=0x334ba2f1; S=0x334ba301; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x334ba0d5; S=0x334ba0f1; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x334ba165; S=0x334ba17d; @synthesize
@property(copy, nonatomic) NSString *uuid;	// G=0x334ba2bd; S=0x334ba2cd; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x334ba125; S=0x334ba135; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x334ba145; S=0x334ba155; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x334ba0b5; S=0x334ba0c5; @synthesize
- (id)init;	// 0x334b9f75
// declared property getter: - (int)audioPriority;	// 0x334ba27d
- (void)dealloc;	// 0x334b9fd1
// declared property getter: - (id)effectID;	// 0x334ba215
// declared property getter: - (int)liveIndex;	// 0x334ba311
// declared property getter: - (double)mainDuration;	// 0x334ba1e9
// declared property getter: - (float)opacity;	// 0x334ba065
// declared property getter: - (double)phaseInDuration;	// 0x334ba191
// declared property getter: - (double)phaseOutDuration;	// 0x334ba1bd
// declared property getter: - (CGPoint)position;	// 0x334ba085
// declared property getter: - (id)presetID;	// 0x334ba249
// declared property getter: - (int)randomSeed;	// 0x334ba29d
// declared property getter: - (float)rotationAngle;	// 0x334ba105
// declared property getter: - (float)scale;	// 0x334ba2f1
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x334ba28d
// declared property setter: - (void)setEffectID:(id)anId;	// 0x334ba225
// declared property setter: - (void)setLiveIndex:(int)index;	// 0x334ba321
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x334ba201
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x334ba075
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x334ba1a9
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x334ba1d5
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x334ba0a1
// declared property setter: - (void)setPresetID:(id)anId;	// 0x334ba259
// declared property setter: - (void)setRandomSeed:(int)seed;	// 0x334ba2ad
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x334ba115
// declared property setter: - (void)setScale:(float)scale;	// 0x334ba301
// declared property setter: - (void)setSize:(CGSize)size;	// 0x334ba0f1
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x334ba17d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x334ba2cd
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x334ba135
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x334ba155
// declared property setter: - (void)setZPosition:(float)position;	// 0x334ba0c5
// declared property getter: - (CGSize)size;	// 0x334ba0d5
// declared property getter: - (double)timeIn;	// 0x334ba165
// declared property getter: - (id)uuid;	// 0x334ba2bd
// declared property getter: - (float)xRotationAngle;	// 0x334ba125
// declared property getter: - (float)yRotationAngle;	// 0x334ba145
// declared property getter: - (float)zPosition;	// 0x334ba0b5
@end

