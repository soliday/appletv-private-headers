/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFolderLocalUpdateTask.h"


@interface ASFolderCreateTask : ASFolderLocalUpdateTask {
}
- (id)initWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x31894f11
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)wbxmldata;	// 0x31894f69
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31895011
@end

