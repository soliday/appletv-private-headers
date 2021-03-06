/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

typedef struct _NSZone NSZone;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;

typedef struct CalDatabase CalDatabase;

typedef struct __CFArray *CFArrayRef;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFSocket *CFSocketRef;

typedef struct _xmlSAXHandler {
	/*function-pointer*/ void *internalSubset;
	/*function-pointer*/ void *isStandalone;
	/*function-pointer*/ void *hasInternalSubset;
	/*function-pointer*/ void *hasExternalSubset;
	/*function-pointer*/ void *resolveEntity;
	/*function-pointer*/ void *getEntity;
	/*function-pointer*/ void *entityDecl;
	/*function-pointer*/ void *notationDecl;
	/*function-pointer*/ void *attributeDecl;
	/*function-pointer*/ void *elementDecl;
	/*function-pointer*/ void *unparsedEntityDecl;
	/*function-pointer*/ void *setDocumentLocator;
	/*function-pointer*/ void *startDocument;
	/*function-pointer*/ void *endDocument;
	/*function-pointer*/ void *startElement;
	/*function-pointer*/ void *endElement;
	/*function-pointer*/ void *reference;
	/*function-pointer*/ void *characters;
	/*function-pointer*/ void *ignorableWhitespace;
	/*function-pointer*/ void *processingInstruction;
	/*function-pointer*/ void *comment;
	/*function-pointer*/ void *warning;
	/*function-pointer*/ void *error;
	/*function-pointer*/ void *fatalError;
	/*function-pointer*/ void *getParameterEntity;
	/*function-pointer*/ void *cdataBlock;
	/*function-pointer*/ void *externalSubset;
	unsigned initialized;
	void *_private;
	/*function-pointer*/ void *startElementNs;
	/*function-pointer*/ void *endElementNs;
	/*function-pointer*/ void *serror;
} xmlSAXHandler;

typedef struct _xmlDoc xmlDoc;

typedef struct _xmlParserInput xmlParserInput;

typedef struct _xmlNode xmlNode;

typedef struct _xmlParserNodeInfo xmlParserNodeInfo;

typedef struct _xmlParserNodeInfoSeq {
	unsigned long maximum;
	unsigned long length;
	xmlParserNodeInfo *buffer;
} xmlParserNodeInfoSeq;

typedef struct _xmlValidState xmlValidState;

typedef struct _xmlAutomata xmlAutomata;

typedef struct _xmlAutomataState xmlAutomataState;

typedef struct _xmlValidCtxt {
	void *userData;
	/*function-pointer*/ void *error;
	/*function-pointer*/ void *warning;
	xmlNode *node;
	int nodeNr;
	int nodeMax;
	xmlNode **nodeTab;
	unsigned finishDtd;
	xmlDoc *doc;
	int valid;
	xmlValidState *vstate;
	int vstateNr;
	int vstateMax;
	xmlValidState *vstateTab;
	xmlAutomata *am;
	xmlAutomataState *state;
} xmlValidCtxt;

typedef struct _xmlDict xmlDict;

typedef struct _xmlHashTable xmlHashTable;

typedef struct _xmlAttr xmlAttr;

typedef struct _xmlError {
	int domain;
	int code;
	char *message;
	int level;
	char *file;
	int line;
	char *str1;
	char *str2;
	char *str3;
	int int1;
	int int2;
	void *ctxt;
	void *node;
} xmlError;

typedef struct _xmlParserCtxt {
	xmlSAXHandler *_field1;
	void *_field2;
	xmlDoc *_field3;
	int _field4;
	int _field5;
	char *_field6;
	char *_field7;
	int _field8;
	int _field9;
	xmlParserInput *_field10;
	int _field11;
	int _field12;
	xmlParserInput **_field13;
	xmlNode *_field14;
	int _field15;
	int _field16;
	xmlNode **_field17;
	int _field18;
	xmlParserNodeInfoSeq _field19;
	int _field20;
	int _field21;
	int _field22;
	int _field23;
	int _field24;
	int _field25;
	xmlValidCtxt _field26;
	int _field27;
	int _field28;
	char *_field29;
	char *_field30;
	int _field31;
	int _field32;
	char **_field33;
	long _field34;
	long _field35;
	int _field36;
	int _field37;
	int _field38;
	char *_field39;
	char *_field40;
	char *_field41;
	int *_field42;
	int _field43;
	int _field44;
	int *_field45;
	int _field46;
	xmlParserInput *_field47;
	int _field48;
	int _field49;
	int _field50;
	int _field51;
	void *_field52;
	int _field53;
	int _field54;
	void *_field55;
	int _field56;
	int _field57;
	xmlDict *_field58;
	char **_field59;
	int _field60;
	int _field61;
	char *_field62;
	char *_field63;
	char *_field64;
	int _field65;
	int _field66;
	int _field67;
	char **_field68;
	int *_field69;
	void **_field70;
	xmlHashTable *_field71;
	xmlHashTable *_field72;
	int _field73;
	int _field74;
	int _field75;
	int _field76;
	xmlNode *_field77;
	int _field78;
	xmlAttr *_field79;
	xmlError _field80;
	int _field81;
	unsigned long _field82;
	unsigned long _field83;
} xmlParserCtxt;


