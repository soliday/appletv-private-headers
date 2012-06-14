/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "DATask.h"
#import <NSObject.h> // Unknown library

@class DATaskManager, DAStatusReport;

@interface SubCalDATask : NSObject <DATask> {
	DATaskManager *_taskManager;	// 4 = 0x4
	BOOL _finished;	// 8 = 0x8
	DAStatusReport *_statusReport;	// 12 = 0xc
}
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x349a1725; S=0x349a1735; @synthesize=_statusReport
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x349a1705; S=0x349a1715; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x349a1661
- (id)consumerDictKey;	// 0x3499f0f9
- (void)dealloc;	// 0x349a1611
- (void)didFinish;	// 0x349a1701
- (void)finishWithError:(id)error;	// 0x349a1679
- (void)performDelegateCallbackWithError:(id)error;	// 0x349a16fd
- (void)performTask;	// 0x349a165d
// declared property setter: - (void)setStatusReport:(id)report;	// 0x349a1735
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x349a1715
- (BOOL)shouldHoldPowerAssertion;	// 0x349a1675
// declared property getter: - (id)statusReport;	// 0x349a1725
// declared property getter: - (id)taskManager;	// 0x349a1705
- (void)willFinish;	// 0x349a16f9
@end

