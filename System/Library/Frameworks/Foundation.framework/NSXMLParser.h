/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSData, NSSet, NSURL;

@interface NSXMLParser : NSObject {

	id _reserved0;
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	xmlSAXHandler* _saxHandler;
	xmlParserCtxt* _parserContext;
	unsigned _parserFlags;
	NSError* _error;
	NSMutableArray* _namespaces;
	CFDictionaryRef _slowStringMap;
	char _delegateAborted;
	char _haveDetectedEncoding;
	NSData* _bomChunk;
	unsigned _chunkSize;
	NSSet* _allowedEntityURLs;
	NSURL* _url;
	unsigned _externalEntityResolvingPolicy;

}

@property (assign) id<NSXMLParserDelegate> delegate; 
@property (assign) char shouldProcessNamespaces; 
@property (assign) char shouldReportNamespacePrefixes; 
@property (assign) unsigned externalEntityResolvingPolicy; 
@property (copy) NSSet * allowedExternalEntityURLs; 
@property (copy,readonly) NSError * parserError; 
@property (assign) char shouldResolveExternalEntities; 
+(void)setCurrentParser:(id)arg1 ;
+(id)currentParser;
-(void)_initializeSAX2Callbacks;
-(id)initForIncrementalParsing;
-(unsigned)externalEntityResolvingPolicy;
-(NSSet *)allowedExternalEntityURLs;
-(void)_setExpandedParserError:(id)arg1 ;
-(void)_setParserError:(int)arg1 ;
-(char)shouldResolveExternalEntities;
-(char)parseData:(id)arg1 ;
-(char)_handleParseResult:(int)arg1 ;
-(char)finishIncrementalParse;
-(char)parseFromStream;
-(void)setShouldProcessNamespaces:(char)arg1 ;
-(void)setShouldReportNamespacePrefixes:(char)arg1 ;
-(void)setShouldResolveExternalEntities:(char)arg1 ;
-(void)setAllowedExternalEntityURLs:(NSSet *)arg1 ;
-(void)setExternalEntityResolvingPolicy:(unsigned)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(char)shouldProcessNamespaces;
-(char)shouldReportNamespacePrefixes;
-(void)setShouldContinueAfterFatalError:(char)arg1 ;
-(char)shouldContinueAfterFatalError;
-(void)abortParsing;
-(NSError *)parserError;
-(id)publicID;
-(int)lineNumber;
-(void)_pushNamespaces:(id)arg1 ;
-(void)_popNamespaces;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(void)dealloc;
-(id<NSXMLParserDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(char)parse;
-(id)initWithStream:(id)arg1 ;
-(int)columnNumber;
-(id)systemID;
@end

