/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {
	NSMutableArray *_files;	// 4 = 0x4
	NSMutableArray *_folders;	// 8 = 0x8
}
@property(retain) NSMutableArray *files;	// G=0x30c092e5; S=0x30c092c1; @synthesize=_files
@property(retain) NSMutableArray *folders;	// G=0x30c09321; S=0x30c092fd; @synthesize=_folders
- (void)dealloc;	// 0x30c0926d
// declared property getter: - (id)files;	// 0x30c092e5
- (void)finalize;	// 0x30c09339
// declared property getter: - (id)folders;	// 0x30c09321
// declared property setter: - (void)setFiles:(id)files;	// 0x30c092c1
// declared property setter: - (void)setFolders:(id)folders;	// 0x30c092fd
@end

