/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBThermalWarningSuppressionAssertionDelegate, OS_dispatch_source;
@class NSString, NSObject;

@interface SBThermalWarningSuppressionAssertion : NSObject {

	id<SBThermalWarningSuppressionAssertionDelegate> _delegate;
	NSString* _reason;
	unsigned _clientPort;
	NSObject*<OS_dispatch_source> _source;

}

@property (assign,nonatomic,__weak) id<SBThermalWarningSuppressionAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                                      //@synthesize reason=_reason - In the implementation block
-(id)initWithClientPort:(unsigned)arg1 reason:(id)arg2 ;
-(void)setDelegate:(id<SBThermalWarningSuppressionAssertionDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SBThermalWarningSuppressionAssertionDelegate>)delegate;
-(NSString *)reason;
@end

