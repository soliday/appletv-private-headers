/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x3515f0a9
- (id)appendSlashIfNeeded;	// 0x3515e58d
- (id)quote;	// 0x3515ef21
- (id)removeSlashIfNeeded;	// 0x3515e539
- (id)safeFilename;	// 0x3515e4c1
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x3515e371
- (id)trimChar:(unsigned short)aChar;	// 0x3515e345
- (id)trimCommas;	// 0x3515e265
- (id)trimFinalChar:(unsigned short)aChar;	// 0x3515e28d
- (id)trimFinalComma;	// 0x3515e1b9
- (id)trimFirstChar:(unsigned short)aChar;	// 0x3515e2f9
- (id)trimFirstComma;	// 0x3515e219
- (id)trimWhiteSpace;	// 0x3515f061
- (id)unquote;	// 0x3515efc1
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x3515ee99
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x3515ee59
- (id)stringByEncodingSlashes;	// 0x3515ec05
@end

@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x3515dfd9
@end

@interface NSString (DAVExtensions)
- (id)stringByURLQuoting;	// 0x3515fb1d
- (id)stringByURLQuotingPaths;	// 0x3515fad1
- (id)stringByURLUnquoting;	// 0x3515fcfd
- (id)stringByXMLUnquoting;	// 0x3515f6a5
@end

