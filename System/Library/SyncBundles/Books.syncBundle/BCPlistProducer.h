/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BCLockout;

@interface BCPlistProducer : NSObject {

	NSString* _path;
	int _attemptCount;
	char _dataUnchanged;
	BCLockout* _lockout;

}
-(id)produceData;
-(void)fileWasModifiedDuringDataProduction;
-(void)fileWriteFailed;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(char)write;
-(char)shouldRetry;
@end
