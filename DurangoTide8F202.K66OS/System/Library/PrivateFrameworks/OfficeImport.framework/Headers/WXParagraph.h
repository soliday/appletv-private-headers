/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXParagraph : NSObject {
}
+ (void)readAnnotationFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31af9c21
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x31a38aa1
+ (void)readFromString:(id)string to:(id)to;	// 0x31a3e595
+ (void)readHyperlinkFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31a3f9d5
+ (void)readRunsFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31a38e7d
+ (void)readRunsTo:(id)to state:(id)state;	// 0x31a38d59
+ (void)readSimpleFieldFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31a3e5cd
+ (void)readTrackingFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31af9cc9
@end
