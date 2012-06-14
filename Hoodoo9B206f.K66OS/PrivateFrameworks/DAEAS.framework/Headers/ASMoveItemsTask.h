/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSMutableArray, NSArray;

@interface ASMoveItemsTask : ASTask {
	NSMutableArray *_moveItems;	// 104 = 0x68
	NSArray *_pushedMoveRequests;	// 108 = 0x6c
	int _dataclass;	// 112 = 0x70
}
@property(assign) int dataclass;	// G=0x321ed4d1; S=0x321ed4e1; @synthesize=_dataclass
@property(retain) NSArray *pushedMoveRequests;	// G=0x321ed499; S=0x321ed4ad; @synthesize=_pushedMoveRequests
- (void)addSourceID:(id)anId sourceFolder:(id)folder destinatonFolder:(id)folder3;	// 0x321ec9d9
- (int)commandCode;	// 0x321ec9d5
// declared property getter: - (int)dataclass;	// 0x321ed4d1
- (void)dealloc;	// 0x321ec975
- (void)finishWithError:(id)error;	// 0x321ecffd
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321ecac5
- (BOOL)processContext:(id)context;	// 0x321ecad5
// declared property getter: - (id)pushedMoveRequests;	// 0x321ed499
- (id)requestBody;	// 0x321ed24d
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x321ed4e1
// declared property setter: - (void)setPushedMoveRequests:(id)requests;	// 0x321ed4ad
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x321ed40d
@end

