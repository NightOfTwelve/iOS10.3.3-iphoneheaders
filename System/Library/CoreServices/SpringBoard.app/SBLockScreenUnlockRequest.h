/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBSProcessHandle;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying> {

	NSString* _name;
	int _source;
	int _intent;
	FBSProcessHandle* _process;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int source;                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) FBSProcessHandle * process;              //@synthesize process=_process - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSource:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)source;
-(int)intent;
-(void)setIntent:(int)arg1 ;
-(FBSProcessHandle *)process;
-(void)setProcess:(FBSProcessHandle *)arg1 ;
@end

