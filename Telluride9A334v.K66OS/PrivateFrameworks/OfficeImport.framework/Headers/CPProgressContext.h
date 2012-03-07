/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSDate, CPProgressStage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPProgressContext : NSObject {
@private
	CPProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	NSMutableArray *m_stackOfBranches;	// 12 = 0xc
}
@property(readonly, retain) CPProgressStage *currentStage;	// G=0x357ae42d; converted property
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x357ae405
+ (void)advanceProgress:(double)progress;	// 0x355bc015
+ (id)contextForCurrentThread;	// 0x357ae9a1
+ (id)createBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x357ae40d
+ (void)createContextForCurrentThread;	// 0x357ae3fd
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x355cea1d
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x355b9fc1
+ (double)currentPosition;	// 0x357ae419
+ (void)endBranch:(id)branch;	// 0x357ae411
+ (void)endStage;	// 0x355c82dd
+ (void)popBranch;	// 0x355d8a11
+ (void)pushBranch:(id)branch;	// 0x355c936d
+ (void)removeContextForCurrentThread;	// 0x357ae401
+ (void)removeProgressObserver:(id)observer;	// 0x357ae409
+ (void)setMessage:(id)message;	// 0x357ae415
+ (void)setProgress:(double)progress;	// 0x35605505
+ (id)stageForCurrentThread;	// 0x357ae9f1
- (id)init;	// 0x357ae825
// converted property getter: - (id)currentStage;	// 0x357ae42d
- (void)dealloc;	// 0x357ae8cd
- (void)reportProgress:(double)progress;	// 0x357ae43d
- (id)rootStage;	// 0x357ae961
@end
