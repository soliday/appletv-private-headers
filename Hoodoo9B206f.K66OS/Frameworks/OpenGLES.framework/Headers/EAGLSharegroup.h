/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library


@interface EAGLSharegroup : NSObject {
@private
	EAGLSharegroupPrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x31664621
- (id)initWithAPI:(unsigned)api;	// 0x316646f5
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x31664709
- (unsigned)APIs;	// 0x31664625
- (void)dealloc;	// 0x3166484d
- (GLISharedRecRef)getGLIShared;	// 0x31664639
- (void)loadGLIPlugin:(GLDPixelFormatRec *)plugin sharedWithCompute:(BOOL)compute;	// 0x3166464d
@end

