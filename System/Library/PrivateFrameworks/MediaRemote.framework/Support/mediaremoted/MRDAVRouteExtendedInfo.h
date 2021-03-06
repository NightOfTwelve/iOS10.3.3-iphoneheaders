/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface MRDAVRouteExtendedInfo : NSObject {

	char _canBeDefaultRoute;
	char _canBeSystemDefaultRoute;
	char _inputRoute;
	char _outputRoute;
	NSDictionary* _route;

}

@property (nonatomic,readonly) NSDictionary * route;                               //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) char requiresPIN; 
@property (nonatomic,readonly) NSString * modelName; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) char canBeDefaultRoute;                             //@synthesize canBeDefaultRoute=_canBeDefaultRoute - In the implementation block
@property (nonatomic,readonly) char canBeSystemDefaultRoute;                       //@synthesize canBeSystemDefaultRoute=_canBeSystemDefaultRoute - In the implementation block
@property (getter=isInputRoute,nonatomic,readonly) char inputRoute;                //@synthesize inputRoute=_inputRoute - In the implementation block
@property (getter=isOutputRoute,nonatomic,readonly) char outputRoute;              //@synthesize outputRoute=_outputRoute - In the implementation block
+(id)extendedInfoWithRoute:(id)arg1 ;
-(id)_extendedInfo;
-(char)canBeDefaultRoute;
-(char)canBeSystemDefaultRoute;
-(char)isInputRoute;
-(char)isOutputRoute;
-(void)dealloc;
-(NSDictionary *)route;
-(id)initWithRoute:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(char)requiresPIN;
-(NSString *)modelName;
@end

