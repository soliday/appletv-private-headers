/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSString;

@interface PTPObjectInfoDataset : NSObject {
	NSMutableData *_content;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	unsigned _storageID;	// 12 = 0xc
	unsigned short _objectFormat;	// 16 = 0x10
	unsigned short _protectionStatus;	// 18 = 0x12
	unsigned long long _objectCompressedSize;	// 20 = 0x14
	unsigned short _thumbFormat;	// 28 = 0x1c
	unsigned _thumbCompressedSize;	// 32 = 0x20
	unsigned _thumbOffset;	// 36 = 0x24
	unsigned _thumbPixWidth;	// 40 = 0x28
	unsigned _thumbPixHeight;	// 44 = 0x2c
	unsigned _imagePixWidth;	// 48 = 0x30
	unsigned _imagePixHeight;	// 52 = 0x34
	unsigned _imageBitDepth;	// 56 = 0x38
	unsigned _parentObject;	// 60 = 0x3c
	unsigned short _associationType;	// 64 = 0x40
	unsigned _associationDesc;	// 68 = 0x44
	unsigned _sequenceNumber;	// 72 = 0x48
	NSString *_filename;	// 76 = 0x4c
	NSString *_captureDate;	// 80 = 0x50
	NSString *_modificationDate;	// 84 = 0x54
	NSString *_keywords;	// 88 = 0x58
	BOOL _readOnlyObject;	// 92 = 0x5c
	unsigned _thmFileSize;	// 96 = 0x60
	unsigned _objectHandle;	// 100 = 0x64
}
@property(assign) unsigned long associationDesc;	// G=0x301ec1ed; S=0x301ec1fd; converted property
@property(assign) unsigned short associationType;	// G=0x301ec1c1; S=0x301ec1d1; converted property
@property(retain) NSString *captureDate;	// G=0x301ec255; S=0x301ec33d; converted property
@property(retain) NSMutableData *content;	// G=0x301ec439; S=0x301ec761; converted property
@property(retain) id content64;	// G=0x301ec415; S=0x301ec9e9; converted property
@property(retain) NSString *filename;	// G=0x301ec245; S=0x301ec3c9; converted property
@property(assign) unsigned long imageBitDepth;	// G=0x301ec169; S=0x301ec179; converted property
@property(assign) unsigned long imagePixHeight;	// G=0x301ec13d; S=0x301ec14d; converted property
@property(assign) unsigned long imagePixWidth;	// G=0x301ec111; S=0x301ec121; converted property
@property(retain) NSString *keywords;	// G=0x301ec275; S=0x301ec2a5; converted property
@property(retain) NSString *modificationDate;	// G=0x301ec265; S=0x301ec2f1; converted property
@property(assign) unsigned short objectFormat;	// G=0x301ebf75; S=0x301ebf85; converted property
@property(assign) unsigned long objectHandle;	// G=0x301ec285; S=0x301ec295; converted property
@property(assign) unsigned long parentObject;	// G=0x301ec195; S=0x301ec1a5; converted property
@property(assign) unsigned short protectionStatus;	// G=0x301ebfa1; S=0x301ebfb1; converted property
@property(assign) unsigned long sequenceNumber;	// G=0x301ec219; S=0x301ec229; converted property
@property(assign) unsigned long storageID;	// G=0x301ebf49; S=0x301ebf59; converted property
@property(assign) unsigned long thmFileSize;	// G=0x301ec06d; S=0x301ec07d; converted property
@property(assign) unsigned long thumbCompressedSize;	// G=0x301ec041; S=0x301ec051; converted property
@property(assign) unsigned short thumbFormat;	// G=0x301ec015; S=0x301ec025; converted property
@property(assign) unsigned long thumbOffset;	// G=0x301ec08d; S=0x301ec09d; converted property
@property(assign) unsigned long thumbPixHeight;	// G=0x301ec0e5; S=0x301ec0f5; converted property
@property(assign) unsigned long thumbPixWidth;	// G=0x301ec0b9; S=0x301ec0c9; converted property
- (id)init;	// 0x301ec6e1
- (id)initWithData:(id)data;	// 0x301ec645
- (id)initWithMutableData64:(id)mutableData64;	// 0x301ec54d
- (id)initWithMutableData:(id)mutableData;	// 0x301ec5c9
// converted property getter: - (unsigned long)associationDesc;	// 0x301ec1ed
// converted property getter: - (unsigned short)associationType;	// 0x301ec1c1
// converted property getter: - (id)captureDate;	// 0x301ec255
// converted property getter: - (id)content;	// 0x301ec439
// converted property getter: - (id)content64;	// 0x301ec415
- (unsigned long)contentSize;	// 0x301ec48d
- (unsigned long)contentSize64;	// 0x301ec45d
- (void)copyContent:(char *)content ofSize:(unsigned long)size;	// 0x301ed141
- (void)dealloc;	// 0x301ec4bd
- (id)description;	// 0x301ed195
// converted property getter: - (id)filename;	// 0x301ec245
// converted property getter: - (unsigned long)imageBitDepth;	// 0x301ec169
// converted property getter: - (unsigned long)imagePixHeight;	// 0x301ec13d
// converted property getter: - (unsigned long)imagePixWidth;	// 0x301ec111
// converted property getter: - (id)keywords;	// 0x301ec275
// converted property getter: - (id)modificationDate;	// 0x301ec265
- (unsigned long)objectCompressedSize;	// 0x301ebfdd
- (unsigned long long)objectCompressedSize64;	// 0x301ebfcd
// converted property getter: - (unsigned short)objectFormat;	// 0x301ebf75
// converted property getter: - (unsigned long)objectHandle;	// 0x301ec285
// converted property getter: - (unsigned long)parentObject;	// 0x301ec195
// converted property getter: - (unsigned short)protectionStatus;	// 0x301ebfa1
// converted property getter: - (unsigned long)sequenceNumber;	// 0x301ec219
// converted property setter: - (void)setAssociationDesc:(unsigned long)desc;	// 0x301ec1fd
// converted property setter: - (void)setAssociationType:(unsigned short)type;	// 0x301ec1d1
// converted property setter: - (void)setCaptureDate:(id)date;	// 0x301ec33d
// converted property setter: - (void)setContent64:(id)a64;	// 0x301ec9e9
// converted property setter: - (void)setContent:(id)content;	// 0x301ec761
// converted property setter: - (void)setFilename:(id)filename;	// 0x301ec3c9
// converted property setter: - (void)setImageBitDepth:(unsigned long)depth;	// 0x301ec179
// converted property setter: - (void)setImagePixHeight:(unsigned long)height;	// 0x301ec14d
// converted property setter: - (void)setImagePixWidth:(unsigned long)width;	// 0x301ec121
// converted property setter: - (void)setKeywords:(id)keywords;	// 0x301ec2a5
// converted property setter: - (void)setModificationDate:(id)date;	// 0x301ec2f1
- (void)setObjectCompressedSize:(unsigned long long)size;	// 0x301ebff5
// converted property setter: - (void)setObjectFormat:(unsigned short)format;	// 0x301ebf85
// converted property setter: - (void)setObjectHandle:(unsigned long)handle;	// 0x301ec295
// converted property setter: - (void)setParentObject:(unsigned long)object;	// 0x301ec1a5
// converted property setter: - (void)setProtectionStatus:(unsigned short)status;	// 0x301ebfb1
// converted property setter: - (void)setSequenceNumber:(unsigned long)number;	// 0x301ec229
// converted property setter: - (void)setStorageID:(unsigned long)anId;	// 0x301ebf59
// converted property setter: - (void)setThmFileSize:(unsigned long)size;	// 0x301ec07d
// converted property setter: - (void)setThumbCompressedSize:(unsigned long)size;	// 0x301ec051
// converted property setter: - (void)setThumbFormat:(unsigned short)format;	// 0x301ec025
// converted property setter: - (void)setThumbOffset:(unsigned long)offset;	// 0x301ec09d
// converted property setter: - (void)setThumbPixHeight:(unsigned long)height;	// 0x301ec0f5
// converted property setter: - (void)setThumbPixWidth:(unsigned long)width;	// 0x301ec0c9
// converted property getter: - (unsigned long)storageID;	// 0x301ebf49
// converted property getter: - (unsigned long)thmFileSize;	// 0x301ec06d
// converted property getter: - (unsigned long)thumbCompressedSize;	// 0x301ec041
// converted property getter: - (unsigned short)thumbFormat;	// 0x301ec015
// converted property getter: - (unsigned long)thumbOffset;	// 0x301ec08d
// converted property getter: - (unsigned long)thumbPixHeight;	// 0x301ec0e5
// converted property getter: - (unsigned long)thumbPixWidth;	// 0x301ec0b9
- (void)updateContent;	// 0x301ecc6d
- (void)updateContent64;	// 0x301ecedd
@end
