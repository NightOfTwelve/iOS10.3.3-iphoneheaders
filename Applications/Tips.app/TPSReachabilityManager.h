/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TPSReachability, NSString;

@interface TPSReachabilityManager : NSObject {

	char _notifying;
	char _hostActive;
	char _reachabilityInitialized;
	char _connected;
	char _internetActive;
	TPSReachability* _internetReachability;
	TPSReachability* _hostReachability;
	NSString* _hostName;

}

@property (assign,nonatomic) char reachabilityInitialized;                        //@synthesize reachabilityInitialized=_reachabilityInitialized - In the implementation block
@property (assign,nonatomic) char connected;                                      //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char internetActive;                                 //@synthesize internetActive=_internetActive - In the implementation block
@property (nonatomic,retain) TPSReachability * internetReachability;              //@synthesize internetReachability=_internetReachability - In the implementation block
@property (nonatomic,retain) TPSReachability * hostReachability;                  //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                 //@synthesize hostName=_hostName - In the implementation block
+(id)defaultManager;
-(NSString *)hostName;
-(id)init;
-(void)dealloc;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setConnected:(char)arg1 ;
-(char)connected;
-(void)updateStatus:(id)arg1 ;
-(char)isNetworkError:(id)arg1 ;
-(void)setReachabilityInitialized:(char)arg1 ;
-(char)reachabilityInitialized;
-(char)internetActive;
-(void)setInternetActive:(char)arg1 ;
-(TPSReachability *)hostReachability;
-(void)setHostReachability:(TPSReachability *)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)startNotifier;
-(TPSReachability *)internetReachability;
-(void)setInternetReachability:(TPSReachability *)arg1 ;
-(void)stopNotifier;
@end
