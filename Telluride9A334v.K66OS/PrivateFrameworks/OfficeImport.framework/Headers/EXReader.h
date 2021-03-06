/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCXReader.h"


__attribute__((visibility("hidden")))
@interface EXReader : OCXReader {
}
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x35735911
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x35735935
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x35681b29
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x35681b4d
+ (id)readFromPackage:(id)package fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x35681e01
- (id)edWorkbookFromPart:(id)part package:(id)package fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x35682045
@end

