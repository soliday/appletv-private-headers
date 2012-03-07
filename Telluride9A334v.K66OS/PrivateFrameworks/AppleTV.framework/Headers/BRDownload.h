/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSObject.h"


@protocol BRDownload <NSObject>
- (unsigned long long)byteCount;
- (int)downloadState;
- (int)downloadStateContext;
- (unsigned long long)expectedSize;
- (void)pause;
- (int)qualifiedDownloadState;
- (void)resume;
- (void)setPlayable:(BOOL)playable;
- (BOOL)testContent;
- (double)timeUntilPlayable;
@end
