/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSearchTask.h"


@interface ASMailboxSearchTask : ASSearchTask {
}
- (void)_appendSearchOptions:(id)options;	// 0x341c1335
- (void)_appendSearchQuery:(id)query;	// 0x341c11c1
- (void)finishWithError:(id)error;	// 0x341c1c51
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x341c1675
- (int)numDownloadedElements;	// 0x341c21bd
- (void)performTask;	// 0x341c10a1
- (BOOL)processContext:(id)context;	// 0x341c1731
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x341c1689
- (id)requestBody;	// 0x341c1585
- (BOOL)requiresEASVersionInformaton;	// 0x341c109d
@end
