/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString;

@interface ASFolderSyncTask : ASTask {
	NSString *_previousSyncKey;	// 104 = 0x68
	int _numDownloadedElements;	// 108 = 0x6c
}
@property(readonly, assign) int numDownloadedElements;	// G=0x30a66129; converted property
- (id)initWithPreviousSyncKey:(id)previousSyncKey;	// 0x30a65805
- (int)commandCode;	// 0x30a65859
- (void)dealloc;	// 0x30a66045
- (void)finishWithError:(id)error;	// 0x30a65d89
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x30a65925
// converted property getter: - (int)numDownloadedElements;	// 0x30a66129
- (BOOL)processContext:(id)context;	// 0x30a65939
- (id)requestBody;	// 0x30a6585d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x30a66091
@end

