/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Videos/VideosURLHandlerProtocol.h>

@class _VideosURLHandlerDelayedAction, NSString;

@interface VideosURLHandler : NSObject <VideosURLHandlerProtocol> {

	/*^block*/id _completionHandler;
	_VideosURLHandlerDelayedAction* _delayedAction;

}

@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) _VideosURLHandlerDelayedAction * delayedAction;              //@synthesize delayedAction=_delayedAction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_rentalDataChanged:(id)arg1 ;
-(id)_queryDictionaryFromURL:(id)arg1 ;
-(void)cancelPendingAction;
-(char)canHandleURL:(id)arg1 ;
-(id)_mediaItemForDelayedAction;
-(void)_processRentalChangeNotification:(id)arg1 ;
-(char)isDeepLinkURL:(id)arg1 ;
-(char)isStorePlayURL:(id)arg1 ;
-(void)processURL:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(_VideosURLHandlerDelayedAction *)delayedAction;
-(void)dealloc;
-(id)_init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_mediaLibraryChanged:(id)arg1 ;
@end
