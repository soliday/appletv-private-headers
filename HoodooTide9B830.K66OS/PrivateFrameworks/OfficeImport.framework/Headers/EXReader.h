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
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x31338911
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x31338935
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x31284b29
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x31284b4d
+ (id)readFromPackage:(id)package fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x31284e01
- (id)edWorkbookFromPart:(id)part package:(id)package fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory;	// 0x31285045
@end

