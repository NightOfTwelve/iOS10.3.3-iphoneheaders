/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:16:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class ACAccountStore;

@interface ACAccountStoreDelegate : NSObject {

	ACAccountStore* fAccountStore;
	char fStoreReady;
	queue* fQueue;
	block<void ()(iCloudAccountEvent, const std::__1::basic_string<char> &)>* fCallback;
	shared_ptr<ctu::Timer>* fRetryEvent;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fCurrentUsername;
	shared_ptr<std::__1::basic_string<char> >* fHookup;

}
-(void)storeStatusChanged:(id)arg1 ;
-(void)storePasswordChanged:(id)arg1 ;
-(void)initAccountNameWithRetry;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)findAccountName;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getPrimaryAccount;
-(BOOL)isManagedAppleId;
-(void)dealloc;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(queue*)arg2 ;
@end

