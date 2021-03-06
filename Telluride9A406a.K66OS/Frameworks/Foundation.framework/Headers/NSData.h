/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSData (NSData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x35ddcd4d
+ (id)data;	// 0x35dff485
+ (id)dataWithBytes:(const void *)bytes length:(unsigned)length;	// 0x35dfcaf9
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x35ddcd09
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x35deef41
+ (id)dataWithContentsOfFile:(id)file;	// 0x35def581
+ (id)dataWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e1aa5d
+ (id)dataWithContentsOfMappedFile:(id)mappedFile;	// 0x35e1d7ad
+ (id)dataWithContentsOfURL:(id)url;	// 0x35e37161
+ (id)dataWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e371a1
+ (id)dataWithData:(id)data;	// 0x35e1c9a9
- (id)initWithBase64Encoding:(id)base64Encoding;	// 0x35e241b9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x35dfcb3d
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x35e371ed
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x35ddcd95
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x35deef8d
- (id)initWithCoder:(id)coder;	// 0x35e155f5
- (id)initWithContentsOfFile:(id)file;	// 0x35ddd1d5
- (id)initWithContentsOfFile:(id)file error:(id *)error;	// 0x35e3741d
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e1b05d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x35de4739
- (id)initWithContentsOfMappedFile:(id)mappedFile error:(id *)error;	// 0x35e373fd
- (id)initWithContentsOfURL:(id)url;	// 0x35e062b5
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e371fd
- (id)initWithData:(id)data;	// 0x35e15965
- (id)_asciiDescription;	// 0x35e36d49
- (BOOL)_bytesAreVM;	// 0x35e36e25
- (unsigned long)_cfTypeID;	// 0x35dee629
- (id)base64Encoding;	// 0x35e23dd1
- (const void *)bytes;	// 0x35e36a61
- (Class)classForCoder;	// 0x35e17d89
- (id)copyWithZone:(NSZone *)zone;	// 0x35e243c5
- (id)description;	// 0x35e36a85
- (void)encodeWithCoder:(id)coder;	// 0x35e11eb5
- (void)getBytes:(void *)bytes;	// 0x35e116f9
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x35e36e29
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x35e36ea9
- (unsigned)hash;	// 0x35e1ca15
- (BOOL)isEqual:(id)equal;	// 0x35e07699
- (BOOL)isEqualToData:(id)data;	// 0x35e0ba19
- (unsigned)length;	// 0x35e36a3d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e1f17d
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x35e3743d
- (id)subdataWithRange:(NSRange)range;	// 0x35e1f1ad
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x35e03a0d
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically error:(id *)error;	// 0x35e37135
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e1365d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x35e192c5
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e37079
@end

@interface NSData (NSKindOfAdditions)
- (BOOL)isNSData__;	// 0x35e0ba15
@end

@interface NSData (NSURLExtras)
- (id)_replaceCString:(const char *)string withCString:(const char *)cstring;	// 0x35e88115
- (id)_web_guessedMIMEType;	// 0x35e8792d
- (id)_web_guessedMIMETypeForExtension:(id)extension;	// 0x35e87b89
- (id)_web_guessedMIMETypeForXML;	// 0x35e87801
- (id)_web_parseRFC822HeaderFields;	// 0x35e87c0d
@end

