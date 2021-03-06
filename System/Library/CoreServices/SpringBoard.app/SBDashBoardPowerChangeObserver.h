/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface SBDashBoardPowerChangeObserver : NSObject {

	id<NSObject> _notificationToken;
	char _connectedToPower;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isConnectedToPower,nonatomic) char connectedToPower;              //@synthesize connectedToPower=_connectedToPower - In the implementation block
-(char)isConnectedToPower;
-(void)setIsConnectedToPower:(char)arg1 ;
-(void)setConnectedToPower:(char)arg1 ;
-(void)dealloc;
-(void)update;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

