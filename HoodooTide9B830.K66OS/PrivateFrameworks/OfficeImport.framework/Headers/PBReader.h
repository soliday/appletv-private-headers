/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


__attribute__((visibility("hidden")))
@interface PBReader : OCBReader {
@private
	PptObjectFactory *mPptObjectFactory;	// 16 = 0x10
}
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x31302689
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3118a6ed
+ (id)readerWithPptReader:(PptBinaryReader *)pptReader pptObjectFactory:(PptObjectFactory *)factory;	// 0x3118e939
- (id)initWithPptReader:(PptBinaryReader *)pptReader pptObjectFactory:(PptObjectFactory *)factory;	// 0x3118e989
- (void)dealloc;	// 0x3117354d
@end

