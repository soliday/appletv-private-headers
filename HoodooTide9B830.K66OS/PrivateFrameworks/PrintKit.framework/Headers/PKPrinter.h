/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface PKPrinter : NSObject {
@private
	NSString *name;	// 4 = 0x4
	int type;	// 8 = 0x8
	int accessState;	// 12 = 0xc
	NSDictionary *printInfoSupported;	// 16 = 0x10
	http_s *job_http;	// 20 = 0x14
	NSMutableDictionary *privateData;	// 24 = 0x18
	NSMutableSet *mediaReady;	// 28 = 0x1c
	int maxPDFKBytes;	// 32 = 0x20
	int maxJPEGKBytes;	// 36 = 0x24
	int maxCopies;	// 40 = 0x28
	int preferred_landscape;	// 44 = 0x2c
	BOOL isLocal;	// 48 = 0x30
	BOOL hasIdentifyPrinterOp;	// 49 = 0x31
@protected
	int kind;	// 52 = 0x34
}
@property(retain) NSDictionary *TXTRecord;	// G=0x325be6c5; S=0x325be599; @dynamic
@property(readonly, assign) int accessState;	// G=0x325bb1a1; @synthesize
@property(assign) int accessState;	// S=0x325bb1e1; 
@property(readonly, assign) BOOL hasIdentifyPrinterOp;	// G=0x325bb171; @synthesize
@property(readonly, assign) BOOL hasPrintInfoSupported;	// G=0x325bd74d; @dynamic
@property(retain) NSString *hostname;	// G=0x325bd86d; S=0x325bd8b9; @dynamic
@property(readonly, assign) BOOL isAdobeRGBSupported;	// G=0x325bc16d; @dynamic
@property(readonly, assign) BOOL isIPPS;	// G=0x325bb389; @dynamic
@property(assign) BOOL isLocal;	// G=0x325bb181; S=0x325bb191; @synthesize
@property(readonly, assign) int kind;	// G=0x325bb1c1; @synthesize
@property(readonly, assign) NSString *name;	// G=0x325bb1d1; @synthesize
@property(retain) NSNumber *port;	// G=0x325bd8dd; S=0x325bd929; @dynamic
@property(readonly, assign) NSDictionary *printInfoSupported;	// G=0x325bc2a1; 
@property(readonly, retain) NSString *scheme;	// G=0x325bea11; 
@property(readonly, assign) int type;	// G=0x325bb1b1; @synthesize
@property(readonly, assign) NSString *uuid;	// G=0x325bb3b9; @dynamic
+ (BOOL)printerLookupWithName:(id)name andTimeout:(double)timeout;	// 0x325bb4b9
+ (id)printerWithName:(id)name;	// 0x325bb415
- (id)initWithName:(id)name TXT:(id)txt;	// 0x325bef69
- (id)initWithName:(id)name TXTRecord:(id)record;	// 0x325bd961
// declared property getter: - (id)TXTRecord;	// 0x325be6c5
- (int)abortJob;	// 0x325bb3ed
// declared property getter: - (int)accessState;	// 0x325bb1a1
- (void)cancelUnlock;	// 0x325bb5f9
- (void)checkOperations:(ipp_s *)operations;	// 0x325bd615
- (ipp_s *)createRequest:(id)request ofType:(id)type url:(id)url;	// 0x325bf4a1
- (void)dealloc;	// 0x325bd775
- (id)description;	// 0x325bb1f1
- (id)displayName;	// 0x325bb201
- (int)finalizeJob:(int)job;	// 0x325bfb85
- (int)finishJob;	// 0x325bb401
- (ipp_s *)getPrinterAttributes;	// 0x325beaa9
// declared property getter: - (BOOL)hasIdentifyPrinterOp;	// 0x325bb171
// declared property getter: - (BOOL)hasPrintInfoSupported;	// 0x325bd74d
// declared property getter: - (id)hostname;	// 0x325bd86d
- (void)identifySelf;	// 0x325bd66d
// declared property getter: - (BOOL)isAdobeRGBSupported;	// 0x325bc16d
// declared property getter: - (BOOL)isIPPS;	// 0x325bb389
// declared property getter: - (BOOL)isLocal;	// 0x325bb181
- (BOOL)isPaperReady:(id)ready;	// 0x325bb341
// declared property getter: - (int)kind;	// 0x325bb1c1
- (BOOL)knowsReadyPaperList;	// 0x325bb141
- (id)localName;	// 0x325bfea9
- (id)location;	// 0x325bb30d
- (id)matchedPaper:(id)paper preferBorderless:(BOOL)borderless withDuplexMode:(id)duplexMode didMatch:(BOOL *)match;	// 0x325bb725
// declared property getter: - (id)name;	// 0x325bb1d1
- (ipp_s *)newMediaColFromPaper:(id)paper Source:(id)source Type:(id)type DoMargins:(BOOL)margins;	// 0x325bf30d
- (id)paperListForDuplexMode:(id)duplexMode;	// 0x325bbffd
// declared property getter: - (id)port;	// 0x325bd8dd
// declared property getter: - (id)printInfoSupported;	// 0x325bc2a1
- (int)printURL:(id)url ofType:(id)type printSettings:(id)settings;	// 0x325bbb6d
- (id)privateObjectForKey:(id)key;	// 0x325bda75
- (void)reconfirmWithForce:(BOOL)force;	// 0x325bb559
- (void)resolve;	// 0x325bd94d
- (BOOL)resolveWithTimeout:(int)timeout;	// 0x325bf09d
// declared property getter: - (id)scheme;	// 0x325bea11
- (int)sendData:(const char *)data ofLength:(int)length;	// 0x325bbb19
// declared property setter: - (void)setAccessState:(int)state;	// 0x325bb1e1
- (void)setAccessStateFromTXT:(id)txt;	// 0x325bd801
// declared property setter: - (void)setHostname:(id)hostname;	// 0x325bd8b9
// declared property setter: - (void)setIsLocal:(BOOL)local;	// 0x325bb191
// declared property setter: - (void)setPort:(id)port;	// 0x325bd929
- (void)setPrivateObject:(id)object forKey:(id)key;	// 0x325bdb61
// declared property setter: - (void)setTXTRecord:(id)record;	// 0x325be599
- (int)startJob:(id)job ofType:(id)type;	// 0x325bb925
// declared property getter: - (int)type;	// 0x325bb1b1
- (void)unlockWithCompletionHandler:(id)completionHandler;	// 0x325bb635
- (void)updateType;	// 0x325be855
// declared property getter: - (id)uuid;	// 0x325bb3b9
@end

