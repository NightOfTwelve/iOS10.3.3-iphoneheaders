/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VOTElementUniqueIdentification : NSObject <NSCopying> {

	NSString* hashKey;

}

@property (nonatomic,copy) NSString * hashKey; 
+(id)identificationFromElement:(id)arg1 ;
+(id)identificationFromKey:(id)arg1 ;
-(void)setHashKey:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)hashKey;
@end

