/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFBase64Encoder : MFBaseFilterDataConsumer {
	char *_table;	// 12 = 0xc
	unsigned _left;	// 16 = 0x10
	unsigned char _leftovers[3];	// 20 = 0x14
	unsigned _line;	// 24 = 0x18
	unsigned _lineBreak;	// 28 = 0x1c
	BOOL _padChar;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL allowSlash;	// G=0x30c5bfd1; S=0x30c5bfa1; 
@property(assign, nonatomic) unsigned lineBreak;	// G=0x30c5c015; S=0x30c5c025; @synthesize=_lineBreak
@property(assign, nonatomic) BOOL padChar;	// G=0x30c5bff5; S=0x30c5c005; @synthesize=_padChar
- (id)initWithConsumers:(id)consumers;	// 0x30c5c0b9
// declared property getter: - (BOOL)allowSlash;	// 0x30c5bfd1
- (int)appendData:(id)data;	// 0x30c5c3f5
- (void)done;	// 0x30c5c125
// declared property getter: - (unsigned long)lineBreak;	// 0x30c5c015
// declared property getter: - (BOOL)padChar;	// 0x30c5bff5
// declared property setter: - (void)setAllowSlash:(BOOL)slash;	// 0x30c5bfa1
// declared property setter: - (void)setLineBreak:(unsigned long)aBreak;	// 0x30c5c025
// declared property setter: - (void)setPadChar:(BOOL)aChar;	// 0x30c5c005
- (void)setStandardLineBreak;	// 0x30c5c111
@end

