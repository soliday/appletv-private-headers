/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSFileManager.h> // Unknown library


@interface NSFileManager (NSFileManagerAdditions)
- (BOOL)mf_canWriteToDirectoryAtPath:(id)path;	// 0x350998cd
- (void)mf_deleteFilesInSortedArray:(id)sortedArray matchingPrefix:(id)prefix fromDirectory:(id)directory;	// 0x35099c8d
- (id)mf_fileModificationDateAtPath:(id)path traverseLink:(BOOL)link;	// 0x35099c29
- (BOOL)mf_makeCompletePath:(id)path mode:(int)mode;	// 0x35099c19
- (id)mf_makeUniqueFileInDirectory:(id)directory;	// 0x35099b15
- (id)mf_pathsAtDirectory:(id)directory beginningWithString:(id)string;	// 0x35099951
- (BOOL)mf_protectFileAtPath:(id)path withClass:(int)aClass error:(id *)error;	// 0x35099a19
@end
