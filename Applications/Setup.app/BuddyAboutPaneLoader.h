/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class NSURL, UIViewController, RemoteUIController, NSString;

@interface BuddyAboutPaneLoader : NSObject <RemoteUIControllerDelegate> {

	char _firstPage;
	NSURL* _baseURL;
	UIViewController* _hostViewController;
	/*^block*/id _completion;
	/*^block*/id _requestMutator;
	RemoteUIController* _ruiController;

}

@property (nonatomic,retain) NSURL * baseURL;                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id completion;                                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id requestMutator;                                           //@synthesize requestMutator=_requestMutator - In the implementation block
@property (nonatomic,retain) RemoteUIController * ruiController;                        //@synthesize ruiController=_ruiController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loaderWithBaseURL:(id)arg1 hostViewController:(id)arg2 ;
-(void)showPaneForAboutPageNamed:(id)arg1 withRequestMutator:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRequestMutator:(id)arg1 ;
-(id)requestMutator;
-(void)_cleanup;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setRuiController:(RemoteUIController *)arg1 ;
-(RemoteUIController *)ruiController;
-(UIViewController *)hostViewController;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(char)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned*)arg3 ;
@end
