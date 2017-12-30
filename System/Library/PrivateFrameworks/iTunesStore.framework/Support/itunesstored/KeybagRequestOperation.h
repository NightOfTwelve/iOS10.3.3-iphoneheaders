/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, SSKeybagRequest, NSArray;

@interface KeybagRequestOperation : ISOperation {

	NSString* _clientIdentifierHeader;
	SSKeybagRequest* _request;
	NSString* _userAgent;
	NSArray* _claimedBundleIdentifiers;

}

@property (readonly) NSArray * claimedBundleIdentifiers;              //@synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers - In the implementation block
-(void)_getDownloaderIdentifier:(id*)arg1 purchaserIdentifier:(id*)arg2 forApplication:(id)arg3 ;
-(id)initWithKeybagRequest:(id)arg1 clientIdentifierHeader:(id)arg2 userAgent:(id)arg3 ;
-(id)initWithKeybagRequest:(id)arg1 client:(id)arg2 ;
-(NSArray *)claimedBundleIdentifiers;
-(void)run;
@end
