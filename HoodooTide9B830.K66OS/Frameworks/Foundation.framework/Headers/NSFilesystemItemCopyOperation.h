/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryTraversalOperation.h"
#import "Foundation-Structs.h"

@class NSString, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {
@private
	NSString *_destinationPath;	// 40 = 0x28
	NSMutableSet *_skippedPaths;	// 44 = 0x2c
}
+ (id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;	// 0x315db201
+ (id)filesystemItemCopyOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x315db2ed
- (void)initWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x315db261
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x315db5c9
- (BOOL)_shouldCopyItemAtPath:(const char *)path toPath:(const char *)path2;	// 0x315db371
- (BOOL)_shouldProceedAfterErrno:(int)errno copyingItemAtPath:(const char *)path toPath:(const char *)path3;	// 0x315db471
- (BOOL)_validatePaths:(id *)paths;	// 0x315db579
- (void)dealloc;	// 0x315db891
- (BOOL)shouldCopyItemAtPath:(id)path toPath:(id)path2;	// 0x315db341
- (BOOL)shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path3;	// 0x315db43d
@end

