/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {
@private
	opaque_pthread_mutex_t ringMutex;	// 4 = 0x4
	CMMotionManager *motionManager;	// 48 = 0x30
	BOOL manageFusedMotion;	// 52 = 0x34
	BOOL manageAccel;	// 53 = 0x35
	int accelRingIndex;	// 56 = 0x38
	float accelRingX[64];	// 60 = 0x3c
	float accelRingY[64];	// 316 = 0x13c
	float accelRingZ[64];	// 572 = 0x23c
	double accelRingTime[64];	// 828 = 0x33c
	int fusedRingIndex;	// 1340 = 0x53c
	double fusedRingTime[64];	// 1344 = 0x540
	BOOL fusedRingSync[64];	// 1856 = 0x740
	XXStruct_ZUkpeA fusedRingAccel[64];	// 1920 = 0x780
	XXStruct_N5B6hD fusedRingQuaternion[64];	// 2688 = 0xa80
	XXStruct_ZUkpeA fusedRingPosition[64];	// 4736 = 0x1280
	BOOL copyingAllData;	// 5504 = 0x1580
	double dLatestFusedMotionCopied;	// 5508 = 0x1584
	double dBaseTimestamp;	// 5516 = 0x158c
	double dLatestTimestamp;	// 5524 = 0x1594
	double dGyroUpdateInterval;	// 5532 = 0x159c
	BOOL gettingAttitudeChange;	// 5540 = 0x15a4
	XXStruct_N5B6hD previousQuaternion;	// 5542 = 0x15a6
	XXStruct_N5B6hD currentQuaternion;	// 5574 = 0x15c6
	BOOL computingPosition;	// 5606 = 0x15e6
	XXStruct_DSEUtC position;	// 5608 = 0x15e8
	XXStruct_DSEUtC velocity;	// 5628 = 0x15fc
}
@property(readonly, assign, getter=isCopyingAllData) BOOL copyingAllData;	// G=0x323b5a1d; converted property
- (id)init;	// 0x323b5c11
- (id)initWithAccelerometer:(BOOL)accelerometer fusedMotion:(BOOL)motion;	// 0x323b5c29
- (id)copyAllFusedMotionData;	// 0x323b6301
- (id)copyNewFusedMotionData;	// 0x323b60ed
- (void)dealloc;	// 0x323b5e9d
- (void)didUpdateAcceleration:(XXStruct_ZUkpeA)acceleration time:(double)time;	// 0x323b66b1
- (void)didUpdateFusedMotionWithDeviceMotion:(XXStruct_U9ijYB)deviceMotion time:(double)time ifsync:(BOOL)ifsync;	// 0x323b64ad
- (void)didUpdatePositionWithAcceleration:(XXStruct_ZUkpeA *)acceleration forTimeStamp:(double)timeStamp;	// 0x323b5b61
- (void)didUpdatePositionWithTimeStamp:(double)timeStamp;	// 0x323b56ed
- (void)didUpdateVelocityWithAcceleration:(XXStruct_ZUkpeA *)acceleration forTimeStamp:(double)timeStamp;	// 0x323b5655
- (void)getCurrentAttitude:(double *)attitude :(double *)arg2 :(double *)arg3;	// 0x323b6e99
- (void)getCurrentDeltaAttitude:(double *)attitude :(double *)arg2 :(double *)arg3;	// 0x323b6e59
- (void)getCurrentDeltaQuaternion:(XXStruct_N5B6hD *)quaternion;	// 0x323b584d
- (void)getCurrentQuaternion:(XXStruct_N5B6hD *)quaternion;	// 0x323b5789
- (void)getFusedVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x323b68ad
- (void)getPosition:(float *)position :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x323b675d
- (void)getVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x323b69e1
// converted property getter: - (BOOL)isCopyingAllData;	// 0x323b5a1d
- (BOOL)managingAccel;	// 0x323b5a0d
- (BOOL)managingFusedMotion;	// 0x323b59fd
- (void)updateCurrentQuaternionForTimeStamp:(double)timeStamp;	// 0x323b5f61
@end

