/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVDiskSpaceManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x36552111
+ (id)singleton;	// 0x36552101
- (id)init;	// 0x36552121
- (id)_volumeSizeStringForSize:(unsigned long long)size;	// 0x36552391
- (void)dealloc;	// 0x3655214d
- (unsigned long long)mediaCapacity;	// 0x36552221
- (id)mediaCapacityString;	// 0x365522a5
- (unsigned long long)mediaFreeSpace;	// 0x365522d9
- (id)mediaFreeSpaceString;	// 0x3655235d
- (unsigned long long)primaryStreamedMediaRepositorySize;	// 0x36552179
- (unsigned long long)primaryStreamedMediaRespositoryMaxFileSize;	// 0x365521e9
- (unsigned long long)shortContentStreamedMediaRepositorySize;	// 0x36552209
- (unsigned long long)shortContentStreamedMediaRespositoryMaxFileSize;	// 0x36552211
@end

