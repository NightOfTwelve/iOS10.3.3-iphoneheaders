/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailWebProcessBundle.bundle/MailWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKWebProcessPlugInLoadDelegate.h>
#import <MobileMail/MFMailWebProcessProxy.h>

@protocol MFMailWebProcessDelegate;
@class NSString, NSMutableDictionary, JSContext;

@interface MFMailWebProcessLoadDelegate : NSObject <WKWebProcessPlugInLoadDelegate, MFMailWebProcessProxy> {

	char _didSynchronize;
	id<MFMailWebProcessDelegate> _mailDelegate;
	NSString* _messageContentScheme;
	NSMutableDictionary* _resourceIdentifiersToRequestURLs;
	JSContext* _currentJSContext;
	NSMutableDictionary* _dictionaryWrappers;

}

@property (nonatomic,copy) NSString * messageContentScheme;                                       //@synthesize messageContentScheme=_messageContentScheme - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resourceIdentifiersToRequestURLs;              //@synthesize resourceIdentifiersToRequestURLs=_resourceIdentifiersToRequestURLs - In the implementation block
@property (nonatomic,retain) JSContext * currentJSContext;                                        //@synthesize currentJSContext=_currentJSContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionaryWrappers;                            //@synthesize dictionaryWrappers=_dictionaryWrappers - In the implementation block
@property (assign,nonatomic) char didSynchronize;                                                 //@synthesize didSynchronize=_didSynchronize - In the implementation block
@property (nonatomic,retain) id<MFMailWebProcessDelegate> mailDelegate;                           //@synthesize mailDelegate=_mailDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageContentScheme:(NSString *)arg1 ;
-(void)registerDictionary:(id)arg1 name:(id)arg2 ;
-(void)setDictionary:(id)arg1 forWebViewDictionaryWithName:(id)arg2 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 forWebViewDictionaryWithName:(id)arg2 ;
-(JSContext *)currentJSContext;
-(char)didSynchronize;
-(id)externalConstants;
-(NSString *)messageContentScheme;
-(void)setResourceIdentifiersToRequestURLs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)resourceIdentifiersToRequestURLs;
-(void)setDictionaryWrappers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dictionaryWrappers;
-(void)setMailDelegate:(id<MFMailWebProcessDelegate>)arg1 ;
-(id<MFMailWebProcessDelegate>)mailDelegate;
-(void)_synchronizeGlobalObjectContext;
-(void)setDidSynchronize:(char)arg1 ;
-(void)setCurrentJSContext:(JSContext *)arg1 ;
-(id)init;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFinishLoadForResource:(unsigned long long)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFailLoadForResource:(unsigned long long)arg3 error:(id)arg4 ;
@end
