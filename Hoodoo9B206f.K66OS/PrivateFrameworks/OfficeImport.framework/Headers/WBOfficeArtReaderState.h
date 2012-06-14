/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderState.h"

@class WBReader;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState : OABReaderState {
@private
	WBReader *mReader;	// 24 = 0x18
	int mCurrentTextType;	// 28 = 0x1c
}
@property(assign, nonatomic) int currentTextType;	// G=0x344acad9; S=0x344ac899; @synthesize=mCurrentTextType
@property(assign, nonatomic) WBReader *reader;	// G=0x344ad285; S=0x3448ed49; @synthesize=mReader
- (id)initWithClient:(Class)client;	// 0x3448ed09
// declared property getter: - (int)currentTextType;	// 0x344acad9
// declared property getter: - (id)reader;	// 0x344ad285
// declared property setter: - (void)setCurrentTextType:(int)type;	// 0x344ac899
// declared property setter: - (void)setReader:(id)reader;	// 0x3448ed49
@end

