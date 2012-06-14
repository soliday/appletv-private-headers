/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"

@class NSString;

@interface PTPCameraFile : ICCameraFile {
@private
	void *_ptpCameraFileProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x35502969; S=0x3550633d; 
@property(readonly, assign) unsigned objHandle;	// G=0x35502955; 
@property(retain) NSString *path;	// G=0x35505511; S=0x355054ed; @synthesize=_path
@property(readonly, assign) unsigned storageID;	// G=0x35502941; 
@property(readonly, assign) unsigned type;	// G=0x3550292d; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x35505481
- (void)dealloc;	// 0x355063dd
- (void)finalize;	// 0x35506381
// declared property getter: - (id)info;	// 0x35502969
- (id)metadataDict;	// 0x35505529
// declared property getter: - (unsigned long)objHandle;	// 0x35502955
// declared property getter: - (id)path;	// 0x35505511
// declared property setter: - (void)setInfo:(id)info;	// 0x3550633d
// declared property setter: - (void)setPath:(id)path;	// 0x355054ed
// declared property getter: - (unsigned long)storageID;	// 0x35502941
- (id)thumbData;	// 0x35505df1
// declared property getter: - (unsigned)type;	// 0x3550292d
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x355061cd
@end

