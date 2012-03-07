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
@property(copy) id info;	// G=0x301b6981; S=0x301ba355; 
@property(readonly, assign) unsigned objHandle;	// G=0x301b696d; 
@property(retain) NSString *path;	// G=0x301b9529; S=0x301b9505; @synthesize=_path
@property(readonly, assign) unsigned storageID;	// G=0x301b6959; 
@property(readonly, assign) unsigned type;	// G=0x301b6945; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x301b9499
- (void)dealloc;	// 0x301ba3f5
- (void)finalize;	// 0x301ba399
// declared property getter: - (id)info;	// 0x301b6981
- (id)metadataDict;	// 0x301b9541
// declared property getter: - (unsigned long)objHandle;	// 0x301b696d
// declared property getter: - (id)path;	// 0x301b9529
// declared property setter: - (void)setInfo:(id)info;	// 0x301ba355
// declared property setter: - (void)setPath:(id)path;	// 0x301b9505
// declared property getter: - (unsigned long)storageID;	// 0x301b6959
- (id)thumbData;	// 0x301b9e09
// declared property getter: - (unsigned)type;	// 0x301b6945
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x301ba1e5
@end
