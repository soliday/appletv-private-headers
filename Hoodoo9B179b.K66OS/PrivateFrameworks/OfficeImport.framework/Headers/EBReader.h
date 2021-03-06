/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


__attribute__((visibility("hidden")))
@interface EBReader : OCBReader {
@private
	XlObjectFactory *mXlObjectFactory;	// 16 = 0x10
}
+ (BOOL)isCSV;	// 0x3280b3a1
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3298ddad
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3298d7f1
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32805d35
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32805d69
+ (id)readerWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x3280ae25
- (id)initWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x3280ae75
- (void)dealloc;	// 0x32845dd1
- (bool)isCSV;	// 0x3280b36d
- (id)readWorkbookFrom:(XlChartBinaryReader *)from fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3280aec5
@end

